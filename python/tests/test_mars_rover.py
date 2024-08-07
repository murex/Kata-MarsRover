import pytest

from mars_rover.mars_rover import MarsRover


class TestMarsRover:

    @pytest.mark.skip(reason="test currently disabled")  # Comment or remove this line to enable this test case
    def test_acceptance_test(self) -> None:
        rover = MarsRover(10, 10, 'N')
        rover.receive_commands('LFFLBRRBBBRFFFLL')
        assert ('11 8 W' == rover.send_position())
