#define BOOST_TEST_MODULE BillSplitCheckerTest

#include "BillSplitChecker.hpp"
#include <vector>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(BillSplitCheckerSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestSet_1)
{
  // Arrange
  vector<int> prices = { 3, 10, 2, 9 };
  size_t missed_index = 1;
  int share_to_pay = 12;
  size_t expected_result = 5;

  BillSplitChecker<int> bsc(prices);

  // Act
  auto actual_result = bsc.check(missed_index, share_to_pay);

  // Assert
  BOOST_CHECK_EQUAL(expected_result, actual_result);
}

BOOST_AUTO_TEST_CASE(TestSet_2)
{
  // Arrange
  vector<int> prices = { 3, 10, 2, 9 };
  size_t missed_index = 1;
  int share_to_pay = 7;
  size_t expected_result = 0;

  BillSplitChecker<int> bsc(prices);

  // Act
  auto actual_result = bsc.check(missed_index, share_to_pay);

  // Assert
  BOOST_CHECK_EQUAL(expected_result, actual_result);
}

BOOST_AUTO_TEST_SUITE_END()