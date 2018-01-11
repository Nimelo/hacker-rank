#define BOOST_TEST_MODULE CatchDeterminatorTest

#include "CatchDeterminator.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(CatchDeterminatorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
  // Arrange
  int cat_a_pos = 1, cat_b_pos = 2, mouse_pos = 3;
  int expected_winner = CatchDeterminator::CAT_B_WINS;
  
  CatchDeterminator cd(cat_a_pos, cat_b_pos, mouse_pos);
  // Act
  auto actual_winner = cd.determine();

  // Assert
  BOOST_CHECK_EQUAL(expected_winner, actual_winner);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
  // Arrange
  int cat_a_pos = 1, cat_b_pos = 3, mouse_pos = 2;
  int expected_winner = CatchDeterminator::MOUSE_WINS;
  
  CatchDeterminator cd(cat_a_pos, cat_b_pos, mouse_pos);
  // Act
  auto actual_winner = cd.determine();

  // Assert
  BOOST_CHECK_EQUAL(expected_winner, actual_winner);
}

BOOST_AUTO_TEST_CASE(TestScenario_3)
{
  // Arrange
  int cat_a_pos = 2, cat_b_pos = 1, mouse_pos = 3;
  int expected_winner = CatchDeterminator::CAT_A_WINS;
  
  CatchDeterminator cd(cat_a_pos, cat_b_pos, mouse_pos);
  // Act
  auto actual_winner = cd.determine();

  // Assert
  BOOST_CHECK_EQUAL(expected_winner, actual_winner);
}

BOOST_AUTO_TEST_SUITE_END()