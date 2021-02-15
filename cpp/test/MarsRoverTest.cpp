
#include <kata/mars_rover/MarsRover.hpp>

#include <gtest/gtest.h>

TEST(MarsRover, acceptance_test)
{
    // TODO Replace with an acceptance test relevant for this kata
	EXPECT_EQ("11 8 W", kata::mars_rover::receiveCommands("LFFLBRRBBBRFFFLL"));
}
