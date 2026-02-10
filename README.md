# C Programming Project 1

This repository contains solutions to three exercises in C programming, demonstrating fundamental concepts such as program lifecycle, control flow, loops, functions, and recursion. Each exercise is organized in its respective folder.

---

## Project Structure

c-programming-project-1/
│
├── README.md
│
├── question1_program_lifecycle/
│ └── simple_c_program.c
│
├── question2_control_flow/
│ └── control_flow&repetition.c
│
├── question3_functions_recursion/
│ └── function&_recursion.c


---

## Question 1: Program Lifecycle

**File:** `question1_program_lifecycle/simple_c_program.c`  

This is a simple C program that demonstrates the basic  C program

**Output:**
3


---

## Question 2: Control Flow & Repetition

**File:** `question2_control_flow/control_flow&_repetition.c`  

This program implements a basic **Rock, Paper, Scissors** game where the user plays against the computer. It demonstrates the use of:

- Loops (`while`)
- Conditional statements (`if`, `else if`, `else`)
- Random number generation
- Arrays of strings

**Features:**

- User inputs their choice (1 for Rock, 2 for Paper, 3 for Scissors)
- The computer randomly selects a choice
- The winner is determined and displayed
- The game continues until the user inputs `0` to exit

**Example Output:**
Enter 1 for Rock, 2 for Paper, 3 for Scissors:
2
Computer chose: Rock
You win!


---

## Question 3: Functions & Recursion

**File:** `question3_functions_recursion/function_&_recursion.c`  

This program demonstrates the use of **functions** and **recursion** in C. It calculates the sum and average of an array of student grades.

**Features:**

- `calculate_sum()` – recursively computes the sum of an array
- `calculate_average()` – computes the average from the sum
- Demonstrates array handling and recursion in C

**Example Output:**
average is: 54


---

## How to Compile and Run

1. Open a terminal and navigate to the folder of the program you want to run.
2. Compile the program using `gcc`. For example:
gcc simple_c_program.c -o simple_c_program

3. Run the executable:
./simple_c_program

4. Follow the on-screen instructions (for interactive programs like Rock, Paper, Scissors).

---