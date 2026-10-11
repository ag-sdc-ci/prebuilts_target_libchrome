#ifndef TESTING_GTEST_INCLUDE_GTEST_GTEST_PROD_H_
#define TESTING_GTEST_INCLUDE_GTEST_GTEST_PROD_H_

#if __has_include(<gtest/gtest_prod.h>)
#include <gtest/gtest_prod.h>
#elif !defined(FRIEND_TEST)
#define FRIEND_TEST(test_case_name, test_name) \
  friend class test_case_name##_##test_name##_Test
#endif

#endif  // TESTING_GTEST_INCLUDE_GTEST_GTEST_PROD_H_
