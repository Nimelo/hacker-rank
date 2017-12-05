#define BOOST_TEST_MODULE MigratoryBirdsTest

#include "MigratoryBirds.hpp"
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(MigratoryBirdsSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestSet_1)
{
  // Arrange
  unordered_set<int> types = { 1, 2, 3, 4, 5 };
  vector<int> birds = { 1, 4, 4, 4, 5, 3 };

  MigratoryBirds<int> mb(types);

  // Act
  auto result = mb.get(birds);

  // Assert
  BOOST_CHECK_EQUAL(1, result[1]);
  BOOST_CHECK_EQUAL(3, result[4]);
  BOOST_CHECK_EQUAL(1, result[5]);
  BOOST_CHECK_EQUAL(1, result[3]);
}

BOOST_AUTO_TEST_CASE(TestSet_2)
{
  // Arrange
  unordered_set<int> types = { 1, 2, 3, 4, 5 };
  vector<int> birds = { };

  MigratoryBirds<int> mb(types);

  // Act
  auto result = mb.get(birds);

  // Assert
  BOOST_CHECK_EQUAL(0, result[1]);
  BOOST_CHECK_EQUAL(0, result[4]);
  BOOST_CHECK_EQUAL(0, result[5]);
  BOOST_CHECK_EQUAL(0, result[3]);
}

BOOST_AUTO_TEST_CASE(TestSet_3)
{
  // Arrange
  unordered_set<int> types = { 1, 2, 3, 4, 5 };
  vector<int> birds = { 1, 1, 2, 2 };

  MigratoryBirds<int> mb(types);

  // Act
  auto result = mb.get(birds);

  // Assert
  BOOST_CHECK_EQUAL(2, result[1]);
  BOOST_CHECK_EQUAL(2, result[2]);
}

BOOST_AUTO_TEST_SUITE_END()