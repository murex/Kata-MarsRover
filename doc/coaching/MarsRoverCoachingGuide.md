# Coaching Guide - Mars Rover

**⚠️ SPOILER ALERT!**

_**This document contains information related to the solution for this kata.
Unless you're planning to coach on it, you'd better avoid reading what's in there 😊.**_

*/!\ This is work in progress, improvements to this guide are welcome*

## Main Goal

This problem is a good example of letting the design emerge from TDD.
In 2 hours, developers will go through TDD, Design, and Code Refactoring.  
The emerging design is usually simpler than up-front design.

## Typical Plan

This session is a Randori Kata ran in Pairs.

| Timeline  | Activity            |
|-----------|---------------------|
| 0-0h10    | Brief               |
| 0h10-1h50 | Work In Pairs       |
| 1h50-2h   | Quick Retrospective |

## Preparation before starting

Go through the kata a few times before doing it in front of the team.

## Brief

The coach presents the [problem](https://kata-log.rocks/mars-rover-kata).

Remind them that they should not jump directly into the solution, their solution should be driven by TDD.

## Coaching Hints

### Start with the very basic test cases

For this exercise, you can start with the basic test case for example moving the rover just one step.

### Make sure every test case keeps simple (1 assert per test case)

A good practice is to test only one thing per test case, thus only 1 assert per test case.
Sometimes, when really testing a small isolated function, it can be useful to test different values in one single test case.

### Maintain the direction

If you notice that the team is changing coding/design direction at every keyboard switch, you can suggest that they align their tasks in a TODO list.

### About converting cardinal directions (N-W-S-E) type from char to enum

Usually participants at some point are willing to replace representation of cardinal directions (N/W/S/E) from char type to something more elaborate (such as Enums).

As this change modifies the signature of the MarsRover constructor (and potentially of some other functions depending on how far they are with the kata), this implies a number of changes that, if not handled carefully, will leave several test cases in the red for some time.

Recommendation here is to help them proceed incrementally with the changes, __making sure at each step that all their tests keep green__.

1. Create the enum for N, W, S, E
1. Create functions allowing to convert from char to enum and the other way around
1. Using these conversion functions, replace the solution implementation so that it works with enums instead of chars
   (at this stage the constructor and methods signatures should remain unchanged)
1. Adjust one by one the signature of each implementation function that uses direction as an input parameter or return value,
   replacing char type with enum, progressively removing calls to the conversion functions in implementation
   as they become unnecessary.
1. Finally adjust MarsRover constructor signature (replacing char type to enum for the direction parameter).
   At this stage test cases should be adjusted as well as they should call MarsRover constructor at some point.
1. Remove the conversion functions created previously

Participants may argue that this requires more work than doing all changes in one shot.

- Insist that the most important point is to always keep the tests green. Emphasize that with this approach they are able to commit and deliver their changes at any time, which is not the case when doing big bang refactoring.
- Remind them that this is a small exercise. We know they would be able to handle this without errors. In real life though, problems can be larger and error prone. By practicing at a small scale, they'll learn how to apply this technique in real life when it makes sense.

### Beware of Test Data Builder temptation in this kata!

This kata looks like a good example for using test data builder approach when adding and refactoring test cases.

Main issue with taking this direction is that if this approach is new to attendees, there is a good chance
that they will not able to finish the kata in time. So only advise this approach with caution either for
attendees that finished the kata in advance or those who are already familiar with this approach.

Also, indicate that there is another kata session later on focusing on Test Data Builders.

## Advanced Refactoring

Due to having 4 types of commands, there is a high possibility of having a function with a long nested conditional statements (If-Else or Switch Case).

This section can be refactored by replacing the conditional part with polymorphism!

Of course, the approach is different between Java and C++.

Below is a sample code of the conditional statement in C++:

```c++
if (commands[i] == 'F')
{
    std::pair<int, int> newPosition = moveForward(std::pair<int, int>(x, y), direction);
    x = newPosition.first;
    y = newPosition.second;
}
else if (commands[i] == 'L')
{
    direction = leftOf(direction);
}
else if (commands[i] == 'R')
{
    direction = rightOf(direction);
}
else
{
    std::pair<int, int> newPosition = moveBackward(std::pair<int, int>(x, y), direction);
    x = newPosition.first;
    y = newPosition.second;
}
```

### Option 1 - ENUMS

Enums can be useful in this case! In Java, enums can have methods, thus, simplifying
the means of implementing Polymorphism.

Below is an example of enum usage in Java:

```java
public enum Command {
    LEFT {
        @Override
        public Position applyCommand(Position currentPosition) {
            Position newPosition = new Position();
            newPosition.x = currentPosition.x;
            newPosition.y = currentPosition.y;
            newPosition.direction = "LEFT";
            return newPosition;
        }
    },
    RIGHT {
        @Override
        public Position applyCommand(Position currentPosition) {
            Position newPosition = new Position();
            ...
            return new newPosition;
        }
    },
    ...
    public abstract Position applyCommand(Position currentPosition);
}
```

### Option 2 - Classes

In C++, you can't have methods in Enums. Thus, the above approach will not be possible. You will need to implement polymorphism using classes. The steps to do that are:

1. Creating a class Command with one method
2. Having 4 implementations of the 'Command' class (Forward, Backward, Left and Right)
3. Replacing the conditions by a direct call to the corresponding instance method.

Below is a code snippet of the Command and Forward classes!

```c++
class Command {
public:
    virtual std::pair<DirectionEnum, std::pair<int, int>> applyCommand(std::pair<DirectionEnum, std::pair<int, int>> currentState) {
        return std::pair<DirectionEnum, std::pair<int, int>>();
    }
};

class Forward : public Command {
public:
    std::pair<DirectionEnum, std::pair<int, int>> applyCommand(std::pair<DirectionEnum, std::pair<int, int>> currentState) {
    std::pair<int, int> currentPosition = currentState.second;

        std::pair<DirectionEnum, std::pair<int, int>> newState;
        newState.first = currentState.first;
        newState.second = moveForward(std::pair<int, int>(currentPosition.first, currentPosition.second), currentState.first);
        return newState;
    }
};
....

```

Using the above code, our initial conditional statement will be replaced by the following code:

```c++
Command* command = toCommand(commands[i]);
std::pair<DirectionEnum, std::pair<int, int>> newState = command->applyCommand(std::pair<DirectionEnum, std::pair<int, int>>(direction, currentPosition));
x = newState.second.first;
y = newState.second.second;
direction = newState.first;
```

## FAQ

Attendees typically ask a lot of questions at the end.
