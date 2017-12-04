#define BOOST_TEST_MODULE DivisibleSumPairsTest

#include "DivisibleSumPairs.hpp"
#include <vector>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(DivisibleSumPairsSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestSet_1)
{
  // Arrange
  vector<int> set = { 1, 3, 2, 6, 1, 2};
  int k = 3;

  size_t expected_result = 5;
  DivisibleSumPairs<int> dsp(set);

  // Act
  auto actual_result = dsp.get(k);

  // Assert
  BOOST_CHECK_EQUAL(expected_result, actual_result);
}

BOOST_AUTO_TEST_SUITE_END()