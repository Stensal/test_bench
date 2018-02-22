#!/bin/sh

category=$1

br='===================='; br=$br$br$br
ws='[	 ]'
LOGS=$(find ./${category} -name "*.log")
results=$(for b in $LOGS; do echo $b; done)
test -n "$results" || results=/dev/null
all=`  grep "^${ws}*:test-result:"           $results | wc -l`
pass=` grep "^${ws}*:test-result:${ws}*PASS" $results | wc -l`
fail=` grep "^${ws}*:test-result:${ws}*FAIL" $results | wc -l`
if [ $fail -eq 0 ]; then
  exit_code=0
else
  exit_code=1
fi
echo $br
echo "TOTAL:" $all
echo "PASS: " $pass
echo "FAIL: " $fail
echo $br

exit $exit_code
