#define BOOST_TEST_MODULE BetweenTwoSetsTest

#include "BetweenTwoSets.hpp"
#include <set>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(BetweenTwoSetsSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(HappyPath)
{
  // Arrange
  vector<int> A = { 2, 4 };
  vector<int> B = { 16, 32, 96 };
  set<int> expected_result = { 4, 8, 16 };
  
  BetweenTwoSets<int> bts(A, B);
  
  // Act
  auto actual_result = bts.get();

  // Assert
  BOOST_CHECK_EQUAL_COLLECTIONS(
    expected_result.begin(),
    expected_result.end(),
    actual_result.begin(),
    actual_result.end()
  );
}

BOOST_AUTO_TEST_CASE(HappyPath_2)
{
  // Arrange
  vector<int> A = { 2, 4, 8 };
  vector<int> B = { 16, 32, 96 };
  set<int> expected_result = { 8, 16 };
  
  BetweenTwoSets<int> bts(A, B);
  
  // Act
  auto actual_result = bts.get();

  // Assert
  BOOST_CHECK_EQUAL_COLLECTIONS(
    expected_result.begin(),
    expected_result.end(),
    actual_result.begin(),
    actual_result.end()
  );
}

BOOST_AUTO_TEST_CASE(HappyPath_3)
{
  // Arrange
  vector<int> A = { 2, 4, 21 };
  vector<int> B = { 16, 32, 96 };
  set<int> expected_result = { };
  
  BetweenTwoSets<int> bts(A, B);
  
  // Act
  auto actual_result = bts.get();

  // Assert
  BOOST_CHECK_EQUAL_COLLECTIONS(
    expected_result.begin(),
    expected_result.end(),
    actual_result.begin(),
    actual_result.end()
  );
}

BOOST_AUTO_TEST_CASE(HappyPath_4)
{
  // Arrange
  vector<int> A = { 2, 3, 6 };
  vector<int> B = { 42, 7, 21 };
  set<int> expected_result = { };
  
  BetweenTwoSets<int> bts(A, B);
  
  // Act
  auto actual_result = bts.get();

  // Assert
  BOOST_CHECK_EQUAL_COLLECTIONS(
    expected_result.begin(),
    expected_result.end(),
    actual_result.begin(),
    actual_result.end()
  );
}

BOOST_AUTO_TEST_CASE(HappyPath_5)
{
  // Arrange
  vector<int> A = { 1, 7 };
  vector<int> B = { 14 * 3, 14, 28 };
  set<int> expected_result = { 7, 14 };
  
  BetweenTwoSets<int> bts(A, B);
  
  // Act
  auto actual_result = bts.get();

  // Assert
  BOOST_CHECK_EQUAL_COLLECTIONS(
    expected_result.begin(),
    expected_result.end(),
    actual_result.begin(),
    actual_result.end()
  );
}

BOOST_AUTO_TEST_CASE(HappyPath_6)
{
  // Arrange
  vector<int> A = { 1 };
  vector<int> B = { 100 };
  set<int> expected_result = { 1, 2, 4, 5, 10, 20, 25, 50, 100 };
  
  BetweenTwoSets<int> bts(A, B);
  
  // Act
  auto actual_result = bts.get();

  // Assert
  BOOST_CHECK_EQUAL_COLLECTIONS(
    expected_result.begin(),
    expected_result.end(),
    actual_result.begin(),
    actual_result.end()
  );
}

BOOST_AUTO_TEST_CASE(HappyPath_7)
{
  // Arrange
  vector<int> A = { 1 };
  vector<int> B = { 72, 48 };
  set<int> expected_result = { 1, 2, 3, 4, 6, 8, 12, 24 };
  
  BetweenTwoSets<int> bts(A, B);
  
  // Act
  auto actual_result = bts.get();

  // Assert
  BOOST_CHECK_EQUAL_COLLECTIONS(
    expected_result.begin(),
    expected_result.end(),
    actual_result.begin(),
    actual_result.end()
  );
}

BOOST_AUTO_TEST_SUITE_END()