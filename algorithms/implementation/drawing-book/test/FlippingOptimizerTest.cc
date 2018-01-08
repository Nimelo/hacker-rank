#define BOOST_TEST_MODULE FlippingOptimizerTest

#include "FlippingOptimizer.hpp"
#include "BackwardFlipper.hpp"
#include "ForwardFlipper.hpp"
#include <vector>
#include <cstddef>
#include <algorithm>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(FlippingOptimizerSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
  // Arrange
  size_t n = 6, p = 2, expected_distance = 1;
  vector<PageFlipperInterface*> flippers = { new BackwardFlipper(), new ForwardFlipper() };

  FlippingOptimizer optimizer(flippers);
  
  // Act
  auto actual_distance = optimizer.optimise(n, p);

  // Assert
  BOOST_CHECK_EQUAL(expected_distance, actual_distance);

  std::for_each(
    flippers.begin(),
    flippers.end(),
    [](PageFlipperInterface* flipper) {
      delete flipper;
    }
  );
}

BOOST_AUTO_TEST_CASE(TestScenario_2)
{
  // Arrange
  size_t n = 5, p = 4, expected_distance = 0;
  vector<PageFlipperInterface*> flippers = { new BackwardFlipper(), new ForwardFlipper() };

  FlippingOptimizer optimizer(flippers);
  
  // Act
  auto actual_distance = optimizer.optimise(n, p);

  // Assert
  BOOST_CHECK_EQUAL(expected_distance, actual_distance);

  std::for_each(
    flippers.begin(),
    flippers.end(),
    [](PageFlipperInterface* flipper) {
      delete flipper;
    }
  );
}

BOOST_AUTO_TEST_CASE(TestScenario_3)
{
  // Arrange
  size_t n = 6, p = 5, expected_distance = 1;
  vector<PageFlipperInterface*> flippers = { new BackwardFlipper(), new ForwardFlipper() };

  FlippingOptimizer optimizer(flippers);
  
  // Act
  auto actual_distance = optimizer.optimise(n, p);

  // Assert
  BOOST_CHECK_EQUAL(expected_distance, actual_distance);

  std::for_each(
    flippers.begin(),
    flippers.end(),
    [](PageFlipperInterface* flipper) {
      delete flipper;
    }
  );
}

BOOST_AUTO_TEST_SUITE_END()