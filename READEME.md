# libft

This is my implementation of the **libft** project, a custom C library recreating standard C functions along with some personal additions for list management and string manipulation.

## Contents

The library includes functions for:

* **Character checks:** `ft_isalnum`, `ft_isalpha`, `ft_isascii`, `ft_isdigit`, `ft_isprint`
* **String manipulation:** `ft_strlen`, `ft_strchr`, `ft_strdup`, `ft_strjoin`, `ft_striteri`, `ft_strlcat`, `ft_strlcpy`, `ft_strmapi`, `ft_strncmp`, `ft_strnstr`, `ft_strrchr`, `ft_strtrim`, `ft_substr`
* **Memory management:** `ft_bzero`, `ft_calloc`, `ft_memchr`, `ft_memcmp`, `ft_memcpy`, `ft_memmove`, `ft_memset`
* **Conversion:** `ft_atoi`, `ft_itoa`, `ft_tolower`, `ft_toupper`
* **Output:** `ft_putchar_fd`, `ft_putendl_fd`, `ft_putnbr_fd`, `ft_putstr_fd`
* **String splitting:** `ft_split`
* **Linked list operations:**
  `ft_lastadd_back`, `ft_lstadd_front`, `ft_lstclear`, `ft_lstdelone`, `ft_lstlast`, `ft_lstmap`, `ft_lstnew`, `ft_lstsize`

## Personal additions

I added some personal helper functions for linked list management, including `ft_lastadd_back` and others to better handle list operations.

## How to use

* Use the provided `Makefile` to compile the library with `make`.
* Include the header `libft.h` in your C projects to use the library functions.

## Files

* Source files:
  `ft_atoi.c`, `ft_bzero.c`, `ft_calloc.c`, `ft_isalnum.c`, `ft_isalpha.c`, `ft_isascii.c`, `ft_isdigit.c`, `ft_isprint.c`, `ft_itoa.c`, `ft_lastadd_back.c`, `ft_lstadd_front.c`, `ft_lstclear.c`, `ft_lstdelone.c`, `ft_lstlast.c`, `ft_lstmap.c`, `ft_lstnew.c`, `ft_lstsize.c`, `ft_memchr.c`, `ft_memcmp.c`, `ft_memcpy.c`, `ft_memmove.c`, `ft_memset.c`, `ft_putchar_fd.c`, `ft_putendl_fd.c`, `ft_putnbr_fd.c`, `ft_putstr_fd.c`, `ft_split.c`, `ft_strchr.c`, `ft_strdup.c`, `ft_striteri.c`, `ft_strjoin.c`, `ft_strlcat.c`, `ft_strlcpy.c`, `ft_strlen.c`, `ft_strmapi.c`, `ft_strncmp.c`, `ft_strnstr.c`, `ft_strrchr.c`, `ft_strtrim.c`, `ft_substr.c`, `ft_tolower.c`, `ft_toupper.c`
* Header file: `libft.h`
* Build: `Makefile`

---

## Author

maroun28  
GitHub: [maroun28](https://github.com/maroun28)
