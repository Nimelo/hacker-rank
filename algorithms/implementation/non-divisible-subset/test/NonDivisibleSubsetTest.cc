#define BOOST_TEST_MODULE NonDivisibleSubsetTest

#include "NonDivisibleSubset.hpp"
#include <vector>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(NonDivisibleSubsetSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestSet_1)
{
    // Arrange
    vector<int> set = { 1, 2, 7, 4 };
    int k = 3;

    size_t expected_result = 3;
    NonDivisibleSubset<int> nds(set);
    
    // Act
    auto actual_result = nds.get(k);

    // Assert
    BOOST_CHECK_EQUAL(expected_result, actual_result);
}

BOOST_AUTO_TEST_CASE(TestSet_2)
{
    // Arrange
    vector<int> set = { 1, 2, 3, 4 };
    int k = 5;

    size_t expected_result = 2;
    NonDivisibleSubset<int> nds(set);
    
    // Act
    auto actual_result = nds.get(k);

    // Assert
    BOOST_CHECK_EQUAL(expected_result, actual_result);
}

BOOST_AUTO_TEST_CASE(TestSet_3)
{
    // Arrange
    vector<int> set = { 1, 2, 3, 4 };
    int k = 4;

    size_t expected_result = 3;
    NonDivisibleSubset<int> nds(set);
    
    // Act
    auto actual_result = nds.get(k);

    // Assert
    BOOST_CHECK_EQUAL(expected_result, actual_result);
}

BOOST_AUTO_TEST_CASE(TestSet_4)
{
    // Arrange
    vector<int> set = { 1 };
    int k = 1;

    size_t expected_result = 1;
    NonDivisibleSubset<int> nds(set);
    
    // Act
    auto actual_result = nds.get(k);

    // Assert
    BOOST_CHECK_EQUAL(expected_result, actual_result);
}

BOOST_AUTO_TEST_CASE(TestSet_5)
{
    // Arrange
    vector<int> set = { 1, 7, 2 };
    int k = 3;

    size_t expected_result = 2;
    NonDivisibleSubset<int> nds(set);
    
    // Act
    auto actual_result = nds.get(k);

    // Assert
    BOOST_CHECK_EQUAL(expected_result, actual_result);
}

BOOST_AUTO_TEST_CASE(TestSet_6)
{
    // Arrange
    vector<int> set = { 1, 2, 3, 4, 5, 6 };
    int k = 2;

    size_t expected_result = 2;
    NonDivisibleSubset<int> nds(set);
    
    // Act
    auto actual_result = nds.get(k);

    // Assert
    BOOST_CHECK_EQUAL(expected_result, actual_result);
}

BOOST_AUTO_TEST_CASE(TestSet_7)
{
    // Arrange
    vector<int> set = { 1, 7, 13, 19, 25 };
    int k = 6;

    size_t expected_result = 5;
    NonDivisibleSubset<int> nds(set);
    
    // Act
    auto actual_result = nds.get(k);

    // Assert
    BOOST_CHECK_EQUAL(expected_result, actual_result);
}

BOOST_AUTO_TEST_SUITE_END()