##teamcity[testSuiteStarted name='Tests/tests/Failure' locationHint='file://tests/.tests/Failure.php' flowId='1234']
##teamcity[testStarted name='it can fail with comparison' locationHint='pest_qn://tests/.tests/Failure.php::it can fail with comparison' flowId='1234']
##teamcity[testFailed name='it can fail with comparison' message='Failed asserting that true matches expected false.' details='at src/Mixins/Expectation.php:342|nat src/Support/ExpectationPipeline.php:75|nat src/Support/ExpectationPipeline.php:79|nat src/Expectation.php:300|nat tests/.tests/Failure.php:6|nat src/Factories/TestCaseMethodFactory.php:100|nat src/Concerns/Testable.php:272|nat src/Support/ExceptionTrace.php:28|nat src/Concerns/Testable.php:272|nat src/Concerns/Testable.php:215|nat src/Kernel.php:84' type='comparisonFailure' actual='true' expected='false' flowId='1234']
##teamcity[testFinished name='it can fail with comparison' duration='100000' flowId='1234']
##teamcity[testStarted name='it can be ignored because of no assertions' locationHint='pest_qn://tests/.tests/Failure.php::it can be ignored because of no assertions' flowId='1234']
##teamcity[testIgnored name='it can be ignored because of no assertions' message='This test did not perform any assertions' details='' flowId='1234']
##teamcity[testFinished name='it can be ignored because of no assertions' duration='100000' flowId='1234']
##teamcity[testStarted name='it can be ignored because it is skipped' locationHint='pest_qn://tests/.tests/Failure.php::it can be ignored because it is skipped' flowId='1234']
##teamcity[testIgnored name='it can be ignored because it is skipped' message='This test was ignored.' details='' flowId='1234']
##teamcity[testFinished name='it can be ignored because it is skipped' duration='100000' flowId='1234']
##teamcity[testStarted name='it can fail' locationHint='pest_qn://tests/.tests/Failure.php::it can fail' flowId='1234']
##teamcity[testFailed name='it can fail' message='oh noo' details='at tests/.tests/Failure.php:18|nat src/Factories/TestCaseMethodFactory.php:100|nat src/Concerns/Testable.php:272|nat src/Support/ExceptionTrace.php:28|nat src/Concerns/Testable.php:272|nat src/Concerns/Testable.php:215|nat src/Kernel.php:84' flowId='1234']
##teamcity[testFinished name='it can fail' duration='100000' flowId='1234']
##teamcity[testStarted name='it is not done yet' locationHint='pest_qn://tests/.tests/Failure.php::it is not done yet' flowId='1234']
##teamcity[testIgnored name='it is not done yet' message='This test was ignored.' details='' flowId='1234']
##teamcity[testFinished name='it is not done yet' duration='100000' flowId='1234']
##teamcity[testStarted name='build this one.' locationHint='pest_qn://tests/.tests/Failure.php::build this one.' flowId='1234']
##teamcity[testIgnored name='build this one.' message='This test was ignored.' details='' flowId='1234']
##teamcity[testFinished name='build this one.' duration='100000' flowId='1234']
##teamcity[testSuiteFinished name='Tests/tests/Failure' flowId='1234']

  [90mTests:[39m    [31;1m2 failed[39;22m[90m,[39m[39m [39m[33;1m1 risky[39;22m[90m,[39m[39m [39m[36;1m2 todos[39;22m[90m,[39m[39m [39m[33;1m1 skipped[39;22m[90m (2 assertions)[39m
  [90mDuration:[39m [39m1.00s[39m

