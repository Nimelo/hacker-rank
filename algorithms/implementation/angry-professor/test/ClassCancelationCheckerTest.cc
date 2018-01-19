#define BOOST_TEST_MODULE ClassCancelationCheckerTest

#include "ClassCancelationChecker.hpp"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(ClassCancelationCheckerSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
  // Arrange
  vector<int> arrival_times = { -1, -3, 4, 2 };
  size_t cancelation_threshold = 3;
  bool expected = true;

  ClassCancelationChecker checker(arrival_times);
  
  // Act
  auto actual = checker.is_canceled(cancelation_threshold);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
  // Arrange
  vector<int> arrival_times = { 0, -1, 2, 1};
  size_t cancelation_threshold = 2;
  bool expected = false;

  ClassCancelationChecker checker(arrival_times);
  
  // Act
  auto actual = checker.is_canceled(cancelation_threshold);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_SUITE_END()