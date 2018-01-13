#define BOOST_TEST_MODULE DenseRankingTest

#include "DenseRanking.hpp"
#include <vector>
#include <tuple>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(DenseRankingSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
    // Arrange
    vector<size_t> scores = { 100, 100, 50, 40, 40, 20, 10 };
    size_t score = 5;

    DenseRanking dr(scores);
    size_t expected_rank = 6;
    
    // Act
    auto actual_rank = dr.predict_rank(score);

    // Assert
    BOOST_CHECK_EQUAL(expected_rank, actual_rank);
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
    // Arrange
    vector<size_t> scores = { 100, 100, 50, 40, 40, 20, 10, 5 };
    size_t score = 25;

    DenseRanking dr(scores);
    size_t expected_rank = 4;
    
    // Act
    auto actual_rank = dr.predict_rank(score);

    // Assert
    BOOST_CHECK_EQUAL(expected_rank, actual_rank);
}

BOOST_AUTO_TEST_CASE(TestScenario_3)
{
    // Arrange
    vector<size_t> scores = { 100, 100, 50, 40, 40, 20, 10, 5, 25 };
    size_t score = 50;

    DenseRanking dr(scores);
    size_t expected_rank = 2;
    
    // Act
    auto actual_rank = dr.predict_rank(score);

    // Assert
    BOOST_CHECK_EQUAL(expected_rank, actual_rank);
}

BOOST_AUTO_TEST_CASE(TestScenario_4)
{
    // Arrange
    vector<size_t> scores = { 100, 100, 50, 40, 40, 20, 10, 5, 50 };
    size_t score = 120;

    DenseRanking dr(scores);
    size_t expected_rank = 1;
    
    // Act
    auto actual_rank = dr.predict_rank(score);

    // Assert
    BOOST_CHECK_EQUAL(expected_rank, actual_rank);
}

BOOST_AUTO_TEST_SUITE_END()