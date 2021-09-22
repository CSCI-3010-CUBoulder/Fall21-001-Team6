#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Sum is computed","[sum]"){
  std::vector<double> v{1,2};
  REQUIRE(Sum(v)== 3 );
  v.push_back(2);
  REQUIRE(Sum(v)== 5 );
  v.push_back(2);
  REQUIRE(Sum(v)== 7 );
}


TEST_CASE ("Correct sign is returned","[sign]"){
  REQUIRE(Sign(-1)== -1 );
  REQUIRE(Sign(-5)== -1 );
  REQUIRE(Sign(2)== 1 );
}
