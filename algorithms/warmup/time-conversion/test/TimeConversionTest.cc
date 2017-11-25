#define BOOST_TEST_MODULE TimeConversionTest

#include "TimeConversion.hpp"
#include <string>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(TimeConversionSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyConvertTimeForPM)
{
    // Arrange
    string input("07:05:45PM");
    string expected_output("19:05:45");
    
    TimeConversion tc(input);
    
    // Act
    auto acutal_output = tc.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_output, acutal_output);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyConvertTimeForAM)
{
    // Arrange
    string input("07:05:45AM");
    string expected_output("07:05:45");
    
    TimeConversion tc(input);
    
    // Act
    auto acutal_output = tc.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_output, acutal_output);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyConvertTimeFor12AM)
{
    // Arrange
    string input("12:05:45AM");
    string expected_output("00:05:45");
    
    TimeConversion tc(input);
    
    // Act
    auto acutal_output = tc.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_output, acutal_output);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyConvertTimeFor12PM)
{
    // Arrange
    string input("12:05:45PM");
    string expected_output("12:05:45");
    
    TimeConversion tc(input);
    
    // Act
    auto acutal_output = tc.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_output, acutal_output);
}

BOOST_AUTO_TEST_SUITE_END()