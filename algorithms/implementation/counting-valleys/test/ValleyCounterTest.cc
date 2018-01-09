#define BOOST_TEST_MODULE ValleyCounterTest

#include "ValleyCounter.hpp"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(ValleyCounterSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
    // Arrange
    vector<char> topography = { 'U', 'D', 'D', 'D', 'U', 'D', 'U', 'U' };
    ValleyCounter vc(topography);
    size_t expected_valleys_count = 1;
    
    // Act
    auto actual_valleys_count = vc.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_valleys_count, actual_valleys_count);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
    // Arrange
    vector<char> topography = { 'D', 'D', 'U', 'U', 'D', 'D', 'U', 'D', 'U', 'U', 'U', 'D' };
    ValleyCounter vc(topography);
    size_t expected_valleys_count = 2;
    
    // Act
    auto actual_valleys_count = vc.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_valleys_count, actual_valleys_count);
}

BOOST_AUTO_TEST_SUITE_END()