# 🧮 Digital Calculator (C Project)

A simple command-line calculator written in **C** to practice functions, conditionals, loops, and input validation.  
This project demonstrates modular programming by splitting logic into multiple source files.

---

## 📂 Project Structure

digital-calculator/
**Main program loop (control flow)**
├── calculator.c
**Calculator functions**
├── functions.c  
 **Header file with function prototypes**
├── calculator.h
**Project documentation**
└── README.md

---

## Features

- Addition, subtraction, multiplication, and integer division.
- Input validation (rejects invalid numbers).
- Handles division/modulo by zero safely.
- Option to quit the program gracefully.
- Modular structure (split into `main.c`, `functions.c`, and `calculator.h`).

---

## Compilation

To compile the program using `gcc`:

```bash
gcc calculator.c functions.c -o calculator
```

## Usage

Run the program:

```bash
calculator.exe
```

## Example flow

```
Enter your first number (an integer): 10
Enter the operator (+, -, *, /, q to quit): *
Enter your second number (an integer): 5

The product is 50
```

---

## Learning Objectives

This project was built to practice:

    - Functions → reusable calculator operations.
    - Conditionals → operator selection and error handling.
    - Loops → continuous execution until quit.
    - Input Validation → ensuring only valid integers/operators are accepted.

---

## License

This project is licensed under the MIT License.

---

## Author

roomay50
