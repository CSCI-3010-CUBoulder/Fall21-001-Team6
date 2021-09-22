#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ( "Remove twos", "[removeTwos]") {
  REQUIRE( RemoveTwos(7) == 7 );
  REQUIRE( RemoveTwos(46) == 23 );
  REQUIRE( RemoveTwos(92) == 23 );
}
