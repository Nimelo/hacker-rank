#define BOOST_TEST_MODULE SockMerchantTest

#include "SockMerchant.hpp"
#include <vector>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(SockMerchantSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(ShouldCorrectlyCalculateNumberOfItems)
{
    // Arrange
    vector<int> socks = { 10, 20, 20, 10, 10, 30, 50, 10, 20 };
    size_t expected_pairs = 3;

    SockMerchant<int> sm(socks);

    // Act
    auto actual_pairs = sm.get_total_pairs();

    // Assert
    BOOST_CHECK_EQUAL(expected_pairs, actual_pairs);
}

BOOST_AUTO_TEST_SUITE_END()