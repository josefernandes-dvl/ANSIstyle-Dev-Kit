# ANSIstyle Dev Kit (ADK)

The **ANSIstyle Dev Kit** is a small collection of C functions that makes it easier to apply **ANSI** commands for terminal styling. Developed to make terminal programs more dynamic, organized and visually pleasing, even in a minimalist environment like C.

> 🔧 Created as part of an academic project in the Informational Systems course, the ChaveMestre Registration and Login System, the ADK seeks to offer **style and visual interaction** to C programs that run in the terminal — something rare, but powerful!

---

## ❓ What are ANSI Commands?

ANSI commands are special codes used to control terminal behavior. They follow the ANSI Escape Codes standard, which are sequences starting with \033[ (or \x1b[), followed by numbers and letters that indicate the desired action. **However, their use has a complex syntax that is not very efficient and adaptable, motivating the creation of this collection.**

## ✨ Features

### `go_to(int x, int y)`
Moves the cursor to a specific coordinate (column `x`, row `y`) within the terminal.

### `borders()`
Draws side, top, and bottom borders on the terminal, creating a fixed and clean layout.

### `clean_line()`
Clears only the line where the cursor is located, without affecting the rest of the screen content.

### `clean()`
Clears the entire terminal screen. Automatically detects the operating system (Windows, Linux, or macOS) and executes the appropriate command via `system()`.

### `write(char *text, char color)`
Prints the desired text on the screen with the specified color:
- `'r'` for red
- `'g'` for green
- `'b'` for blue
- `'p'` for pink

### `reset()`
Clears the terminal from the current line and redraws the borders with the original layout.

---

## 📥 How to download and use

1. **Clone or download this repository:**

```bash
git clone https://github.com/your-user/ANSIstyle-Dev-Kit.git
```

2. **Include the ADK files in your project in C:**

### Copy the ADK .c and .h files to your project directory.

3. **Include the ADK header in your code:**

```bash
#include "adk.h"
```

4.**Configure the terminal with the command below at the beginning of the main function:**

```bash
system("mode con: cols=80 lines=25"); // Formats the terminal for the expected layout
```

5.**Compile your project normally**

## 💡 Why use the ADK?

* Brings style to programs created in the terminal
* Works cross-platform.

* Facilitates positioning and organization of interfaces
* It is simple, lightweight and straight to the point

## 📄 License

This project was created for educational purposes and is available for free. Feel free to study, modify and use it.

## 👨‍💻 Authors
* José Fernandes Santana Neto
* Rafael Augusto da Silva Januário
### Project developed for the Introduction to Programming course – UFG (2025/1)

## Example - Registration and Login System ChaveMestre

<img src = "https://github.com/user-attachments/assets/2ef85eba-051c-4a06-a1da-21eec65761ec"  width="720">
