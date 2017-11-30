#define BOOST_TEST_MODULE GameRecordsAnalyserTest

#include "GameRecordsAnalyser.hpp"
#include <vector>
#include <tuple>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(GameRecordsAnalyserSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
    // Arrange
    vector<int> scores = { 10, 5, 20, 20, 4, 5, 2, 25, 1 };

    GameRecordsAnalyser<int> gp(scores);
    
    // Act
    auto stats = gp.get();

    // Assert
    BOOST_CHECK_EQUAL(2, get<1>(stats));
    BOOST_CHECK_EQUAL(4, get<0>(stats));
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
    // Arrange
    vector<int> scores = { 3, 4, 21, 36, 10, 28, 35, 5, 24, 42 };

    GameRecordsAnalyser<int> gp(scores);
    
    // Act
    auto stats = gp.get();

    // Assert
    BOOST_CHECK_EQUAL(4, get<1>(stats));
    BOOST_CHECK_EQUAL(0, get<0>(stats));
}

BOOST_AUTO_TEST_SUITE_END()