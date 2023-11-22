<h1 align="center">
	✏️ ft_printf
</h1>

<p align="center">
	<b><i>Because putnbr and putstr aren’t enough</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/dantol29/ft_printf?color=lightblue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/dantol29/ft_printf?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/dantol29/ft_printf?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/dantol29/ft_printf?color=green" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About the project

> _This project is pretty straight forward. You will recode printf. You will mainly learn how to use variadic arguments._

	This project consists of coding a library that contains a simplified version (more
	information below) of the printf function.

## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile, go to the library path and run:

```shell
$ make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "ft_printf.h"
```

## Testing
For example, let's create a ``main.c`` file.

```c
// Include the header
#include "ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("Testing ft_printf %d!", 42);
      return (0);
}
```

Compile the ``main.c`` file with the ft_printf library and run the program:
```bash
gcc main.c libftprintf.a && ./a.out
```
Output should be:
```
Testing ft_printf 42!
```
