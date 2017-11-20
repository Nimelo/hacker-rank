#define BOOST_TEST_MODULE AdderTest

#include "Adder.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(AdderSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyAddTwoIntegers)
{
    // Arrange
    int num1 = 20, num2 = -23;
    int expected_sum = num1 + num2;

    auto adder = Adder<int>(num1, num2);
    
    // Act
    auto actual_sum = adder.get();

    // Assert
    BOOST_CHECK_EQUAL(expected_sum, actual_sum);
}


BOOST_AUTO_TEST_SUITE_END()