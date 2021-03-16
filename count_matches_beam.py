from collections import defaultdict
import os

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
				rank_str, success_str = line.split()
				success_per_rank[int(rank_str)] += int(success_str)
print('# Exact Match: {}/{}, {}%'.format(num_exact_match, num_test_cases, 100 * num_exact_match / num_test_cases))
print('# True Oracle: {}/{}, {}%'.format(num_true_oracle, num_test_cases, 100 * num_true_oracle / num_test_cases))
print('# True Oracle (Line by Line): {}/{}, {}%'.format(num_success, num_lines, 100 * num_success / num_lines))
for rank, success in success_per_rank.items():
	print('# True Oracle at Rank {} (Line by Line): {}/{}, {}% (of total lines), {}% (of successful lines)'.format(rank, success, num_lines, 100 * success / num_lines, 100 * success / num_success))