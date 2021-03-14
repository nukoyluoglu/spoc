#!/bin/bash

mkdir out

pred_path=$1
python ./format_output_beam.py $pred_path

# Insert back dummy lines that were not translated
./translator/recover-dummy.py ./data/train/split/spoc-train-test.tsv out/translate.summary-nodummy > out/translate.summary
cp out/translate.summary out/spoc-train-test.summary
cp ./data/train/split/spoc-train-test.tsv out/
bash stitcher/stitching.sh out/spoc-train-test

python ./count_matches.py