# 🖩 Console Calculator in C

A console-based calculator built in C using **switch-case statements** for all basic arithmetic operations.

![C](https://img.shields.io/badge/Language-C-blue?style=flat-square&logo=c)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-yellow?style=flat-square)

---

## 🌐 Live Demo
👉 **[View Live Demo](https://yourusername.github.io/c-calculator)**

---

## 📋 Features

- ➕ Addition
- ➖ Subtraction
- ✖️ Multiplication
- ➗ Division (with divide-by-zero error handling)
- 🔢 Modulus (with modulus-by-zero error handling)
- 🔁 Repeat calculations without restarting
- ✅ Input validation and error messages

---

## 🗂️ Project Structure

```
c-calculator/
├── index.html       ← Interactive live demo
├── calculator.c     ← C source code
└── README.md        ← Project documentation
```

---

## ⚙️ How to Compile & Run

Make sure you have **GCC** installed.

```bash
# Clone the repo
git clone https://github.com/yourusername/c-calculator.git
cd c-calculator

# Compile
gcc -o calc calculator.c

# Run
./calc
```

On Windows:
```bash
gcc -o calc.exe calculator.c
calc.exe
```

---

## 💡 How It Works

The program uses a `switch-case` statement to handle each arithmetic operation:

```c
switch (choice) {
    case 1: result = num1 + num2; break;  // Addition
    case 2: result = num1 - num2; break;  // Subtraction
    case 3: result = num1 * num2; break;  // Multiplication
    case 4: result = num1 / num2; break;  // Division
    case 5: result = num1 % num2; break;  // Modulus
    default: printf("Invalid choice!\n"); break;
}
```

---

## 📸 Preview

```
  ╔══════════════════════════════╗
  ║     CONSOLE CALCULATOR       ║
  ║   Basic Arithmetic in C      ║
  ╚══════════════════════════════╝

  ┌──────────────────────────────┐
  │  Select an Operation:        │
  │   1.  Addition       (+)     │
  │   2.  Subtraction    (-)     │
  │   3.  Multiplication (*)     │
  │   4.  Division       (/)     │
  │   5.  Modulus        (%)     │
  │   0.  Exit                   │
  └──────────────────────────────┘
```

---

## 👤 Author

**Your Name**
- GitHub: [@yourusername](https://github.com/yourusername)
- Portfolio: [yoursite.com](https://yoursite.com)

---

## 📄 License

This project is open source under the [MIT License](LICENSE).
