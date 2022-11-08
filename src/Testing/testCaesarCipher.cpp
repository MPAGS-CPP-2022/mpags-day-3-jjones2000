//! Unit Tests for MPAGSCipher transformChar interface
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>
#include "CaesarCipher.hpp"


TEST_CASE("Caesar cipher ciphers correctly", "[caesar]")
{
    CaesarCipher caesar(5);
    
    SECTION("encrypt") {
    std::string inputText{"HELLOWORLD"};
    std::string outputText{caesar.applyCipher(inputText, CipherMode::Encrypt) };
    REQUIRE(outputText == "MJQQTBTWQI");
}
    SECTION("Decrypt") {
    std::string inputText{"MJQQTBTWQI"};
    std::string outputText{caesar.applyCipher(inputText, CipherMode::Decrypt) };
    REQUIRE(outputText == "HELLOWORLD");
}
}
