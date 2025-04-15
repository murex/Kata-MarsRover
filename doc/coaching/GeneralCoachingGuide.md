# General Coaching Guide

**⚠️ SPOILER ALERT!**

*⚠ This document contains information related to the solution for this kata.
Unless you're planning to coach on it, you'd better avoid reading what's in there 😊*

⚠ This is work in progress, improvements to this guide are welcome

`TODO`

- [ ] bookings
- [ ] physical setup
- [ ] dev setup (IDEs ready, kata compiling)
- [ ] how to use this git repo
- [ ] remote setup
- [ ] create a dedicated Team's Channel
- [ ] ...

## Coaching Session Formats

### Session Formats used in the coaching path

- [Prepared Kata](../PreparedKata.md)
- [Randori Kata](../RandoriKata.md)
- [Randori in Pairs](../RandoriInPairs.md)
- [Mob Programming](../MobProgramming.md)

### Quick Retrospectives

Following each session, we run a quick retrospective that is 10 minutes long. The aim is to gather information on how
the session went:

1. What We Did
2. What We Learned
3. What Puzzled Us
4. What We Decided to Do Next

The goal of those quick retros is to:

1. Stop and Think! Have the team discuss and share information and feedback on the solution to problems.
2. Get feedback on the sessions and improve them for the future
3. Helps us un-cover some needs for the teams

Under the parent directory of each Kata, you can find a 'QuickRetrospective.md' template.

Facilitation Tips:

1. It is a good time to ask good questions that makes them think
2. Make sure everyone is involved
3. Make sure to free the last 10 minutes for the retro

## Coaching Hints

### Keep it interactive

- Speak as you code
- Ask questions, ex:
  - What could we test next?
  - What's the easiest code to get to green?
  - Do you see any refactoring to do?
  - Ok, I'm going to do this, why do you think so?

### The TDD part is the most important, don't skip it

Any further kata teaches techniques, but the initial TDD part teaches a mindset and principles. It is the most
important. It's easier to sell the coaching with the techniques and their benefits though. That's why we usually
highlight refactoring improvements for example.

That being said, as coaches, we must not forget that the first TDD section is the most important one. If a team wants to
go through the refactoring katas without first going through the TDD part, try to explain that most gains come from the
first part. You might use previous coaching sessions
as social proof. If they still don't want to go through the TDD part, tell them to do it by themselves. The katas are
made to be self-service, and a coach presence will be useless in this
case.

### It's ok to make mistakes

We all do. Even Kent Beck in his videos. Admit so, and ask for help if you are lost :-)

### What to do when some tests fail, and we don't understand why

It's ok to try to understand for 1 minute or 2, but no longer. If you get in the situation, the best thing to do is to
revert to the latest green state. Once all the tests are passing, redo the changes in extra-small-baby-steps, running
the tests every time, until some test turns red. The reason of the failure should be obvious then.

### Don't get in a TDD argument

Present it as a tool for learning, it's up to them to decide to use it or not in their daily work.

### Remember to run all the tests every time

Running the tests is fast, and it is easy to make mistakes with old code.

Running the tests frequently will ensure you have everything right.

### Remind why it's important to fail a test before fixing it

Allows to make sure that the test is indeed behaving correctly.

### Reviewing and refactoring tests should not be forgotten

When teams or pairs finish a kata in advance, one advice for "keeping them busy"
is to tell them to spend the remaining time reviewing and refactoring their tests:

- test names improvement,
- removal of redundant test cases,
- splitting fat test case,
- grouping similar test cases,
- parametrization of some test cases,
- etc.

### Promote use of refactoring names from [Martin Fowler's book](https://martinfowler.com/books/refactoring.html)

Using a common vocabulary for refactoring techniques helps the teams to adopt
"standard" refactoring techniques and makes it easier for them to communicate around it.

### The Goal is NOT to finish the problem

The aim for us, coaches, is to coach and teach the best practices and not completely finish the exercise.

### How to deal with the pairs who don't switch frequently

It is possible that you face a pair who don't switch as frequent as expected. To tackle this point:

1. Ask during the Retro, how the pair programming went? Have they enjoyed it? What was good/bad about it?
2. Remind the full team (not a specific team) to switch pairs

### About naming (for classes, methods, variables, test cases, etc.)

Good names to methods is really important to communicate what goes on in the code.

It's OK (and normal) not to find the perfect name from start, it can be improved later.

You can point attendees to [Naming is a process](https://www.digdeeproots.com/articles/naming-process/)
articles for further details about it.

### At one point, we see that we have a lot of code, and the code is repeating, could we have anticipated the refactoring?

- Not really. It's a classic pitfall to try to find a generic pattern too early. People usually get lost in that.
- But it's a good practice to do this refactoring in very baby steps.
- It's like Kent Beck's 3X framework (explore, expand, extract), or Basecamp's Hill
  progress ([Hill Charts](https://basecamp.com/hill-charts))

### Make sure every team member have their environment ready before starting the kata session

Depending on the team members' experience using git and their level of auto-discipline, it can sometimes be
useful to enforce that everyone have their environment ready prior to start the session.

Here are a few tips in order to reduce the time wasted at the beginning of the kata:

- When scheduling kata sessions, also schedule a reminder on the day before each session to create the branch for the
  kata and send them the name of the branch and instructions to check out this branch. You can also point them to the
  `Getting ready` section in the `Getting Started` document.
- Note that in case of Randori In Pairs sessions this will be harder to anticipate, as branch names
  will depend on how the pairs are organized. In this situation just point them
  to the `Getting Started` document and be ready to help, using remote screen sharing if needed.
- If the problem persists, invite the team to an "Environment Clinic" session, where everyone in the team who is
  struggling to have their environment up and running can come and ask for help and advice.

## Mob Programming Coaching Guide

### Make sure the team has a working environment before a mob session

In the advanced mob sessions, the team might be required to integrate new tools in their code.

For example, writing Cucumber scenarios. Adding those tools and libraries might not be a smooth task due to the various
dependencies in the code. Doing this configuration with the full team might waste the full session and make the team
frustrated.

Therefore, it is recommended to schedule a session with one or two members of the team prior to the mob/kata.
In that session, the team members are expected to:

1. Configure the new tools in their code
2. Ensure they have a working environment ready for the coming mob/kata (ex: ensure a basic cucumber scenario is
   running)
3. Document the configuration steps
4. Share the steps with the rest of the team

### Mob Programming Checklist

#### Must Dos:

- [ ] Setup
  - [ ] Prepare setup in advance
  - [ ] make sure we have a way to test quickly
- [ ] Working Agreements
  - [ ] Have a mobbing working agreement from the start
  - [ ] Clear session goal
  - [ ] Time-boxing activities
  - [ ] Split the group if too large
- [ ] Get up to speed with the subject
  - [ ] Learn the context and knowledge prerequisites in advance
  - [ ] start with a small programming task to get into the problem
- [ ] Coaching and facilitation
  - [ ] Encourage roles switching
  - [ ] Enforce roles switching! (might stick same driver if env is too long to switch)
  - [ ] Encourage everybody to give his opinion
  - [ ] If the group is stuck, ask permission to be more directive with "Can I propose something?"
  - [ ] Have a shared online doc for the mikado / TODO steps
- [ ] Best Practices
  - [ ] TDM - Test Driven Mobbing
  - [ ] Insist on good naming (for AI, for the coach, for the team)
  - [ ] split big problem into several smaller
- [ ] Gather feedback
  - [ ] Gather feedback and ROTI at end of each session
  - [ ] End with a mini retro

#### Must Not Dos:

- [ ] Start with 30m of code explanation that would destroy everybody's potential for attention
- [ ] Persevere in fixing something that does not help
- [ ] Emphasise the "deliverable" result over the process
- [ ] As a coach, fix everything instead of letting devs do it
- [ ] Let a few devs monopolize the mob
- [ ] let the team expert fix everything

This checklist came from a retrospective we did on Thursday Jan 16th 2025

## Remote Coaching Guide

### Randori in Pairs

The problem is that while walking in the room, it would be very easy not to have the remote guys not engaged in your
discussions.

To avoid that:

1. Try not to have a pair fully in remote
2. Have a solution to easily connect to pair working in Remote (ex: have your laptop and join in the pair's chat from
   the start)
3. Do not forget the remote pairs
4. Regularly switch between pair sessions (if you have more than one remote team)

## Surveys

At mid-coaching and at the end of coaching we send surveys to get team's feedback.

### End of session ROTI

[Here is the End of Session ROTI survey](https://forms.office.com/Pages/DesignPageV2.aspx?subpage=design&FormId=cJeDmvzpN0eQXDcPZbDiJAE08ANyJ_BOnREnQ3RgIG9UN1M0NUgxRlRKUkFHU0JWRjFKNEhHNTdRSCQlQCN0PWcu&Token=8d6c799d58a448f1be4ee7c7b7796adb)  
Generate a Pre-Filled url for the session and share it with the team.
Keep some time **in the session** to fill it. Asking them to fill it after usually does not work.

### End coaching survey

We use same survey for all teams so that we have all answers grouped together. We always
use [this survey](https://forms.office.com/Pages/DesignPageV2.aspx?subpage=design&FormId=cJeDmvzpN0eQXDcPZbDiJAE08ANyJ_BOnREnQ3RgIG9UNE1URzRMNjJSTFJQVDcyMVNXODg5WUU5OSQlQCN0PWcu&Token=ba42f16e00ec46b39cb6ec44688c9a88).
Similarly to the ROTI, generate a Pre-Filled url for the session and share it with the team.
