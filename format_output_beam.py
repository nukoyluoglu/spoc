import argparse

src_path = 'data/tok-test-src.tsv'
tgt_path = 'data/tok-test-tgt.tsv'
out_path = 'out/translate.summary-nodummy'

def main(pred_path):
	IGNORE_BRACES = False 
	def format_code(code):
		code.strip()
		# Resplit and rejoin
		code = ' '.join(code.split())
		# Remove braces if specified
		if IGNORE_BRACES:
			code = re.sub('^}|{$', '', code).strip()
		return code

	src_lines = open(src_path, "r").readlines()
	tgt_lines = open(tgt_path, "r").readlines()
	pred_lines = open(pred_path, "r").readlines()
	fout = open(out_path, "w")

	header = ['index', 'text', 'gold_score', 'pred_score', 'gold', 'pred']
	print("\t".join(str(x) for x in header), file=fout)
	for i, (src, tgt, pred) in enumerate(zip(src_lines, tgt_lines, pred_lines), 1):
		index = i
		text = src.strip()
		gold_score = 'N/A'
		pred_score = 'N/A'
		gold = format_code(tgt)
		preds = pred.split('\t')
		preds = [format_code(pred) for pred in preds]
		data = [index, text, gold_score, pred_score, gold] + preds
		print("\t".join(str(x) for x in data), file=fout)

if __name__ == "__main__":
	parser = argparse.ArgumentParser()
	parser.add_argument('pred_path', type=str)
	args = parser.parse_args()
	main(args.pred_path)



