# libft

## About

libft — a foundational C library rebuilt from scratch as part of 42 School's core curriculum.

By completing this project, I gained a solid understanding of:
- Low-level memory manipulation,
- String operations,
- Linked lists and dynamic data structures,
- Code organization and Makefiles.

## Table of Contents

- [About](#about)
- [Library Overview](#library-overview)
  - [Memory Functions](#memory-functions)
  - [String Functions](#string-functions)
  - [Checker Functions](#checker-functions)
  - [Miscellaneous Functions](#miscellaneous-functions)
  - [List Functions](#list-functions)
- [Project Structure](#project-structure)
- [License](#license)

libft is the very first project in the 42 School's common core. What it means is that we start our journey into
programming by learning what some of the most used functions in C are and how exactly they work. 

No shortcuts, no memory leaks — just clean, production–ready code.

If you check the libft.h header you'll see I've divided my functions in five categories:
  - Memory functions;
  - String functions;
  - Checker functions;
  - Miscellaneous functions; and
  - List functions.

This division, although not applied to the Makefile or the project structure (we'll get to that in a moment), helps 
the user understand what to expect from each function, specially when using libft in future endeavours.

## Memory functions

If you, like me, had no prior coding experience before the piscine, these might be the functions that intrigue you
the most — for the first time we're seeing functions that return a void pointer.

The purpose of these functions is to deal with memory itself, hence why they often iterate in char — a char is one
byte long, the smallest you can get before dwelling in bits. So, these functions are there to allow you to move, copy,
check and operate on memory, no matter what kind of variable is stored there.

That's precisely why they return void pointers — addresses of memory, be it int, char, bool or anything else.

## String functions

Strings are a powerful thing in C, and therefore a dangerous one.

In this section, we replicate some of the most used string functions in C (like strlen), as well as improve on some others.
It is worth noting that some error-prone functions are left out of this, like strcpy, which is known for being a somewhat
easy target for buffer overloading attacks. Since we are only allowed to use our own library moving forward, we can be
sure we know how these functions work and that they are bullet-proof.

## Checker functions

Here we have some simpler functions, whose purpose is to check simple input characteristics — like if an unsigned char c is printable,
for example.

## Miscellaneous functions

Although hard to categorize, here we find some of the most challenging functions to develop, and also some of the most useful ones.
We'll find in here functions like atoi and split, implemented by ourselves and in accordance to the rigorous norminette, 42's
own formatting standard.

## List functions

Finally, we have functions regarding lists. In here, we operate with a simple struct, also defined in our header.

Personally, I believe the purpose of these functions, which belong in the bonus section of the project, is to introduce us
to the concept of nodes and linked lists, more than to actually provide us with ready-to-use functions. After all, each
project and each approach will need its own, personalized struct.

## Project structure

libft/
├── ft_*.c             # Source files for all functions
├── libft.h            # Header file with function prototypes
├── Makefile           # Compiles the library
└── README.md          # Project documentation (this file)

## License

This project is licensed under the MIT License — see the LICENSE file for details.
