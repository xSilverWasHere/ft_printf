<div align="center">

  ![ft_printfe](https://raw.githubusercontent.com/xSilverWasHere/42-project-badges/refs/heads/main/covers/cover-ft_printf.png)
</div>

# 🖨️ ft_printf – A Custom Reimplementation of printf()

This project is part of the core curriculum at 42 and consists in creating a custom version of the C standard function `printf()`, named `ft_printf()`. It aims to deepen understanding of variadic functions, memory management, and string formatting in C.

---

## 📚 Project Overview

**Objective:**  
Recreate the behaviour of the `printf()` function, handling formatted output for different data types using variadic arguments.

**Language:** C  
**Library Output:** `libftprintf.a`  
**Norm Compliance:** Mandatory (`-Wall -Wextra -Werror`)

---

## 🛠️ Features

The custom `ft_printf` handles the following conversion specifiers:

| Specifier | Description                        |
|-----------|------------------------------------|
| `%c`      | Character                          |
| `%s`      | String                             |
| `%p`      | Pointer address (hexadecimal)      |
| `%d` / `%i` | Signed decimal integer           |
| `%u`      | Unsigned decimal integer           |
| `%x`      | Hexadecimal (lowercase)            |
| `%X`      | Hexadecimal (uppercase)            |
| `%%`      | Literal percent sign               |

---

#### ⚙️ Build & Usage

**Compile the library**

>$ make

**Clean object files**

>$ make clean

**Remove all generated files**

>$ make fclean

**Rebuild the library from scratch**

>$ make re

## 🎯 What I Learned

Working on ft_printf consolidated my knowledge in:
 - Handling formatted output without relying on standard library internals
 - Structuring code for scalability and readability
 - Debugging formatting logic
 - Building a reusable library with a Makefile
 - Ensuring memory correctness in a low-level programming context

