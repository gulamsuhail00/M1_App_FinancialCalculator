/**
 * @file test_functions.c
 * @author Alrich Roshan
 * @brief Test Functions
 * @version 0.1
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "feature.h"
#include <math.h>

void test_cagr(void);
void test_discountcalculator(void);
void test_ppf(void);
void test_emi(void);
void test_rd(void);
void test_fd(void);
void test_lumpsum(void);
void test_sip(void);


void setUp(){}
/**
 * @brief Required by the unity test framework
 * 
 */
void tearDown(){}

/**
 * @brief Start of the application test
 * 
 * @return int 
 */
int main()
{
  UNITY_BEGIN();

/**
 * @brief Run Test functions
 * 
 */
  RUN_TEST(test_cagr);
  RUN_TEST(test_discountcalculator);
  RUN_TEST(test_ppf);
  RUN_TEST(test_emi);
  RUN_TEST(test_rd);
  RUN_TEST(test_fd);
  RUN_TEST(test_lumpsum);
  RUN_TEST(test_sip);

  /**
   * @brief Close the Unity Test Framework
   * 
   * @return return 
   */
  return UNITY_END();
}

/**
 * @brief Test Functions
 * 
 */
void test_cagr(void) {
  TEST_ASSERT_EQUAL(5, cagr(100, 1000, 2));
}

void test_discountcalculator(void) {
  TEST_ASSERT_EQUAL(2, discountcalculator(100, 2));

}

void test_ppf(void) {
  TEST_ASSERT_EQUAL(14, ppf(100, 2));
  
}

void test_emi(void) {
  TEST_ASSERT_EQUAL(4.254030, emi(100, 2, 2));
  
}

void test_rd(void) {
  TEST_ASSERT_EQUAL(7400, rd(100, 2, 2));
  
}

void test_fd(void) {
  TEST_ASSERT_EQUAL(500, fd(100, 2, 2));
  
}

void test_sip(void) {
  TEST_ASSERT_EQUAL(104.04, sip(100, 2, 2));
  
}

void test_lumpsum(void) {
  TEST_ASSERT_EQUAL(100, lumpsum(100, 2, 2));
  
}