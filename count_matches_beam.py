from collections import defaultdict
import os
import csv
import matplotlib.pyplot as plt

num_exact_match = 0
num_true_oracle = 0
num_test_cases = 0
num_lines = 0
num_success = 0
success_per_rank = defaultdict(int)
for test_case in os.listdir('./out'):
	if test_case.startswith('0') or test_case.startswith('1'):
		test_path = os.path.join('./out', test_case)
		if 'in_beam_exact_match.txt' in os.listdir(test_path):
			num_exact_match += 1
		if 'in_beam_true_oracle.txt' in os.listdir(test_path):
			num_true_oracle += 1
		num_test_cases += 1
		with open("{}/in_beam_true_oracle_linebyline.txt".format(test_path), "r") as infile:
			num_lines += int(infile.readline())
			num_success += int(infile.readline())
			line = True
			while line:
				line = infile.readline()
				if line != '':
					rank_str, success_str = line.split()
					success_per_rank[int(rank_str)] += int(success_str)
with open ('out/results_summary.txt', 'w') as outfile:
	outfile.write('# Exact Match: {}/{}, {}%\n'.format(num_exact_match, num_test_cases, 100 * num_exact_match / num_test_cases))
	outfile.write('# True Oracle: {}/{}, {}%\n'.format(num_true_oracle, num_test_cases, 100 * num_true_oracle / num_test_cases))
	outfile.write('# True Oracle (Line by Line): {}/{}, {}%\n'.format(num_success, num_lines, 100 * num_success / num_lines))

with open ('out/results_rank.csv', 'w') as outfile:
	writer = csv.writer(outfile)
	writer.writerow(['rank', 'success', '%' + 'success (of total lines)', '%' + 'success (of successful lines)'])
	top_k = 0
	top_k_prob_tot = 0
	top_k_prob_succ = 0
	top_k_hist = []
	x = []
	top_k_y_tot = []
	top_k_y_succ = []
	hist = []
	y_tot = []
	y_succ = []
	for rank in range(1, 101):
		success = success_per_rank[rank]
		writer.writerow([rank, success, 100 * success / num_lines, 100 * success / num_success])
		top_k += success
		top_k_prob_tot += success / num_lines
		top_k_prob_succ += success / num_success
		top_k_hist += [rank for _ in range(top_k)]
		x.append(rank)
		top_k_y_tot.append(top_k_prob_tot)
		top_k_y_succ.append(top_k_prob_succ)
		hist += [rank for _ in range(success)]
		y_tot.append(success / num_lines)
		y_succ.append(success / num_success)
	fig, ax1 = plt.subplots()
	ax2 = ax1.twinx()
	ax1.hist(top_k_hist, 100)
	ax2.plot(x, top_k_y_tot, color='r', label='%' + 'total lines')
	ax2.plot(x, top_k_y_succ, color='g', label='%' + 'successful lines')
	ax1.set_ylabel('Success in Top k Lines')
	ax1.set_xlabel('Line Rank k')
	ax1.set_ylim(bottom=0, top=num_lines)
	ax2.set_ylim(bottom=0, top=1.)
	ax1.set_xlim(left=0, right=100)
	plt.legend()
	plt.savefig('out/results_rank_cumulative.png')
	fig, ax1 = plt.subplots()
	ax2 = ax1.twinx()
	ax1.hist(hist, 100)
	ax2.plot(x, y_tot, color='r', label='%' + 'total lines')
	ax2.plot(x, y_succ, color='g', label='%' + 'successful lines')
	ax1.set_ylabel('Success in kth Line')
	ax1.set_xlabel('Line Rank k')
	ax1.set_ylim(bottom=0, top=num_lines)
	ax2.set_ylim(bottom=0, top=1.)
	ax1.set_xlim(left=0, right=100)
	plt.legend()
	plt.savefig('out/results_rank.png')



