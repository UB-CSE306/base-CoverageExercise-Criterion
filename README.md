# CoverageExercise

Class exercise to become familiar with gcov.  The purported aim is for you to work together with a few fellow students sitting next to you to try to achieve 100% code coverage from the tests while at the same time achieving 100% passage for your tests.  The code is buggy in a few ways, so you may not have time to achieve this goal.  The actual learning outcome is for you to become familiar with how to check for test coverage using gcov, including how to run gcov to produce a coverager report, how to read the coverage report, and how to engage in whitebox testing to move towards the goal of 100% coverage and test passage.

Read the [URI Scheme documentation](https://tools.ietf.org/html/rfc3986#section-3.1) to better understand the purpose of the schemeValidator code.

Read the [gcov documentation](https://gcc.gnu.org/onlinedocs/gcc/Gcov.html#Gcov) to better understand how to interact with gcov.  On the [gcov Wikipedia page](https://en.wikipedia.org/wiki/Gcov) you will find:
> The line counts can be seen in the first column of the output. Lines which were not executed are marked with hashes ‘######’.

Run ```make tests``` to make the testing executable, ```tests```.

Run ```./tests``` to run the tests.

Run ```gcov schemeValidator.c``` to generate coverage report for ```schemeValidator.c```.

Inspect coverage results in ```schemeValidator.c.gcov```


