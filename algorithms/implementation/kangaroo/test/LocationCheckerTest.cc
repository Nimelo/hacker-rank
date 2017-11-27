#define BOOST_TEST_MODULE LocationCheckerTest

#include "LocationChecker.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(LocationCheckerSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(PositiveTest)
{
    // Arrange
    LocationType x1 = 0, x2 = 4;
    MoveRatioType v1 = 3, v2 = 2;
    bool expected_will_meet = true;

    LocationChecker lc(x1, v1, x2, v2);    
    // Act
    auto actual_will_meet = lc.willMeet();

    // Assert
    BOOST_CHECK_EQUAL(expected_will_meet, actual_will_meet);
}

BOOST_AUTO_TEST_CASE(NegativeTest)
{
    // Arrange
    LocationType x1 = 0, x2 = 5;
    MoveRatioType v1 = 2, v2 = 3;
    bool expected_will_meet = false;

    LocationChecker lc(x1, v1, x2, v2);    
    // Act
    auto actual_will_meet = lc.willMeet();

    // Assert
    BOOST_CHECK_EQUAL(expected_will_meet, actual_will_meet);
}

BOOST_AUTO_TEST_CASE(NegativeTestTwo)
{
    // Arrange
    LocationType x1 = 28, x2 = 96;
    MoveRatioType v1 = 8, v2 = 2;
    bool expected_will_meet = false;

    LocationChecker lc(x1, v1, x2, v2);    
    // Act
    auto actual_will_meet = lc.willMeet();

    // Assert
    BOOST_CHECK_EQUAL(expected_will_meet, actual_will_meet);
}

BOOST_AUTO_TEST_SUITE_END()