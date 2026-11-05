*This project has been created as part of the 42 curriculum by <mleopold@student.42abudhabi.ae>.*

# Libft

## Description

**Libft** is a custom C library created as part of the 42 curriculum. The goal is to understand how commonly used C functions work by implementing them from scratch, then collecting them in a reusable static library named `libft.a`.

The library covers character checks, strings, memory operations, conversions, output to file descriptors, and linked-list manipulation. It is intended to be reused in later C projects.

### Library contents

**Part 1 — Libc functions**

Reimplementations of standard C functions, prefixed with `ft_`:

| Category | Functions |
| --- | --- |
| Character checks and conversion | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| String operations | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` |
| Memory operations | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| Conversion and allocation | `ft_atoi`, `ft_calloc`, `ft_strdup` |

**Part 2 — Additional functions**

| Function | Purpose |
| --- | --- |
| `ft_substr` | Extract a substring |
| `ft_strjoin` | Join two strings |
| `ft_strtrim` | Remove specified characters from both ends of a string |
| `ft_split` | Split a string into a NULL-terminated array |
| `ft_itoa` | Convert an integer to a string |
| `ft_strmapi` | Apply a function to each character and create a new string |
| `ft_striteri` | Apply a function to each character of an existing string |
| `ft_putchar_fd` | Write a character to a file descriptor |
| `ft_putstr_fd` | Write a string to a file descriptor |
| `ft_putendl_fd` | Write a string followed by a newline |
| `ft_putnbr_fd` | Write an integer to a file descriptor |

**Part 3 — Linked-list functions**

The library also provides a singly linked list based on this structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Purpose |
| --- | --- |
| `ft_lstnew` | Create a new node |
| `ft_lstadd_front` | Add a node at the beginning |
| `ft_lstsize` | Count the nodes |
| `ft_lstlast` | Find the last node |
| `ft_lstadd_back` | Add a node at the end |
| `ft_lstdelone` | Delete one node and its content |
| `ft_lstclear` | Delete a node and all its successors |
| `ft_lstiter` | Apply a function to each node's content |
| `ft_lstmap` | Create a new list by applying a function to each node's content |

## Instructions

### Requirements

- A C compiler (`cc`)
- `make`
- `ar` (for creating the static library)

The project is compiled with `-Wall -Wextra -Werror`.

### Compilation

From the root of the repository, run:

```sh
make
```

This creates `libft.a`.

Other Makefile commands:

```sh
make all       # Build the library
make clean     # Remove object files
make fclean    # Remove object files and libft.a
make re        # Rebuild the library from scratch
```

### Using the library

Include `libft.h` in your C program. For example, create a separate test file named `main.c`:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("Length: %zu\n", ft_strlen("Hello, Libft!"));
    return (0);
}
```

Compile the example from the directory containing `libft.a` and `libft.h`:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o test_libft
./test_libft
```

Expected output:

```text
Length: 13
```

Keep temporary test files outside the submitted repository if they are not required for the project.

## Technical Notes

- Source files use the `ft_` prefix and are compiled into the static archive `libft.a` using `ar`.
- Function declarations and the `t_list` definition are provided in `libft.h`.
- Dynamically allocated memory must be freed when no longer needed.
- Linked-list functions use `void *content` so nodes can hold different kinds of data.
- Functions that create new strings or lists must handle allocation failures appropriately.
- The project follows the 42 Norm and does not use global variables.

## Resources

The following references are useful for understanding the C concepts used in Libft:

- [Geeks for Geeks - C programming language](https://www.geeksforgeeks.org/c/c-programming-language/) — C syntax, pointers, types, and standard library behavior.
- [Linux manual pages](https://man7.org/linux/man-pages/) — Documentation for functions such as `malloc`, `free`, `write`, and C library routines.
- [Makefile Tutorial](https://makefiletutorial.com/) — Makefile rules, dependencies, and build automation.
- [GNU Binutils `ar` documentation](https://sourceware.org/binutils/docs/binutils/ar.html) — Creating and maintaining static archives.
- **42 Libft subject (version 19.3)** — Project requirements, function specifications, and submission rules.

### AI usage

AI was used as a **learning aid** to explain C concepts, including pointers, memory allocation, function pointers, linked lists, and Makefile basics. It was also used to discuss debugging approaches and to help draft this README. The project functions should be understood, tested, and reviewed by the student before submission.

## Project Structure

The subject requires the project files to be placed at the root of the repository. The main files are:

```text
libft/
├── Makefile
├── libft.h
├── README.md
├── ft_*.c
└── libft.a       # Generated by make
```

`libft.a` is generated during compilation rather than written by hand.
