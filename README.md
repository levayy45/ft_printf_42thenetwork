# ft_printf

A custom implementation of the C standard library function `printf`, created as part of the 42 Network curriculum.

## Description

This project recreates the `printf` function from the C standard library. The goal is to understand variadic functions and gain experience with formatted output while adhering to strict coding standards.

## Features

The `ft_printf` function handles the following conversions:

- `%c` - Print a single character
- `%s` - Print a string
- `%p` - Print a pointer address in hexadecimal format
- `%d` / `%i` - Print a signed decimal integer
- `%u` - Print an unsigned decimal integer
- `%x` - Print a number in lowercase hexadecimal format
- `%X` - Print a number in uppercase hexadecimal format
- `%%` - Print a percent sign

## Compilation

To compile the library, run:

```bash
make
```

This will create the static library `libftprintf.a`.

### Available Make Rules

- `make` or `make all` - Compile the library
- `make clean` - Remove object files
- `make fclean` - Remove object files and the library
- `make re` - Recompile the entire project

## Usage

Include the header in your source file:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc your_program.c libftprintf.a
```

Example usage:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", &main);
    return (0);
}
```

## Project Structure

```
.
├── ft_printf.c
├── ft_printf.h
├── ft_print_char.c
├── ft_print_string.c
├── ft_print_decimal.c
├── ft_print_unsigned.c
├── ft_print_pointer.c
├── ft_putnbr_hex.c
├── ft_strlen.c
└── Makefile
└── README.md
```

## Author

**levayy**

## License

This project is part of the 42 Network curriculum.