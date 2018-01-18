#define BOOST_TEST_MODULE WordSelectionTest

#include "WordSelection.hpp"
#include <vector>
#include <string>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(WordSelectionSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_01)
{
  // Arrange
  vector<unsigned int> letter_heights = { 1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5 };
  string word = "abc";
  size_t expected_area = 9;
  WordSelection ws(letter_heights);
  
  // Act
  auto actual_area = ws.get_area(word);

  // Assert
  BOOST_CHECK_EQUAL(expected_area, actual_area);
}

BOOST_AUTO_TEST_CASE(TestScenario_02)
{
  // Arrange
  vector<unsigned int> letter_heights = { 1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7 };
  string word = "zabc";
  size_t expected_area = 28;
  WordSelection ws(letter_heights);
  
  // Act
  auto actual_area = ws.get_area(word);

  // Assert
  BOOST_CHECK_EQUAL(expected_area, actual_area);
}

BOOST_AUTO_TEST_SUITE_END()