# ft_printf

<p align="center">
  <img src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/ft_printfe.png" alt="ft_printf 42 project badge"/>
</p>

For the ft_printf project of the 42 school cursus, we must recreate the famous C library printf function. This project teaches us about variadic arguments as well as structures if we plan to implement printf's extra flags.

- Supported conversions: %, c, s, p, i, d, u, x, X
- Supported flags: # + (space)
- Supported options: - 0 . * width

## Status
Finished: 2022-02-07. Grade: 125/100.

## Usage

``make`` or ``make bonus`` to compile.

### Basic Usage
For example, let's create a ``main.c`` file.

```c
// Include the header
#include "ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("Testing ft_printf!");
      return (0);
}
```

Compile the ``main.c`` file with the ft_printf library and run the program:
```bash
gcc main.c libftprintf.a && ./a.out
```
Output should be:
```
Testing ft_printf!
```
