*This project has been created as part of the 42 curriculum by tchern-h.*

# Libft

## Description

Libft is my first own C library, built as part of the 42 curriculum. The goal is to understand how the standard C functions work by reimplementing them from scratch, and to build a collection of general-purpose utilities that can be reused in future 42 projects.

The library is compiled into a static archive, `libft.a`, using the `ar` command. All sources follow the 42 Norm and compile with `cc -Wall -Wextra -Werror`. No global variables are used, and helper functions are declared `static`.

The project is split into three parts.

### Part 1 - Libc functions

Reimplementations of standard libc functions. They have the same prototypes and behaviour as the originals (per their man pages), prefixed with `ft_`, and do not rely on external functions (except `malloc` for `calloc` and `strdup`).

**Character checks and conversion** (`isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint` return 1 on match, 0 otherwise):

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value fits in the ASCII set (0-127). |
| `ft_isprint` | Checks whether a character is printable (including space). |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

**String functions:**

| Function | Description |
|---|---|
| `ft_strlen` | Returns the length of a string. |
| `ft_strlcpy` | Copies a string into a buffer of given size, always NUL-terminating when size > 0; returns the length of the source. |
| `ft_strlcat` | Appends a string to a buffer of given size, with size-bounded concatenation; returns the length it tried to create. |
| `ft_strchr` | Locates the first occurrence of a character in a string. |
| `ft_strrchr` | Locates the last occurrence of a character in a string. |
| `ft_strncmp` | Compares at most `n` characters of two strings. |
| `ft_strnstr` | Locates a substring within a string, searching at most `len` characters. |
| `ft_atoi` | Converts the initial part of a string to an `int`. |
| `ft_strdup` | Returns a `malloc`'d duplicate of a string. |

**Memory functions:**

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a constant byte. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies `n` bytes between non-overlapping memory areas. |
| `ft_memmove` | Copies `n` bytes between memory areas that may overlap. |
| `ft_memchr` | Scans memory for the first occurrence of a byte. |
| `ft_memcmp` | Compares two memory areas byte by byte. |
| `ft_calloc` | Allocates zero-initialised memory for an array. If `nmemb` or `size` is 0, it returns a unique pointer that can be passed to `free()`. |

### Part 2 - Additional functions

Functions that are either not in libc or exist in a different form. Most return newly `malloc`'d memory (or `NULL` on allocation failure).

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring of `s` starting at index `start` with a maximum length of `len`. |
| `ft_strjoin` | Returns a new string that is the concatenation of `s1` and `s2`. |
| `ft_strtrim` | Returns a copy of `s1` with characters from `set` removed from the beginning and the end. |
| `ft_split` | Splits a string using a delimiter character into a NULL-terminated array of independently allocated strings. |
| `ft_itoa` | Converts an integer (including negatives) to a `malloc`'d string. |
| `ft_strmapi` | Applies a function `f(index, char)` to each character of a string and returns the resulting new string. |
| `ft_striteri` | Applies a function `f(index, char *)` to each character of a string in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3 - Linked list

Functions to manipulate a singly linked list built on the following structure, declared in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node with the given content and `next` set to `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees a single node's content (using `del`) and the node itself, without touching the next node. |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Applies a function to each node's content and builds a new list from the results, cleaning up with `del` if an allocation fails. |

## Instructions

**Requirements:** a C compiler (`cc`), `make`, and `ar`.

**Build the library:**

```sh
make
```

This produces `libft.a` at the root of the repository.

**Other Makefile rules:**

```sh
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # fclean, then rebuild
```

**Use the library in your own project:**

```c
#include "libft.h"
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

**References:**

- Linux man pages (`man 3 strlen`, `man 3 memmove`, `man 3 strlcpy`, etc.)
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Kernighan & Ritchie
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [`ar` documentation](https://man7.org/linux/man-pages/man1/ar.1.html)
- 42 Norm and the Libft subject (v19.3)