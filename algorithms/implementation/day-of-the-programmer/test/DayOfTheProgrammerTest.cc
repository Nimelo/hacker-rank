#define BOOST_TEST_MODULE DayOfTheProgrammerTest

#include "DayOfTheProgrammer.hpp"
#include <vector>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(DayOfTheProgrammerSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(Test_2017)
{
  // Arrange
  size_t year = 2017;
  std::string expected_date = "13.09.2017";
  DayOfTheProgrammer dp;

  // Act
  auto actual_date = dp.get_256_day(year);

  // Assert
  BOOST_CHECK_EQUAL(expected_date, actual_date);
}

BOOST_AUTO_TEST_CASE(Test_2016)
{
  // Arrange
  size_t year = 2016;
  std::string expected_date = "12.09.2016";
  DayOfTheProgrammer dp;

  // Act
  auto actual_date = dp.get_256_day(year);

  // Assert
  BOOST_CHECK_EQUAL(expected_date, actual_date);
}

BOOST_AUTO_TEST_CASE(Test_1917)
{
  // Arrange
  size_t year = 1917;
  std::string expected_date = "13.09.1917";
  DayOfTheProgrammer dp;

  // Act
  auto actual_date = dp.get_256_day(year);

  // Assert
  BOOST_CHECK_EQUAL(expected_date, actual_date);
}

BOOST_AUTO_TEST_CASE(Test_1600)
{
  // Arrange
  size_t year = 1600;
  std::string expected_date = "12.09.1600";
  DayOfTheProgrammer dp;

  // Act
  auto actual_date = dp.get_256_day(year);

  // Assert
  BOOST_CHECK_EQUAL(expected_date, actual_date);
}

BOOST_AUTO_TEST_CASE(Test_1918)
{
  // Arrange
  size_t year = 1918;
  std::string expected_date = "26.09.1918";
  DayOfTheProgrammer dp;

  // Act
  auto actual_date = dp.get_256_day(year);

  // Assert
  BOOST_CHECK_EQUAL(expected_date, actual_date);
}

BOOST_AUTO_TEST_CASE(Test_1772)
{
  // Arrange
  size_t year = 1772;
  std::string expected_date = "12.09.1772";
  DayOfTheProgrammer dp;

  // Act
  auto actual_date = dp.get_256_day(year);

  // Assert
  BOOST_CHECK_EQUAL(expected_date, actual_date);
}

BOOST_AUTO_TEST_CASE(Test_1908)
{
  // Arrange
  size_t year = 1908;
  std::string expected_date = "12.09.1908";
  DayOfTheProgrammer dp;

  // Act
  auto actual_date = dp.get_256_day(year);

  // Assert
  BOOST_CHECK_EQUAL(expected_date, actual_date);
}

BOOST_AUTO_TEST_CASE(Test_1737)
{
  // Arrange
  size_t year = 1737;
  std::string expected_date = "13.09.1737";
  DayOfTheProgrammer dp;

  // Act
  auto actual_date = dp.get_256_day(year);

  // Assert
  BOOST_CHECK_EQUAL(expected_date, actual_date);
}

BOOST_AUTO_TEST_SUITE_END()