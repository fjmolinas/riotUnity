/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#ifdef __WIN32__
#define UNITY_INCLUDE_SETUP_STUBS
#endif
#include "unity.h"
#ifndef UNITY_EXCLUDE_SETJMP_H
#include <setjmp.h>
#endif
#include <stdio.h>
#include "xtimer.h"
#include "debug.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_multiply(void);
extern void test_div(void);
extern void test_1_microsecond(void);
extern void test_2_microsecond(void);
extern void test_10_microsecond(void);
extern void test_100_microsecond(void);
extern void test_500_microsecond(void);
extern void test_10_seconds(void);
extern void test_xtimer_now64(void);
extern void test_wrapping(void);
extern void test_timers_when_counter_wrap(void);
extern void test_set_msg(void);
extern void test_long_periods(void);
extern void test_timer_set64(void);


/*=======Suite Setup=====*/
static void suite_setup(void)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  suiteSetUp();
#endif
}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  return suiteTearDown(num_failures);
#else
  return num_failures;
#endif
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("test_cases.c");
  RUN_TEST(test_multiply, 56);
  RUN_TEST(test_div, 97);
  RUN_TEST(test_1_microsecond, 131);
  RUN_TEST(test_2_microsecond, 146);
  RUN_TEST(test_10_microsecond, 164);
  RUN_TEST(test_100_microsecond, 182);
  RUN_TEST(test_500_microsecond, 199);
  RUN_TEST(test_10_seconds, 218);
  RUN_TEST(test_xtimer_now64, 233);
  RUN_TEST(test_wrapping, 248);
  RUN_TEST(test_timers_when_counter_wrap, 278);
  RUN_TEST(test_set_msg, 333);
  RUN_TEST(test_long_periods, 368);
  RUN_TEST(test_timer_set64, 383);

  return suite_teardown(UnityEnd());
}
