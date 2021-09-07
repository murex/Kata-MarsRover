
#include <kata/mars_rover/MarsRover.hpp>

#include <gtest/gtest.h>

using namespace com::murex::kata::mars_rover;

TEST(MarsRover, DISABLED_acceptance_test)
{
	MarsRover rover(10, 10, 'N');
	rover.receiveCommands("LFFLBRRBBBRFFFLL");
	EXPECT_EQ("11 8 W", rover.sendPosition());
}
