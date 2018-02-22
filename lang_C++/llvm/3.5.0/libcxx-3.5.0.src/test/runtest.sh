#!/bin/sh

exe_file=$1
log_file=$2

start=$(date +%s)
./$exe_file
error=$?
if [ $error -eq 0 ]; then
  result="PASS"
else
  result="FAIL"
fi

end=$(date +%s)
dt=$((end-start))

echo ":test-result:$result" > $log_file
echo "$exe_file: $result (${dt}s)"

exit $error

