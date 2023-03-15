import unittest

from mars_rover.mars_rover import MarsRover


class MarsRoverTest(unittest.TestCase):

    @unittest.skip("test currently disabled")  # Comment or remove this line to enable this test case
    def test_acceptance_test(self):
        rover = MarsRover(10, 10, 'N')
        rover.receive_commands('LFFLBRRBBBRFFFLL')
        self.assertEqual('11 8 W', rover.send_position())


if __name__ == "__main__":
    unittest.main()
