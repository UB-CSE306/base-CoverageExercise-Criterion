#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "schemeValidator.h"
#include <criterion/criterion.h>


void runtest(char *input, int expected);

// Tests

Test(coverage, test00) {  runtest("4",-1);  }
Test(coverage, test01) {  runtest("http",0);  }
Test(coverage, test02) {  runtest("HTTP",1);  }
Test(coverage, test03) {  runtest("HTTP+-",1);  }
Test(coverage, test04) {  runtest("HT.TP",1);  }
Test(coverage, test05) {  runtest("HT*TP",-1);  }
Test(coverage, test06) {  runtest("ht.TP",1);  }
Test(coverage, test07) {  runtest("ht*TP",-1);  }

void runtest(char *input, int expected) {
  int actual = schemeValidator(input);
  cr_assert_eq(expected,actual);
}


