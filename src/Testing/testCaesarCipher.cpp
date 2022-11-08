//! Unit Tests for MPAGSCipher transformChar interface
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>
#include "CaesarCipher.hpp"

TEST_CASE("Caesar cipher works as expected", "[caesar]") {
 SECTION("encrypt"){
 CaesarCipher caesar("10");
 std::string inputText{"HelloWorld!?"};
 std::string outputText{caesar.applyCipher(inputText, CipherMode::Encrypt)};
 REQUIRE(outputText=="ROVVYGYBVN");
 }
 SECTION("decrypt"){
 CaesarCipher caesar("10");
 std::string inputText{"ROVVYGYBVN"};
 std::string outputText{caesar.applyCipher(inputText, CipherMode::Decrypt)};
 REQUIRE(outputText=="HelloWorld");
 }
 
}
