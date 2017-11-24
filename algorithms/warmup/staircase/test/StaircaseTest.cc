#define BOOST_TEST_MODULE StaircaseTest

#include "Staircase.hpp"
#include <sstream>
#include <string>
#include <vector>
#include <cstddef>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/algorithm/string.hpp>

BOOST_AUTO_TEST_SUITE(StaircaseSuite)

using namespace com::github::nimelo;
using namespace std;

vector<string> printing_scenario(size_t n) {
    // Arrange
    stringstream ss;
    Staircase staircase(n);
    
    // Act
    ss << staircase;

    // Assert
    vector<string> lines;
    string line;
    while(std::getline(ss, line))
      lines.push_back(line);
    
    BOOST_CHECK_EQUAL(n, lines.size());

    return lines;
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyPrintFour)
{
  auto lines = printing_scenario(4);

  BOOST_TEST(string("   #") == lines[0]);
  BOOST_TEST(string("  ##") == lines[1]);
  BOOST_TEST(string(" ###") == lines[2]);
  BOOST_TEST(string("####") == lines[3]);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyPrintEmpty)
{
  printing_scenario(0);
}

BOOST_AUTO_TEST_CASE(ShouldCorrectlyPrintOne)
{
  auto lines = printing_scenario(1);
  BOOST_TEST(string("#") == lines[0]);
}

BOOST_AUTO_TEST_SUITE_END()