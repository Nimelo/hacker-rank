#define BOOST_TEST_MODULE MigratoryBirdsCommonTypeTest

#include "MigratoryBirds.hpp"
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(MigratoryBirdsCommonTypeTestSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestSet_1)
{
  // Arrange
  unordered_set<int> types = { 1, 2, 3, 4, 5 };
  vector<int> birds = { 1, 4, 4, 4, 5, 3 };

  MigratoryBirds<int> mb(types);

  // Act
  auto common_type = mb.get_common_type(birds);

  // Assert
  BOOST_CHECK_EQUAL(4, common_type);
}

BOOST_AUTO_TEST_CASE(TestSet_2)
{
  // Arrange
  unordered_set<int> types = { 1, 2, 3, 4, 5 };
  vector<int> birds = { };

  MigratoryBirds<int> mb(types);

  // Act
  auto common_type = mb.get_common_type(birds);

  // Assert
  BOOST_CHECK_EQUAL(1, common_type);
}

BOOST_AUTO_TEST_CASE(TestSet_3)
{
  // Arrange
  unordered_set<int> types = { 1, 2, 3, 4, 5 };
  vector<int> birds = { 1, 1, 2, 2 };

  MigratoryBirds<int> mb(types);

  // Act
  auto common_type = mb.get_common_type(birds);

  // Assert
  BOOST_CHECK_EQUAL(1, common_type);
}

BOOST_AUTO_TEST_SUITE_END()