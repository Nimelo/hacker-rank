#define BOOST_TEST_MODULE GradingPolicyTest

#include "GradingPolicy.hpp"
#include <vector>
#include <cstdint>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(GradingPolicySuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldRoundResult)
{
    // Arrange
    uint32_t grade = 73;
    uint32_t expected_grade = 75;

    GradingPolicy gp;
    
    // Act
    auto actual_grade = gp.get(grade);

    // Assert
    BOOST_CHECK_EQUAL(expected_grade, actual_grade);
}

BOOST_AUTO_TEST_CASE(ShouldNotRoundResult)
{
    // Arrange
    uint32_t grade = 37;
    uint32_t expected_grade = 37;

    GradingPolicy gp;
    
    // Act
    auto actual_grade = gp.get(grade);

    // Assert
    BOOST_CHECK_EQUAL(expected_grade, actual_grade);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyRoundVector)
{
    // Arrange
    vector<uint32_t> grades = { 73, 67, 38, 33 };
    vector<uint32_t> expected_grades = { 75, 67, 40, 33 };

    GradingPolicy gp;
    
    // Act
    auto actual_grades = gp.get(grades);

    // Assert
    BOOST_CHECK_EQUAL_COLLECTIONS(
      expected_grades.begin(), expected_grades.end(),
      actual_grades.begin(), actual_grades.end()
    );
}

BOOST_AUTO_TEST_SUITE_END()