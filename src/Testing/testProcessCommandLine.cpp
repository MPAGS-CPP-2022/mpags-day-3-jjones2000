// Unit test for MPAGSCipher ProcessCommandLine interface
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "ProcessCommandLine.hpp"
#include "CipherMode.hpp"

TEST_CASE("help argument processed correctly", "[command line arguments]"){

    const std::vector<std::string> args{"", "--help"};
    ProgramSettings settings{false, false, "", "", "", CipherMode::Encrypt};

    processCommandLine(args, settings);

    REQUIRE( settings.helpRequested == true );
}

TEST_CASE("version argument processed correctly", "[command line arguments]"){

    const std::vector<std::string> args{"", "--version"};
    ProgramSettings settings{false, false, "", "", "", CipherMode::Encrypt};

    processCommandLine(args, settings);

    REQUIRE( settings.versionRequested == true );
}


TEST_CASE("output file argument processed correctly", "[command line arguments]"){

    const std::string testString{"test"};
    const std::vector<std::string> output{"_", "-o", testString};
    ProgramSettings outputTest{};
    const bool status{processCommandLine(output, outputTest)};
    REQUIRE(status);
    REQUIRE(outputTest.outputFile == testString);
}
