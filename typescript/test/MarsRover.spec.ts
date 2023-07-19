import {MarsRover} from "../src/MarsRover";

describe("mars_rover", () => {
    // Remove the ".skip" below to enable this test case
    test.skip('acceptance test', () => {
        let rover = new MarsRover(10, 10, 'N');
        rover.receiveCommands("LFFLBRRBBBRFFFLL");
        expect(rover.sendPosition()).toEqual("11 8 W");
    });
});
