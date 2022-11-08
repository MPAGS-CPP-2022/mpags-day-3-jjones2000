// Unit test for MPAGSCipher ProcessCommandLine interface
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "ProcessCommandLine.hpp"
#include "CipherMode.hpp"

TEST_CASE("help argument processed correctly", "[command line arguments]"){

    std::vector<std::string> args{"", "--help"};
    ProgramSettings settings{false, false, "", "", "", CipherMode::Encrypt};

    processCommandLine(args, settings);

    REQUIRE( settings.helpRequested == true );
}

TEST_CASE("version argument processed correctly", "[command line arguments]"){

    std::vector<std::string> args{"", "--version"};
    ProgramSettings settings{false, false, "", "", "", CipherMode::Encrypt};

    processCommandLine(args, settings);

    REQUIRE( settings.versionRequested == true );
}
