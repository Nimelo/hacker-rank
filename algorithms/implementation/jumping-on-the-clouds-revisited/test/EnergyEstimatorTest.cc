#define BOOST_TEST_MODULE EnergyEstimatorTest

#include "EnergyEstimator.hpp"
#include "CloudType.hpp"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(EnergyEstimatorSuite)

using namespace com::github::nimelo;
using namespace std;

BOOST_AUTO_TEST_CASE(TestScenario_1)
{
  // Arrange
  vector<CloudType> config = { 
    CloudType::ORDINARY, CloudType::ORDINARY,
    CloudType::THUNDERCLOUD, CloudType::ORDINARY,
    CloudType::ORDINARY, CloudType::ORDINARY,
    CloudType::THUNDERCLOUD, CloudType::THUNDERCLOUD,
    CloudType::ORDINARY };
  size_t leap_size = 2, expected = 92;

  EnergyEstimator estimator(config);
  // Act
  auto actual = estimator.play(leap_size);

  // Assert
  BOOST_CHECK_EQUAL(expected, actual);
}

BOOST_AUTO_TEST_SUITE_END()