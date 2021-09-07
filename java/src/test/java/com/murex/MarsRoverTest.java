package com.murex;

import org.junit.Ignore;
import org.junit.Test;

import static org.junit.Assert.assertEquals;

public class MarsRoverTest {

    @Ignore
    @Test
    public void acceptance_test() {
        MarsRover rover = new MarsRover(10, 10, 'N');
        //noinspection SpellCheckingInspection
        rover.receiveCommands("LFFLBRRBBBRFFFLL");
        assertEquals("11 8 W", rover.sendPosition());
    }
}
