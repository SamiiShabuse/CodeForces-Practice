# Codeforces C++ Practice

This repository tracks my Codeforces practice as I build stronger C++ fundamentals, improve my problem-solving speed, and prepare for technical interviews in quant-focused roles.

The goal is not just to collect accepted solutions. I am using each problem as a small training rep: read the prompt carefully, identify the pattern, write clean C++, and keep notes on what I learned.

## Why This Repo Exists

I am working toward a stronger foundation in:

- C++ syntax, standard library usage, and input/output habits
- Algorithmic thinking under time constraints
- Translating problem statements into concise implementations
- Pattern recognition across math, greedy, strings, arrays, and simulation problems
- The kind of disciplined reasoning that matters in quantitative finance and trading interviews

Competitive programming is only one part of quant preparation, but it is a useful way to practice precision, speed, and analytical problem solving.

## Repository Structure

Each folder is organized around one Codeforces problem:

```text
ProblemID.Problem-Name/
  solution.cpp
  notes.md
```

The C++ file contains my solution, and the notes file captures the problem requirements, key idea, and any mistakes or insights I want to remember.

## How I Approach Problems

1. Restate the problem in plain English.
2. Identify the core pattern or shortcut.
3. Write the simplest correct C++ solution.
4. Test with sample cases and edge cases.
5. Record notes so the lesson is easier to review later.

## Running a Solution

Example using `263A.Beautiful-Matrix`:

```powershell
cd 263A.Beautiful-Matrix
g++ -std=c++17 -Wall -Wextra -O2 beautiful-matrix.cpp -o beautiful-matrix
.\beautiful-matrix.exe
```

On macOS or Linux, run the compiled file with:

```bash
./beautiful-matrix
```

## Long-Term Direction

As this repo grows, I want it to show my progression from beginner-friendly Codeforces problems into more advanced topics:

- Binary search
- Sorting and custom comparators
- Greedy algorithms
- Dynamic programming
- Graphs and trees
- Number theory
- Probability and expected value
- Data structures used in performance-sensitive systems

This is a public record of the work I am putting in to become better at C++, competitive programming, and the technical reasoning expected in quant careers.
