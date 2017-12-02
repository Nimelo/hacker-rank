#define BOOST_TEST_MODULE ChocolateDistributorTest

#include "ChocolateDistributor.hpp"
#include <vector>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(ChocolateDistributorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
    // Arrange
    vector<int> bars = { 1, 2, 1, 3, 2 };
    size_t m = 2, d = 3;
    size_t expected_number_of_options = 2;

    ChocolateDistributor<int> cd(bars);
    
    // Act
    auto number_of_options = cd.get(m, d);

    // Assert
    BOOST_CHECK_EQUAL(expected_number_of_options, number_of_options);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
    // Arrange
    vector<int> bars = { 1, 1, 1, 1, 1, 1 };
    size_t m = 2, d = 3;
    size_t expected_number_of_options = 0;

    ChocolateDistributor<int> cd(bars);
    
    // Act
    auto number_of_options = cd.get(m, d);

    // Assert
    BOOST_CHECK_EQUAL(expected_number_of_options, number_of_options);
}

BOOST_AUTO_TEST_CASE(TestScenario_3)
{
    // Arrange
    vector<int> bars = { 4 };
    size_t m = 1, d = 4;
    size_t expected_number_of_options = 1;

    ChocolateDistributor<int> cd(bars);
    
    // Act
    auto number_of_options = cd.get(m, d);

    // Assert
    BOOST_CHECK_EQUAL(expected_number_of_options, number_of_options);
}

BOOST_AUTO_TEST_SUITE_END()