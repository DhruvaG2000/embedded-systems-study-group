# Linux System Programming
---

## Table of Contents

- Introduction and Essential Concepts

## Introduction and Essential Concepts

- **Cornerstones of System Programming:** <br>
There are three cornerstones of system programming in Linux: ___system calls___, the ___C library___, and the ___C compiler___. Each deserves an introduction.
  - **System Calls:** System programming starts and ends with system calls. System calls (often shortened to _syscalls_) are function invocations made from user space—your text editor, favorite game, and so on—into the kernel (the core internals of the system) in order to request some service or resource from the operating system. Eg. ``read()`` and ``write()``
  - **The C Library:** (_libc_) is at the heart of Unix applications. On modern
Linux systems, the C library is provided by GNU libc, abbreviated glibc.
  - **The C Compiler** is provided by the GNU Compiler Collection (gcc).

- **APIs and ABIs** <br>
At the system level, there are two separate sets of definitions and descriptions that impact
portability. One is the application programming interface (API), and the other is the
application binary interface (ABI).

  - **API** defines the interfaces by which one piece of software communicates with another at the source level. For example, an API might abstract the concept of drawing text on
the screen through a family of functions that provide everything needed to draw the
text. The API merely defines the interface; the piece of software that actually provides
the API is known as the implementation of the API.<br>
A real-world example of an API is the interfaces defined by the C standard and imple‐
mented by the standard C library. This API defines a family of basic and essential func‐
tions, such as memory management and string-manipulation routines.

  - **ABI** defines the binary interface between two or more pieces of software on a particular architecture. The ABI is intimately tied to the
architecture; the vast majority of an ABI speaks of machine-specific concepts, such as
particular registers or assembly instructions.

- **Concepts of Linux Programming**<br>
The file is the most basic and fundamental abstraction in Linux.
