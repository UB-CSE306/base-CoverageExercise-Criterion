#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "CUnit.h"
//#include "Automated.h"
#include "Basic.h"
#include "schemeValidator.h"

void runtest(char *input, int expected);

void test01(void) {  runtest("4",-1);  }
void test02(void) {  runtest("http",0);  }
void test03(void) {  runtest("HTTP",1);  }
void test04(void) {  runtest("HTTP+-",1);  }
void test05(void) {  runtest("HT.TP",1);  }
void test06(void) {  runtest("HT*TP",-1);  }
void test07(void) {  runtest("ht.TP",1);  }
void test08(void) {  runtest("ht*TP",-1);  }

void runtest(char *input, int expected) {
  int actual = schemeValidator(input);
  CU_ASSERT_EQUAL(expected,actual);
}


int main() {
  CU_pSuite Suite = NULL;
  if (CUE_SUCCESS != CU_initialize_registry()) { return CU_get_error(); }
  Suite = CU_add_suite("Suite_of_tests_with_valid_inputs", NULL, NULL);
  if (NULL == Suite) {
    CU_cleanup_registry();
    return CU_get_error();
  }
  if ( (    NULL == CU_add_test(Suite, "Testing first char a digit", test01) 
	 || NULL == CU_add_test(Suite, "Testing http",   test02) 
	 || NULL == CU_add_test(Suite, "Testing HTTP",   test03) 
	 || NULL == CU_add_test(Suite, "Testing HTTP+-", test04) 
	 || NULL == CU_add_test(Suite, "Testing HT.TP",  test05) 
	 || NULL == CU_add_test(Suite, "Testing HT*TP",  test06) 
	 || NULL == CU_add_test(Suite, "Testing ht.TP",  test07) 
	 || NULL == CU_add_test(Suite, "Testing ht*TP",  test08) 
	) ) {
    CU_cleanup_registry();
    return CU_get_error();
  }
  //  CU_set_output_filename("test");
  //  CU_automated_run_tests();
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  //  printf("\n");
  //  CU_basic_show_failures(CU_get_failure_list());
  //  printf("\n\n");
  CU_cleanup_registry();
  return CU_get_error();
}
