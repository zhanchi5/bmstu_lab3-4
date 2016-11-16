#include <catch.hpp>
#include <function.hpp>

SCENARIO ("summa","[summary]"){
    double rv = summary();
      REQUIRE (rv == 4);
 }     
