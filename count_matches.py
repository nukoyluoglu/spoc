import os

num_exact_match = 0
num_true_oracle = 0
num_test_cases = 0
for test_case in os.listdir('./out'):
	if test_case.startswith('0') or test_case.startswith('1'):
		test_path = os.path.join('./out', test_case)
		if 'in_beam_exact_match.txt' in os.listdir(test_path):
			num_exact_match += 1
		if 'in_beam_true_oracle.txt' in os.listdir(test_path):
			num_true_oracle += 1
		num_test_cases += 1
print('# Exact Match: {}, {}%'.format(num_exact_match, 100 * num_exact_match / num_test_cases))
print('# True Oracle: {}, {}%'.format(num_true_oracle, 100 * num_true_oracle / num_test_cases))