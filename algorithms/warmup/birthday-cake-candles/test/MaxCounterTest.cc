#define BOOST_TEST_MODULE MaxCounterTest

#include "MaxCounter.hpp"
#include <vector>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(MaxCounterSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyFindMaxFor4Elements)
{
    // Arrange
    vector<int> numbers = { 3, 2, 1, 3 };
    size_t expected_count = 2;

    MaxCounter<int> max_counter(numbers);
    
    // Act
    auto actual_count = max_counter.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_count, actual_count);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyFindMaxFor0Elements)
{
    // Arrange
    vector<int> numbers = {};
    size_t expected_count = 0;

    MaxCounter<int> max_counter(numbers);
    
    // Act
    auto actual_count = max_counter.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_count, actual_count);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyFindMaxFor1Elements)
{
    // Arrange
    vector<int> numbers = { 3 };
    size_t expected_count = 1;

    MaxCounter<int> max_counter(numbers);
    
    // Act
    auto actual_count = max_counter.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_count, actual_count);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyFindMaxForVectorSizeElements)
{
    // Arrange
    vector<int> numbers = { 3, 3, 3, 3 };
    size_t expected_count = numbers.size();

    MaxCounter<int> max_counter(numbers);
    
    // Act
    auto actual_count = max_counter.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_count, actual_count);
}

BOOST_AUTO_TEST_SUITE_END()