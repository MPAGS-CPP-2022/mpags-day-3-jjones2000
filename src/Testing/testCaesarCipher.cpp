//! Unit Tests for MPAGSCipher transformChar interface
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "CaesarCipher.hpp"


TEST_CASE("Caesar cipher ciphers correctly", "[caesar]")
{
    CaesarCipher caesar(5);
    
    SECTION("encrypt") {
    REQUIRE(caesar.applyCipher("HELLOWORLD", CipherMode::Encrypt) == "MJQQTBTWQI");
}
    SECTION("Decrypt") {
    REQUIRE(caesar.applyCipher("MJQQTBTWQI", CipherMode::Decrypt) == "HELLOWORLD");
}
}
