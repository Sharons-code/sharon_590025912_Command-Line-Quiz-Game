# Command Line Quiz Game (C Project)
A simple and interactive terminal-based Quiz Game written in C.
The game asks multiple-choice questions (MCQs), validates user input, calculates the score, and displays a final result.
The program ensures only valid options (A/B/C/D) are accepted and rejects numbers, symbols, and multi-character inputs.

#Features
1.5 Multiple Choice Questions
2.Accepts only A, B, C, or D
3.Rejects invalid input such as:
4.Numbers (1, 5, 22)
5.Floats (2.5, 3.14)
6.Symbols (@, #, %)
7.Words (abc, yes)
8.Score calculation
9.Clear and user-friendly interface
10.Input buffer handling (no auto-answering issues)
11.Works on all compilers (GCC recommended)

# Repository Structure
command-line-quiz-game/
│
├── quiz.c
├── README.md
└── docs/
    └── Flowchart.png   (optional)

# How the Game Works

1.The quiz displays each question one-by-one.
2.User enters their choice: A, B, C, or D.
3.If input is invalid, a warning is shown:
4.Invalid input! Please enter A, B, C, or D.
5.After all 5 questions, the program displays the total score and feedback.

# Technologies Used
C Programming
File I/O (minimal)
Character validation (toupper, buffer cleanup)
Interactive CLI input
