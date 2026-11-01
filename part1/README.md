*This project has been created as part of the 42 curriculum by admobhid.*

# Libft

## Description

Libft is my first C project at 42. The goal is to create my own C library by implementing functions from the standard C library and adding other useful functions.

This library will help me understand how common C functions work and will be used in future 42 projects.

## Instructions

Clone the repository and enter the project directory.

To compile the library:

```bash
make
```

To compile the bonus functions:

```bash
make bonus
```

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To recompile everything:

```bash
make re
```

After compilation, the `libft.a` library will be created at the root of the project.

## Library Functions

The library contains 43 functions divided into three parts.

### Part 1 – Libc Functions

These functions reproduce the behavior of several standard C library functions.

**Character checks**

Check whether a character belongs to a specific category.

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`

**Memory functions**

Manipulate, copy, compare, and allocate memory.

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

**String functions**

Measure, search, compare, and manipulate strings.

- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_atoi`

### Part 2 – Additional Functions

These functions provide additional tools for working with strings and file descriptors.

**String manipulation**

- `ft_substr`: Creates a substring.
- `ft_strjoin`: Joins two strings.
- `ft_strtrim`: Removes characters from the beginning and end of a string.
- `ft_split`: Splits a string using a delimiter.
- `ft_itoa`: Converts an integer into a string.
- `ft_strmapi`: Applies a function to each character and creates a new string.
- `ft_striteri`: Applies a function to each character of a string.

**File descriptors**

These functions write characters, strings, and integers to a given file descriptor.

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Bonus – Linked Lists

These functions allow working with singly linked lists. They provide tools to create nodes, add them to a list, access them, iterate through them, and delete them.

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Resources

- [42 Libft Subject](https://42.fr/)
- [C Reference](https://en.cppreference.com/w/c)
- Linux manual pages (`man`)