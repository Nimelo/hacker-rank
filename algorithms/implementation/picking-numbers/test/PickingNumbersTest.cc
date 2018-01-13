#define BOOST_TEST_MODULE PickingNumbersTest

#include "PickingNumbers.hpp"
#include <vector>
#include <tuple>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(PickingNumbersSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
    // Arrange
    vector<int> numbers = { 4, 6, 5, 3, 3, 1 };
    PickingNumbers pc(numbers);
    int expected_matches = 3;
    
    // Act
    auto actual_matches = pc.count();

    // Assert
    BOOST_CHECK_EQUAL(expected_matches, actual_matches);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
    // Arrange
    vector<int> numbers = { 1, 2, 2, 3, 1, 2 };
    PickingNumbers pc(numbers);
    int expected_matches = 5;
    
    // Act
    auto actual_matches = pc.count();

    // Assert
    BOOST_CHECK_EQUAL(expected_matches, actual_matches);
}

BOOST_AUTO_TEST_SUITE_END()