# CSC 212: Data Structures and Algorithms

Welcome to CSC 212, Data Structures and Algorithms!

## Table of Contents

- [Table of Contents](#Table-of-Contents)
- [Important Links](#Important-Links)
- [Schedule](#Schedule)
- [Assignments (100 points each)](#Assignments-100-points-each)
- [Bonus Points](#Bonus-Points)
- [Resources](#Resources)
- [Setup](#Setup)
- [Working with Github Classroom](#Working-with-Github-Classroom)
- [FAQ](#FAQ)
- [Good Reads](#Good-Reads)

## Important Links

- [Website](https://thoward27.github.io/algorithms/)
- [Syllabus](docs/syllabus.md)
- [Slack Room](https://csc212.slack.com/)

---

## Schedule

| Date      | Lectures                                                                                           | Readings                                                                                                                               |
| --------- | -------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------- |
| Tue, 5/21 | Getting Started                                                                                    | Accelerated C++ [0, 4], [CS50 Data Types](https://youtu.be/Fc9htmvVZ9U)                                                                |
| Wed, 5/22 | [C++ Crash Course](docs/notes/CrashCourseCPP.pdf)                                                  | Accelerated C++ [5, 7], [CS50 Variables and Scope](https://youtu.be/GiFbdVGjF9I)                                                       |
| Thu, 5/23 | [C++ Crash Course](docs/notes/CrashCourseCPP.pdf)                                                  | Accelerated C++ [8, 10], [CS50 Pointers](https://youtu.be/XISnO2YhnsY)                                                                 |
| Tue, 5/28 | [Algorithms for Singular Variables](docs/notes/algorithms.html)                                    | [OpenDSA 6][odsa6], [CS50 Functions](https://youtu.be/n1glFqt3g38)                                                                     |
| Wed, 5/29 | [Algorithms for Arrays](docs/notes/algorithms.html)                                                | [OpenDSA 8][odsa8], [CS50 Arrays](https://youtu.be/YdSycMcxvY0)                                                                        |
| Thu, 5/30 | [Recursion](docs/notes/algorithms.html)                                                            | [OpenDSA 10][odsa10],  [CS50 Recursion](https://youtu.be/mz6tAJMVmfM), [CS50 Stack Frames](https://youtu.be/aCPkszeKRa4)               |
| Tue, 6/4  | [Sorting / Bubble Sort](docs/notes/sorting.html)                                                   | [OpenDSA 13.1, 13.2, 13.4][odsa13],  [CS50 Bubble Sort](https://youtu.be/RT-hUXUWQ2I)                                                  |
| Wed, 6/5  | [Insertion Sort / Selection Sort](docs/notes/sorting.html)                                         | [OpenDSA 13.3, 13.5][odsa13], [CS50 Insertion Sort](https://youtu.be/O0VbBkUvriI), [CS50 Selection Sort](https://youtu.be/3hH8kTHFw2A) |
| Thu, 6/6  | [MergeSort](docs/notes/sorting.html)                                                               | [OpenDSA 13.9][odsa13], [CS50 MergeSort](https://youtu.be/Ns7tGNbtvV4)                                                                 |
| Tue, 6/11 | [QuickSort](docs/notes/sorting.html)                                                               | [OpenDSA 13.11][odsa13],                                                                                                               |
| Wed, 6/12 | Sorting & Analysis Review                                                                          | [OpenDSA 6, 8, 10, 13][odsa]                                                                                                           |
| Thu, 6/13 | [Exam 01 Review](docs/exams/E01R.md), [Answers](docs/exams/E01RA.md)                               |                                                                                                                                        |
| Tue, 6/18 | [SLL](docs/notes/linear.html)                                                                      | [OpenDSA 9.1-9.5][odsa9], [CS50 SLL](https://youtu.be/zQI3FyWm144)                                                                     |
| Wed, 6/19 | [CSLL / DLL / CDLL](docs/notes/linear.html)                                                        | [OpenDSA 9.6][odsa9], [CS50 DLL](https://youtu.be/FHMPswJDCvU)                                                                         |
| Thu, 6/20 | [Stacks](docs/notes/linear.html)                                                                   | [OpenDSA 9.8, 9.9][odsa9], [CS50 Stacks](https://youtu.be/hVsNqhEthOk)                                                                 |
| Tue, 6/25 | [Queues](docs/notes/linear.html)                                                                   | [OpenDSA 9.12, 9.13][odsa9], [CS50 Queues](https://youtu.be/3TmUv1uS92s)                                                               |
| Wed, 6/26 | [Trees / Binary Trees](docs/notes/trees.html)                                                      | [OpenDSA 12.1-12.13][odsa12]                                                                                                           |
| Thu, 6/27 | [Binary Trees](docs/notes/trees.html#/2)                                                           | [OpenDSA 12.14-12.16][odsa12]                                                                                                          |
| Tue, 7/2  | [Heaps](docs/notes/trees.html#/3)                                                                  | [OpenDSA 12.17][odsa12]                                                                                                                |
| Wed, 7/3  | [2-3 Tree / Red Black Tree](https://algs4.cs.princeton.edu/lectures/33BalancedSearchTrees-2x2.pdf) | [OpenDSA 17.5](odsa17), [Balanced Search Trees](https://algs4.cs.princeton.edu/33balanced/)                                            |
| Fri, 7/5  | [Red Black Tree](https://www.cs.princeton.edu/~rs/talks/LLRB/RedBlack.pdf)                         | [LLRB Tree](https://www.cs.princeton.edu/~rs/talks/LLRB/LLRB.pdf)                                                                      |
| Tue, 7/9  | [Tries](https://algs4.cs.princeton.edu/lectures/52Tries-2x2.pdf)                                   | [OpenDSA 12.19](odsa12), [Wikipedia](https://en.wikipedia.org/wiki/Trie)                                                               |
| Wed, 7/10 | [Data Structures Review](docs/exams/E02R.md)                                                       |                                                                                                                                        |
| Thu, 7/11 | Exam (Data Structures)                                                                             |                                                                                                                                        |
| Tue, 7/16 | [Hash Tables](https://algs4.cs.princeton.edu/lectures/34HashTables-2x2.pdf)                        |                                                                                                                                        |
| Wed, 7/17 | Graphs                                                                                             |                                                                                                                                        |
| Thu, 7/18 | Recursive Backtracking                                                                             |                                                                                                                                        |
| Tue, 7/23 | Dynamic Programming                                                                                |                                                                                                                                        |
| Wed, 7/24 | Course Review                                                                                      |                                                                                                                                        |
| Thu, 7/25 | Final Exam (Cumulative)                                                                            |                                                                                                                                        |

## Assignments (100 points each)

| Title                                                            | Due Date |
| ---------------------------------------------------------------- | -------- |
| [A01: Kattis Competition](docs/assignments/A01-kattis.md)        | May 30   |
| [A02: String Class](docs/assignments/A02-string.md)              | June 6   |
| [A03: Hybrid Sorting](docs/assignments/A03-hybrid-sort.md)       | June 13  |
| [A04: Advanced Sorting](docs/assignments/A04-advanced-sort.md)   | June 20  |
| [A05: Djikstra's Two Stack](docs/assignments/A05-two-stack.md)   | June 27  |
| [A06: For the love of Binary](docs/assignments/A06-binary.html)  | July 2   |
| [A07: Heap Sort](docs/assignments/A07-heapsort.html)             | July 11  |
| [A08: Red/Black Tree Sort](docs/assignments/A08-rbtreesort.html) | July 11  |
| [A09: Dynamic Array](docs/assignments/A09-dynarray.html)         | July 25  |
| [A10: Lexographic Sorting]()                                     | July 18  |
| [A11: Radix Tree]()                                              | July 25  |
| [A12: Spellchecker]()                                            | July 25  |
| [A13: Sudoku]()                                                  | Final    |

## Bonus Points

| Task                      | Points      | Due     |
| ------------------------- | ----------- | ------- |
| Code Signal Practice Test | 20          | May 23  |
| Boot Linux                | 50          | June 6  |
| Top Kattis                | 50, 30, 20  | May 30  |
| Fastest Sort              | 50, 30, 20  | June 20 |
| Array Based Containers    | 50          | June 27 |
| Heap Implementation       | 25          | July 3  |
| Additional Advanced Sorts | 50/25/15/10 | July 25 |

## Resources

- [DevDocs](https://devdocs.io/)
- Cheat Sheets
  - [Git](docs/cheat_sheets/git-cheat-sheet-education.pdf)
  - [Github](docs/cheat_sheets/github-git-cheat-sheet.pdf)
  - VS Code
    - [Linux](docs/cheat_sheets/vscode-linux.pdf)
    - [Mac OS](docs/cheat_sheets/vscode-macos.pdf)
    - [Windows](docs/cheat_sheets/vscode-windows.pdf)
- Visualizations
  - [Visualizations](https://www.cs.usfca.edu/~galles/visualization/Algorithms.html)
  - [Visualgo](https://visualgo.net/en)
- Books
  - [OpenDSA](https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/)
  - [Algorithms](https://algs4.cs.princeton.edu/home/)
  - [Accelerated C++](https://www.google.com/search?q=accelerated+c%2B%2B&oq=accelerated+c%2B%2B&aqs=chrome..69i57j69i60j0l4.2026j0j7&client=ubuntu&sourceid=chrome&ie=UTF-8)
- Videos
  - [CS50](https://www.youtube.com/channel/UCcabW7890RKJzL968QWEykA)
  - [Crash Course Computer Science](https://www.youtube.com/playlist?list=PL8dPuuaLjXtNlUrzyH5r6jN9ulIgZBpdo)
  - [MIT OpenCourseWare](https://www.youtube.com/user/MIT)
- Interactive Online Learning
  - [Khan Academy Computer Science](https://www.khanacademy.org/computing/computer-science)
  - [FreeCodeCamp](https://www.freecodecamp.org/)
- Problem Solving Practice
  - [Code Signal](https://codesignal.com/)
  - [Kattis](https://open.kattis.com/)
- Learning C++
  - [cplusplus Tutorial](http://www.cplusplus.com/doc/tutorial/)
  - [Codecademy](https://www.codecademy.com/learn/learn-c-plus-plus)
  - [FreeCodeCamp (YouTube)](https://www.youtube.com/watch?v=-ofiQpm3Kmo)
  - [C++, Short and Sweet (Udemy)](https://www.udemy.com/share/1001No/)
  - [C++ For Complete Beginners (Udemy)](https://www.udemy.com/free-learn-c-tutorial-beginners/)
  - [Udacity Nanodegree (non-free)](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213)
  - [Learn C++ by Creating (Udemy non-free)](https://www.udemy.com/share/10079O/)
  - [LearnCPP](https://www.learncpp.com/)
  - [C++ Programming Basics (Udemy non-free)](https://www.udemy.com/share/100nB6/)
  - [Sololearn](https://www.sololearn.com/Course/CPlusPlus/)
  - [C++ Templates](https://www.udemy.com/share/1002YA/)
  - [Learn Advanced C++ Programming (udemy non-free)](https://www.udemy.com/share/1000MS/)
- Learning Git & Github
  - [Github Hello World](https://guides.github.com/activities/hello-world/)

## Setup

### Github

[View the official Handbook](https://guides.github.com/introduction/git-handbook/)

#### Students

1. Create a fork.
   1. Visit the public repository's [website](https://github.com/thoward27/algorithms)
   2. Fork the repository (Button on the top right)
2. Clone your fork.
   1. Navigate to your Github profile
   2. Select your copy of the `algorithms` repository
   3. Get the link to your repository from the big green button on the right side of the page.
   4. In your terminal, navigate to where you'd like to save your work
   5. Execute `git clone <your_repository_link_goes_here>`
3. Configure your new repository.
   1. CD into the freshly cloned repository (`cd algorithms`)
   2. [Configure a remote for your fork](https://help.github.com/en/articles/configuring-a-remote-for-a-fork)
      1. Run `git remote add upstream https://github.com/thoward27/algorithms.git`
   3. Make sure when you run `git remote -v` you see `upstream` with a link to my copy of `algorithms` (`https://github.com/thoward27/algorithms.git`)
4. Procedure for doing classwork.
   1. Ensure that you've committed all of your work to your current branch (**which should not be master**)
      1. Add your current changes: `git add .`
      2. Commit your changes: `git commit -m "<your message here>"`
   2. Now that you're in a clean state, checkout the master branch: `git checkout master`
   3. In order to get the most recent changes from the class repository, you must update your repository:
      1. Fetch upstream changes: `git fetch upstream`
      2. Merge upstream changes into master: `git merge upstream/master`
      3. For good measure, you should also push these new changes to your online copy of the repository: `git push`
   4. At this point you should be on master, with all updates from the class repository.
   5. Create a new branch for your work `git checkout -b lab/<topic>`
   6. Publish your changes with `git push -u origin lab/<topic>`
   7. Do your work, committing and pushing regularly, especially after passing any new unit tests
      1. Add your changes: `git add .`
      2. Commit your changes: `git commit -m "<your message here>"`
      3. Push your changes: `git push`
5. Opening a Pull Request
   1. **You should only do this with explicit permission**
   2. Navigate to your Github profile, and select the `algorithms` repository.
   3. Select the branch you'd like to open a pull request from (normally the one from that days work)
   4. Select "Open a Pull Request"
   5. In the message, put all of your groups URI Emails so that I can update my grade book

#### TAs

1. Clone the public repository (`git clone git@github.com:thoward27/algorithms.git`)
2. CD into the repo (`cd algorithms`)
3. Add the private remote (`git remote add private git@github.com:thoward27/_algorithms.git`)
4. Fetch from the remote (`git fetch private`)
5. Checkout dev to work (`git checkout dev`), merge to master when you're ready to publish.

> Be sure that when you're dealing with solutions, or WIP, that you ensure you push only to private. The branch Dev should never be pushed to the public facing repo, accidental pushes will be hard wiped immediately, **all data will be lost**.

### IDE

#### Linux (Preferred, Auto-grader OS)

This is the operating system we prefer in this class, as it closely mirrors your auto-grader environment.

[VSCode](https://code.visualstudio.com/)

#### Windows 10

[VS Code via WSL](https://code.visualstudio.com/docs/remote/wsl)

#### Windows 8 and older

Please boot linux, Windows 8 and older is extremely challenging to develop C++ on.

If you insist on using Windows 8, you will need to install [Cygwin](https://www.cygwin.com/), or you will have to buy an online IDE license.

[VS Code](https://code.visualstudio.com/)
Requirement: [Cygwin](https://www.cygwin.com/)

#### Mac OS

In order of preference:

1. [Coder](https://coder.com)
   1. Requirement: [Docker](https://docs.docker.com/docker-for-mac/install/)
2. [VS Code](https://code.visualstudio.com/)

#### Online IDEs

This section contains some helpful online IDEs that can be used for in-class work, but may not be used for homework without purchasing an upgrade.

> You may not work on homework in any of these IDEs unless you upgrade your license, you must work in private repositories for homework.

1. [Gitpod](https://www.gitpod.io/)
2. [repl](https://repl.it/)
3. [StackBlitz](https://stackblitz.com/)

## Working with Github Classroom

1. Registering for the assignment
   1. Click on the link to the assignment
   2. Make sure you select your email from the roster if you have not already
   3. Accept the assignment
   4. Click on the link after the text "Your assignment has been created here:"
2. Clone your assignment to your computer
   1. Go to the page for your assignment
   2. Select "Clone or download" (big green button)
   3. Copy the link
   4. Open a terminal and navigate to the `algorithms` folder
   5. Use the command `cd ..` to step out of the algorithms folder
   6. Clone your repository `git clone <your link goes here>`
   7. `cd` into your new folder: `cd <your assignment folder>`
   8. Open this folder in VS Code
3. Completing your assignment
   1. Following the instructions for the assignment, being working on the provided unit tests.
   2. After passing each unit test, commit and push your progress.
      1. Stage your changes: `git add .`
      2. Commit your work: `git commit -m "<Name of the test case you just passed>"`
      3. Push your work to Github: `git push`
   3. Check that your submission worked by visiting the online copy of your assignment, and verifying your changes were pushed.

## FAQ

- Why isn't my code compiling?
  - Are all expected methods/functions declared **and** defined?
  - Are your methods namespaced properly?
  - Are you on Mac? Try using `-std=c++11`
  - What do the errors say?
- Can I add attribute `x` to my class?
  - Yes, you are welcome to modify all private sections to any class we create.
- What libraries can I use?
  - `iostream`, `chrono`
  - Anything we have already built (you have to source it from our repository)
- Why doesn't `make` work?
  - Fix script: `sudo apt-get update && sudo apt-get upgrade && sudo apt install make && sudo apt install g++-8`

## Good Reads

- [Visualizing Algorithms](https://bost.ocks.org/mike/algorithms/)
- [Algorithmic Art](http://www.kristenwebster.net/)

<!-- Sources -->

[a00]: docs/assignments/A00-pretest.md
[a01]: docs/assignments/A01-kattis.md
[a02]: docs/assignments/A02-string.md
[a03]: docs/assignments/A03-hybrid-sort.md
[a04]: docs/assignments/A04-advanced-sort.md
[a05]: docs/assignments/A05-two-stack.md
[a06]: docs/assignments/A06-binary-things.md

[git-basics]: https://git-scm.com/book/en/v1/Getting-Started-Git-Basics
[git-handbook]: https://guides.github.com/introduction/git-handbook/

[odsa]: https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/
[odsa6]: https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/#mathematical-background
[odsa8]: https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/#algorithm-analysis
[odsa9]: https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/#linear-structures
[odsa10]: https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/#recursion
[odsa12]: https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/#binary-trees
[odsa13]: https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/#sorting
[odsa15]: https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/#hashing
[odsa17]: https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/#indexing
