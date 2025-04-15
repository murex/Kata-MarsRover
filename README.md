[![Gradle](https://github.com/murex/Kata-MarsRover/actions/workflows/gradle.yml/badge.svg)](https://github.com/murex/Kata-MarsRover/actions/workflows/gradle.yml)
[![Maven](https://github.com/murex/Kata-MarsRover/actions/workflows/maven.yml/badge.svg)](https://github.com/murex/Kata-MarsRover/actions/workflows/maven.yml)
[![CMake](https://github.com/murex/Kata-MarsRover/actions/workflows/cmake.yml/badge.svg)](https://github.com/murex/Kata-MarsRover/actions/workflows/cmake.yml)
[![Go](https://github.com/murex/Kata-MarsRover/actions/workflows/go.yml/badge.svg)](https://github.com/murex/Kata-MarsRover/actions/workflows/go.yml)
[![Pytest](https://github.com/murex/Kata-MarsRover/actions/workflows/pytest.yml/badge.svg)](https://github.com/murex/Kata-MarsRover/actions/workflows/pytest.yml)
[![Npm](https://github.com/murex/Kata-MarsRover/actions/workflows/npm.yml/badge.svg)](https://github.com/murex/Kata-MarsRover/actions/workflows/npm.yml)
[![Check Markdown links](https://github.com/murex/Kata-MarsRover/actions/workflows/markdown-link-check.yml/badge.svg)](https://github.com/murex/Kata-MarsRover/actions/workflows/markdown-link-check.yml)
[![Add contributors](https://github.com/murex/Kata-MarsRover/actions/workflows/contributors.yml/badge.svg)](https://github.com/murex/Kata-MarsRover/actions/workflows/contributors.yml)

# Mars Rover

![Kata Image](images/MarsRover.jpg) <br>
"[Mars Rover Space Travel Rover](https://pixabay.com/photos/mars-mars-rover-space-travel-rover-67522/)"
by [WikiImages](https://pixabay.com/users/wikiimages-1897/) is licenced
under [Pixabay License](https://pixabay.com/fr/service/license/)

## Description

### Requirements

You are given the initial starting point (x,y) of a rover and the direction (N,S,E,W) it is facing.

- The rover receives a character array of commands.
- Implement commands that move the rover forward/backward (F,B).
- Implement commands that turn the rover left/right (L,R).

### Rules

- Hardcore TDD. No Excuses!
- Change roles (driver, navigator) every 5 minutes.
- No red tests while refactoring.
- Be careful about edge cases and exceptions. We can not afford to lose a Mars rover, just because the developers
  overlooked a null pointer.

## Coding Assistant Tips

For this kata, you can leverage GitHub Copilot to help you to write code.
This kata, is an opportunity to experiment with Copilot to:

1. Help you incrementally design code
2. Experiment with GitHub Copilot in a safe zone to get better at using it
3. Understand its limitations and how to work around them
4. Compare it to other tools and practices (ex: Unit Tests, Linters, Automated Refactoring, etc.)
5. Learn how to combine those tools and practices together

### Specific instructions

- Start without Copilot when implementing first Command. The goal of the kata is to learn the TDD flow. Once you have
  finished the first command using manual TDD by the book, enable your copilot. You can for example ask it to convert
  the first tests to parametrized tests. Continue with Copilot, but stick to the TDD loop.
- Always stick to TCR/TDD cycle, and see how Copilot helps for the different steps

### Proposed Ideas

To get the best out of Copilot, you can try these:

- Take the opportunity to increase your knowledge on Software Engineering by asking GitHub Copilot to propose
  implementation variants.
  - Inline chat:
    ```text
    Propose 5 different ways to rewrite this code and evaluate each using the perfection game
    ```
  - Discuss as a group the proposed answers and agree on the one to pick.
- Leverage on copilot to convert your unit tests to parameterized tests.
  - Experiment with different approaches to parameterized tests, and pick the one you prefer.
  - You may be tempted to come up with a single parameterized tests for everything. This might hinder test
    readability. Keep in mind that the intent behind tests is to make them easy to read and understand. Try different
    approaches to come up with an accurate balance between readability and factorization of test code.
- Experiment various prompts using standard engineering vocabulary and see how it impacts the quality of the
  suggestions (cf. [Refactoring Guru](https://refactoring.guru/) website)
- Try to do the same refactoring with an IDE-automated refactoring and with GitHub Copilot.

### Keep in Mind

- Copilot tends to generate giant steps. It will typically propose to implement a lot more than needed to pass the
  current test. Delete what is not needed: Copilot can suggest it later anyway, with better context!
- Copilot will confidently propose wrong tests. Be very careful and double check every test case that it generates.
- Copilot has different UIs: Autocomplete, Inline Chat, Copilot Edits, and Chat. Use each for what it is best at.
- Copilot context is local to each user session. This can be a problem and an advantage!
- 😔 Our license of Copilot has restrictions on public code. This kata is public code, so sometimes, especially when
  working with many lines of code, it will refuse to answer! Play with a smaller context and a different prompt. We
  don't have a real fix yet.

## Getting Started

- [C++](cpp/GETTING_STARTED.md)
- [Go](go/GETTING_STARTED.md)
- [Java](java/GETTING_STARTED.md)
- [Python](python/GETTING_STARTED.md)
- [Typescript](typescript/GETTING_STARTED.md)

## Session Quick Retrospective

You can fill it from [here](QuickRetrospective.md)

## Useful Links

### For this Kata

- [Kata full description](http://kata-log.rocks/mars-rover-kata)

### General

- [TCR (Test && Commit || Revert) wrapper](tcr/TCR.md) utility
- Collaborative timer for pairing or mobbing:
  [mobti.me](https://mobti.me/)
  or [agility timer](https://agility.jahed.dev/)

## Session Information

### Style & Duration

- 2-hour [Randori in Pairs](doc/RandoriInPairs.md)

### Topic

- Designing with TDD

### Focus Points

- Baby Steps
- YAGNI
- Code Smells
- Refactor on green bar

### Source Files

- [C++](cpp)
- [Go](go)
- [Java](java)
- [Python](python)
- [Typescript](typescript)

## License

`Kata-MarsRover` and the accompanying materials are made available
under the terms of the [MIT License](LICENSE.md) which accompanies this
distribution, and is available at the [Open Source site](https://opensource.org/licenses/MIT)

## Acknowledgements

See [ACKNOWLEDGEMENTS.md](ACKNOWLEDGEMENTS.md) for more information.

## Contributors

<table>
<tr>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/mengdaming>
            <img src=https://avatars.githubusercontent.com/u/1313765?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Damien Menanteau/>
            <br />
            <sub style="font-size:14px"><b>Damien Menanteau</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/aatwi>
            <img src=https://avatars.githubusercontent.com/u/11088496?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Ahmad Atwi/>
            <br />
            <sub style="font-size:14px"><b>Ahmad Atwi</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/philou>
            <img src=https://avatars.githubusercontent.com/u/23983?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Philippe Bourgau/>
            <br />
            <sub style="font-size:14px"><b>Philippe Bourgau</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/AntoineMx>
            <img src=https://avatars.githubusercontent.com/u/77109701?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=AntoineMx/>
            <br />
            <sub style="font-size:14px"><b>AntoineMx</b></sub>
        </a>
    </td>
</tr>
</table>
