from collections import defaultdict
import os
import csv
import matplotlib.pyplot as plt
import numpy as np
from matplotlib.colors import BoundaryNorm

line_data_per_model = {}
bar_data_per_model = {}
true_oracle_per_model = {}
length_data_per_rank100_model = {}
all_models = []
for out_dir in ['Code Prefix_(N = 5)', 'Pseudo Prefix_(N = 10)', 'Pseudo Prefix_(N = 5)', 'Baseline']:
	model = out_dir.replace('_', '\n')
	all_models.append(model)
	print(model.replace('\n', ' '))
	num_exact_match = 0
	num_true_oracle = 0
	num_test_cases = 0
	num_lines = 0
	num_success = 0
	success_per_rank = defaultdict(int)
	success_per_rank_per_program = []
	num_lines_per_program = []
	num_success_per_program = []
	for test_case in os.listdir('./' + out_dir):
		if test_case.startswith('0') or test_case.startswith('1'):
			success_per_rank_in_program = defaultdict(int)
			cum_success_per_rank_in_program = defaultdict(int)
			test_path = os.path.join('./{}'.format(out_dir), test_case)
			if 'in_beam_exact_match.txt' in os.listdir(test_path):
				num_exact_match += 1
			if 'in_beam_true_oracle.txt' in os.listdir(test_path):
				num_true_oracle += 1
			num_test_cases += 1
			with open("{}/in_beam_true_oracle_linebyline.txt".format(test_path), "r") as infile:
				num_lines_program = int(infile.readline())
				num_lines += num_lines_program
				num_lines_per_program.append(num_lines_program)
				num_success_program = int(infile.readline())
				num_success += num_success_program
				num_success_per_program.append(num_success_program)
				line = True
				while line:
					line = infile.readline()
					if line != '':
						rank_str, success_str = line.split()
						rank = int(rank_str)
						success = int(success_str)
						success_per_rank[rank] += success
						success_per_rank_in_program[rank] += success
			success_per_rank_per_program.append(success_per_rank_in_program)
	with open(model + '_results_summary.txt', 'w') as outfile:
		outfile.write('# Exact Match: {}/{}, {}%\n'.format(num_exact_match, num_test_cases, 100 * num_exact_match / num_test_cases))
		outfile.write('# True Oracle: {}/{}, {}%\n'.format(num_true_oracle, num_test_cases, 100 * num_true_oracle / num_test_cases))
		outfile.write('# True Oracle (Line by Line): {}/{}, {}%\n'.format(num_success, num_lines, 100 * num_success / num_lines))

	true_oracle_per_model[model] = num_true_oracle

	ranks = np.arange(1, 101)

	success_by_tot_per_rank = []
	success_by_succ_per_rank = []
	for rank in ranks:
		success = success_per_rank[rank]
		success_by_tot = success / num_lines
		success_by_succ = success / num_success
		success_by_tot_per_rank.append(success_by_tot)
		success_by_succ_per_rank.append(success_by_succ)
	success_by_tot_per_rank = np.array(success_by_tot_per_rank)
	success_by_succ_per_rank = np.array(success_by_succ_per_rank)
	top_k_success_by_tot = np.cumsum(success_by_tot_per_rank)
	top_k_success_by_succ = np.cumsum(success_by_succ_per_rank)

	with open(model + '_results_rank.csv', 'w') as outfile:
		writer = csv.writer(outfile)
		writer.writerow(['rank', 'success', 'success per total line', 'cum success per total line', 'success per successful line', 'cum success per successful line'])
		for rank in ranks:
			writer.writerow([rank, success_per_rank[rank], success_by_tot_per_rank[rank - 1], top_k_success_by_tot[rank - 1], success_by_succ_per_rank[rank - 1], top_k_success_by_succ[rank - 1]])

	line_data_per_model[model] = (ranks, top_k_success_by_tot, top_k_success_by_succ)

	num_lines_top_incorrect_per_program = defaultdict(int)
	num_lines_all_incorrect_per_program = defaultdict(int)
	num_programs = len(success_per_rank_per_program)

	with open(model + '_results_rank_per_program.csv', 'w') as outfile:
		writer = csv.writer(outfile)
		writer.writerow(['program', 'rank', 'success', 'success per total line in program', 'success per successful line in program'])
		for i, (num_lines_program, num_success_program, success_per_rank_program) in enumerate(zip(num_lines_per_program, num_success_per_program, success_per_rank_per_program)):
			for rank in ranks:
				success = success_per_rank_program[rank]
				if rank == 1:
					num_lines_top_incorrect_per_program[num_lines_program - success] += 100. / num_programs
				success_by_tot = success / num_lines_program
				if num_success_program > 0:
					success_by_succ = success / num_success_program
				else:
					success_by_succ = float('NaN')
				writer.writerow([i, rank, success, success_by_tot, success_by_succ])
			num_lines_all_incorrect_per_program[num_lines_program - num_success_program] += 100. / num_programs

	bar_data_per_model[model] = (num_lines_top_incorrect_per_program, num_lines_all_incorrect_per_program, num_programs)

	all_top_k_lines_correct_per_program = defaultdict(int)
	all_top_k_lines_correct_per_program_length = {}
	num_program_per_length = defaultdict(int)
	for i, (num_lines_program, num_success_program, success_per_rank_program) in enumerate(zip(num_lines_per_program, num_success_per_program, success_per_rank_per_program)):
		if num_lines_program not in all_top_k_lines_correct_per_program_length:
			all_top_k_lines_correct_per_program_length[num_lines_program] = defaultdict(int)
		cum_success = 0
		for rank in ranks:
			success = success_per_rank_program[rank]
			cum_success += success
			if num_lines_program - cum_success == 0:
				all_top_k_lines_correct_per_program[rank] += 100. / num_programs
				all_top_k_lines_correct_per_program_length[num_lines_program][rank] += 1
		num_program_per_length[num_lines_program] += 1
	print(all_top_k_lines_correct_per_program[1])		
	print(all_top_k_lines_correct_per_program[5])		
	print(all_top_k_lines_correct_per_program[10])		
	print(all_top_k_lines_correct_per_program[100])		
	print('---------')

	lengths = []
	length_success = []
	length_totals = []
	for num_lines_program in sorted(all_top_k_lines_correct_per_program_length):
		lengths.append(num_lines_program)
		length_success.append(all_top_k_lines_correct_per_program_length[num_lines_program][100])
		length_totals.append(num_program_per_length[num_lines_program])
	length_data_per_rank100_model[model] = (np.array(lengths), np.array(length_success), np.array(length_totals))

	bar_data_per_model[model] = (num_lines_top_incorrect_per_program, num_lines_all_incorrect_per_program, num_programs)


fig = plt.figure(figsize=(6,2))
y = [0.15 + 0.25 * i for i in range(len(bar_data_per_model))]
yticklabels = []
for i, (model, (num_lines_top_incorrect_per_program, num_lines_all_incorrect_per_program, num_programs)) in enumerate(bar_data_per_model.items()):
	bar = plt.barh(y[i], num_lines_top_incorrect_per_program[0], height=0.2, color=plt.cm.get_cmap('Pastel1')(3))
	plt.text(bar[0].get_x() + bar[0].get_width() / 2, y[i], '0', ha='center', va='center')
	bar = plt.barh(y[i], num_lines_top_incorrect_per_program[1], height=0.2, left=num_lines_top_incorrect_per_program[0], color=plt.cm.get_cmap('Pastel1')(0))
	plt.text(bar[0].get_x() + bar[0].get_width() / 2, y[i], '1', ha='center', va='center')
	bar = plt.barh(y[i], num_lines_top_incorrect_per_program[2], height=0.2, left=num_lines_top_incorrect_per_program[0] + num_lines_top_incorrect_per_program[1], color=plt.cm.get_cmap('Pastel1')(6))
	plt.text(bar[0].get_x() + bar[0].get_width() / 2, y[i], '2', ha='center', va='center')
	bar = plt.barh(y[i], num_lines_top_incorrect_per_program[3], height=0.2, left=num_lines_top_incorrect_per_program[0] + num_lines_top_incorrect_per_program[1] + num_lines_top_incorrect_per_program[2], color=plt.cm.get_cmap('Pastel1')(2))
	plt.text(bar[0].get_x() + bar[0].get_width() / 2, y[i], '3', ha='center', va='center')
	bar = plt.barh(y[i], 100 - num_lines_top_incorrect_per_program[0] - num_lines_top_incorrect_per_program[1] - num_lines_top_incorrect_per_program[2] - num_lines_top_incorrect_per_program[3], height=0.2, left=num_lines_top_incorrect_per_program[0] + num_lines_top_incorrect_per_program[1] + num_lines_top_incorrect_per_program[2] + num_lines_top_incorrect_per_program[3], color=plt.cm.get_cmap('Pastel1')(5))
	plt.text(bar[0].get_x() + bar[0].get_width() / 2, y[i], '4+', ha='center', va='center')
	yticklabels.append(model)
	print(model.replace('\n', ' '), num_lines_top_incorrect_per_program[0])
plt.yticks(y, yticklabels)
plt.xlim(left=0, right=100)
plt.ylim(bottom=0, top=1.05)
plt.xlabel('%' + ' of programs')
plt.tight_layout()
plt.savefig('top_incorrect.png')
plt.close()

fig = plt.figure(figsize=(6,2))
y = [0.15 + 0.25 * i for i in range(len(bar_data_per_model))]
yticklabels = []
for i, (model, (num_lines_top_incorrect_per_program, num_lines_all_incorrect_per_program, num_programs)) in enumerate(bar_data_per_model.items()):
	x_0, x_1, x_2, x_3, x_4 = num_lines_all_incorrect_per_program[0], num_lines_all_incorrect_per_program[1], num_lines_all_incorrect_per_program[2], num_lines_all_incorrect_per_program[3], 100 - num_lines_all_incorrect_per_program[0] - num_lines_all_incorrect_per_program[1] - num_lines_all_incorrect_per_program[2] - num_lines_all_incorrect_per_program[3]
	bar = plt.barh(y[i], x_0, height=0.2, color=plt.cm.get_cmap('Pastel1')(3))
	plt.text(bar[0].get_x() + bar[0].get_width() / 2, y[i], '0', ha='center', va='center')
	bar = plt.barh(y[i], x_1, height=0.2, left=x_0, color=plt.cm.get_cmap('Pastel1')(0))
	plt.text(bar[0].get_x() + bar[0].get_width() / 2, y[i], '1', ha='center', va='center')
	bar = plt.barh(y[i], x_2, height=0.2, left=x_0 + x_1, color=plt.cm.get_cmap('Pastel1')(6))
	plt.text(bar[0].get_x() + bar[0].get_width() / 2, y[i], '2', ha='center', va='center')
	bar = plt.barh(y[i], x_3, height=0.2, left=x_0 + x_1 + x_2, color=plt.cm.get_cmap('Pastel1')(2))
	plt.text(bar[0].get_x() + bar[0].get_width() / 2, y[i], '3', ha='center', va='center')
	bar = plt.barh(y[i], x_4, height=0.2, left=x_0 + x_1 + x_2 + x_3, color=plt.cm.get_cmap('Pastel1')(5))
	plt.text(bar[0].get_x() + bar[0].get_width() / 2, y[i], '4+', ha='center', va='center')
	yticklabels.append(model)
plt.yticks(y, yticklabels)
plt.xlim(left=0, right=100)
plt.ylim(bottom=0, top=1.05)
plt.xlabel('%' + ' of programs')
plt.tight_layout()
plt.savefig('all_incorrect.png')
plt.close()

fig = plt.figure()
for i, (model, (ranks, top_k_success_by_tot, top_k_success_by_succ)) in enumerate(line_data_per_model.items()):
	model_name = model.replace('\n', ' ')
	p = plt.plot(ranks, top_k_success_by_tot, label=model.replace('\n', ' ') + ', %' + 'total lines')
	plt.plot(ranks, top_k_success_by_succ, linestyle='dashed', color=p[0].get_color(), label=model.replace('\n', ' ') + ', %' + 'successful lines')
plt.ylabel('Success in Top k Lines')
plt.xlabel('Line Rank k')
plt.ylim(bottom=0.75, top=1.)
plt.xlim(left=1, right=100)
plt.legend()
plt.savefig('results_rank_cumulative.png')
plt.close()

fig = plt.figure()
for i, (model, (ranks, top_k_success_by_tot, top_k_success_by_succ)) in enumerate(line_data_per_model.items()):
	model_name = model.replace('\n', ' ')
	p = plt.plot(ranks, top_k_success_by_tot, label=model.replace('\n', ' ') + ', %' + 'total lines')
	plt.plot(ranks, top_k_success_by_succ, linestyle='dashed', color=p[0].get_color(), label=model.replace('\n', ' ') + ', %' + 'successful lines')
plt.ylabel('Success in Top k Lines')
plt.xlabel('Line Rank k')
plt.ylim(bottom=0.75, top=1.)
plt.xlim(left=1, right=100)
plt.xscale('log')
plt.legend()
plt.savefig('results_rank_cumulative_log.png')
plt.close()

fig = plt.figure()
for i, (model, (ranks, top_k_success_by_tot, top_k_success_by_succ)) in enumerate(line_data_per_model.items()):
	p = plt.plot(ranks, success_by_tot_per_rank, label=model.replace('\n', ' ') + ', %' + 'total lines')
	plt.plot(ranks, success_by_succ_per_rank, linestyle='dashed', color=p[0].get_color(), label=model.replace('\n', ' ') + ', %' + 'successful lines')
plt.ylabel('Success in kth Line')
plt.xlabel('Line Rank k')
plt.ylim(bottom=0., top=1.)
plt.xscale('log')
plt.xlim(left=1, right=10)
plt.legend()
plt.savefig('results_rank.png')
plt.close()

# fig = plt.figure()
# x = [0.15 + 0.25 * i for i in range(len(true_oracle_per_model))]
# x = sorted(x, reverse=True)
# xticklabels = []
# for i, (model, num_true_oracle) in enumerate(true_oracle_per_model.items()):
# 	plt.bar(x[i], num_true_oracle, width=0.2)
# 	xticklabels.append(model)
# plt.hlines([1025], min(x) - 0.1, max(x) + 0.1, color='r', label='Number of Programs')
# plt.xticks(x, xticklabels)
# plt.ylabel('Number of Successful Programs')
# plt.legend()
# plt.tight_layout()
# plt.savefig('true_oracle.png')
# plt.close()


for i, (model, num_true_oracle) in enumerate(true_oracle_per_model.items()):
	print(model.replace('\n', ' '), num_true_oracle)

# fig, axs = plt.subplots(16, 1, sharex=True, figsize=(5,8))
# for i, (rank_model, (x, y, c)) in enumerate(length_data_per_rank_model.items()):
# 	pcm = axs[i].pcolormesh(x, y, c, shading='nearest', vmin=c.min(), vmax=c.max())
# 	axs[i].set_yticks([0.5])
# 	axs[i].set_yticklabels([rank_model])
# cbaxes = fig.add_axes([0.8, 0.1, 0.03, 0.8]) 
# cb = fig.colorbar(pcm, ax=axs[:])  
# plt.subplots_adjust(wspace=0, hspace=0)
# fig.tight_layout()
# plt.savefig('length_rank.png')

fig = plt.figure()

model_lengths = []
model_weigths = []
model_names = []
b = np.arange(65, step=5)
for model in reversed(all_models):
	(lengths, length_success, length_totals) = length_data_per_rank100_model[model]
	model_lengths.append(lengths)
	lengths_bintotals = [sum([length_totals[i] for i in range(len(length_totals)) if i in range(x, x + 5)]) for x in b]
	lengths_bintotals = np.repeat(lengths_bintotals, 5)[:54]
	print('LS')
	print(length_success)
	print('LB')
	print(lengths_bintotals)
	model_weigths.append(length_success/lengths_bintotals)
	print('MW')
	print(length_success/lengths_bintotals)
	model_names.append(model.replace('\n', ' '))
print(model_weigths)
plt.hist(model_lengths, bins=b, weights=model_weigths, label=model_names)
plt.xticks(b)
plt.ylabel('Program Success in Top 100 Lines')
plt.xlabel('Number of Lines in Program')
plt.legend()
fig.tight_layout()
plt.savefig('length_rank.png')











