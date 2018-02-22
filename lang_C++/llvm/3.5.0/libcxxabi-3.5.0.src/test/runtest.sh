#!/bin/sh

exe_file=$1
log_file=$2

start=$(date +%s)
./$exe_file
if [ $? -eq 0 ]; then
  result="PASS"
#  echo "${exe_file%.exe}: PASS"
#  echo ":test-result:PASS" > $log_file
else
  result="FAIL"
#  echo "${exe_file%.exe}: FAIL"
#  echo ":test-result:FAIL" > $log_file
fi

end=$(date +%s)
dt=$((end-start))

echo ":test-result:$result" > $log_file
echo "$exe_file: $result (${dt}s)"

