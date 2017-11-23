#define BOOST_TEST_MODULE VectorFractionsTest

#include "VectorFractions.hpp"
#include <vector>
#include <tuple>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(VectorFractionsSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyReturnStats)
{
    // Arrange
    vector<int> elements = { -4, 3, -9, 0, 4 , 1 };

    VectorFractions<int> vf(elements);
    
    // Act
    auto stats = vf.getStats();

    // Assert
    BOOST_CHECK_EQUAL(2, std::get<0>(stats));
    BOOST_CHECK_EQUAL(1, std::get<1>(stats));
    BOOST_CHECK_EQUAL(3, std::get<2>(stats));
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyReturnFractions)
{
    // Arrange
    vector<int> elements = { -4, 3, -9, 0, 4 , 1 };

    VectorFractions<int> vf(elements);
    
    // Act
    auto fractions = vf.getFractions();

    // Assert
    BOOST_CHECK_CLOSE(2.0 / 6, std::get<0>(fractions), 0.001);
    BOOST_CHECK_CLOSE(1.0 / 6, std::get<1>(fractions), 0.001);
    BOOST_CHECK_CLOSE(3.0 / 6, std::get<2>(fractions), 0.001);
}


BOOST_AUTO_TEST_SUITE_END()