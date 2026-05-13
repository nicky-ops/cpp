// This program lists the instructions taken by a computer to find an upstairs bathroom.
#include <iostream>

// function describes the steps taken to reach the upstairs bathroom assuming a one storey building with 4 bedrooms and two bathrooms
// upstairs has one bedroom and a seperate bathroom
// We assume the computer is seated at the dining table downstairs in the dining room.
int main()
{
	std::cout<<R"(To find the upstairs bathroom, take the following steps:
			1. Take a snapshot of your position and callibrate east, west, south and north.
			2. Stand from the siting position and take two steps to the east of your position.
			3. From there take 50 steps to the north, you will find stairs going to the 1st floor.
			4. Start climbing the stairs taking one step at a time and take exactly 10 steps.
			5. Turn west from your position and walk for 2 meters then turn south.
			6. You will see a door in front of you.
			7. Open the door and take 5 steps to reach your destination.
)";
	return 0;
}
