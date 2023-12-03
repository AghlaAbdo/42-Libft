# Libft

## Description

Libft is a project at 1337 school where you implement your own library containing various standard C functions. This library, named `libft.a`, will serve as a foundation for your future projects at the school.

## Table of Contents

- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
  - [Example](#example)
- [Resources](#resources)
- [Grade](#grade)
- [Contributing](#contributing)
  - [How to Contribute](#how-to-contribute)
  - [What to Contribute](#how-to-contribute)

## Getting Started

### Prerequisites

Make sure you have the following installed:

- [gcc](https://gcc.gnu.org/) (GNU Compiler Collection)

### Installation

1. **Clone the repository:**

   ```bash
   git clone https://github.com/AghlaAbdo/42-Libft.git
   ```

2. **Compile the library:**

   ```bash
   cd Libft
   make
   ```
**To compile to bonus part:**

  ```bash
  make bonus
  ```

This will generate the libft.a library.

## Usage

To use the libft.a library in your projects, include the header file in your source code and link the library during compilation.

### Example

  ```c
    #include "libft.h"
  
  int main() {
      ft_putstr("Hello, Libft!\n");
      return 0;
  }
  ```
**Compile:**

  ```bash
  gcc -o my_program my_program.c libft.a
  ```
## Resources

Your first resource is the ***man***

Whenever you are asked to implement the behavior of a certain standard function, you first need to read about it in the manual

  ex:
  ```bash
  man calloc
  ```

### Part 1 - Libc functions

| Function   | Resource                                                    | Function   | Resource                                                    |
|------------|-------------------------------------------------------------|------------|-------------------------------------------------------------|
| isalpha    | [isalpha - cppreference.com](https://en.cppreference.com/w/c/string/byte) | strlcpy    | [strlcpy - OpenBSD Manual Pages](https://man.openbsd.org/strlcpy.3) |
| isdigit    | [isdigit - cppreference.com](https://en.cppreference.com/w/c/string/byte) | strlcat    | [strlcat - OpenBSD Manual Pages](https://man.openbsd.org/strlcat.3) |
| isalnum    | [isalnum - cppreference.com](https://en.cppreference.com/w/c/string/byte) | toupper    | [toupper, tolower - cppreference.com](https://en.cppreference.com/w/c/string/byte/toupper) |
| isascii    | [isascii - cppreference.com](https://en.cppreference.com/w/c/string/byte) | tolower    | [tolower - cppreference.com](https://en.cppreference.com/w/c/string/byte/tolower) |
| isprint    | [isprint - cppreference.com](https://en.cppreference.com/w/c/string/byte) | strchr     | [strchr, strrchr - cppreference.com](https://en.cppreference.com/w/c/string/byte/strchr) |
| strlen     | [strlen - cppreference.com](https://en.cppreference.com/w/c/string/byte/strlen) | strrchr    | [strchr, strrchr - cppreference.com](https://en.cppreference.com/w/c/string/byte/strchr) |
| memset     | [memset - cppreference.com](https://en.cppreference.com/w/c/string/byte/memset) | strncmp    | [strncmp - cppreference.com](https://en.cppreference.com/w/c/string/byte/strncmp) |
| bzero      | [bzero - cppreference.com](https://en.cppreference.com/w/cpp/string/byte/bzero) | memchr     | [memchr - cppreference.com](https://en.cppreference.com/w/c/string/byte/memchr) |
| memcpy     | [memcpy - cppreference.com](https://en.cppreference.com/w/c/string/byte/memcpy) | memcmp     | [memcmp - cppreference.com](https://en.cppreference.com/w/c/string/byte/memcmp) |
| memmove    | [memmove - cppreference.com](https://en.cppreference.com/w/c/string/byte/memmove) | strnstr    | [strnstr - cppreference.com](https://en.cppreference.com/w/c/string/byte/strnstr) |
| atoi       | [atoi - cppreference.com](https://en.cppreference.com/w/c/string/byte/atoi) | calloc     | [calloc - cppreference.com](https://en.cppreference.com/w/c/memory/calloc) |
| strdup     | [strdup - cppreference.com](https://en.cppreference.com/w/c/memory/strdup) |

### Resources for working on the second part

[Learn about file descriptors in c - Geeksforgeeks](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)

[Learn about Function Pointer in c - Geeksforgeeks](https://www.geeksforgeeks.org/function-pointer-in-c/)

### Rsources for working on the bonus part

[Learn about structs in c - W3schools](https://www.w3schools.com/c/c_structs.php)

[Learn about structs in c - Geeksforgeeks](https://www.geeksforgeeks.org/structures-c/)

[Learn about linked lists in c - Geeksforgeeks](https://www.geeksforgeeks.org/what-is-linked-list/)

## Grade

This is my grade for this project:

(src/my_grade.png)

## Contributing

Contributions to this project are highly encouraged! If you find areas for improvement, encounter any inaccuracies, or have suggestions for enhancements, please feel free to contribute. Your input is valuable and helps make this project better for everyone.

### How to Contribute

1. **Fork the Repository:**
   - Fork the repository to your GitHub account.

2. **Create a Branch:**
   - Create a new branch for your contributions.
     ```bash
     git checkout -b feature/your-feature
     ```

3. **Make Changes:**
   - Implement your changes or additions.

4. **Commit Changes:**
   - Commit your changes with clear and descriptive commit messages.
     ```bash
     git commit -am 'Add a brief description of your changes'
     ```

5. **Push Changes:**
   - Push your changes to your forked repository.
     ```bash
     git push origin feature/your-feature
     ```

6. **Create a Pull Request:**
   - Open a pull request on the main repository.
   - Provide a detailed description of your changes and why they should be merged.
   - Mention any relevant issues.

### What to Contribute

Contributions can include, but are not limited to:

- Bug fixes
- Code improvements
- Documentation enhancements
- Suggestions for new features or improvements

### Code Guidelines

Please adhere to the project's coding standards and guidelines. Ensure that your code is well-documented and follows best practices.

Thank you for contributing and helping make this project even better!
