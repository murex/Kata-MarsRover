
#include <kata/mars_rover/config.hpp>
#include <iostream>

namespace kata {
namespace mars_rover {

class MARS_ROVER_API MarsRover
{
public:
	MarsRover(const int x, const int y, const char direction);
	void receiveCommands(std::string commands);
	std::string sendPosition() const;
};


} // namespace mars_rover
} // namespace kata
