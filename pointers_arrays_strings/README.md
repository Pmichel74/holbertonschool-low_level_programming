# C - Pointers, arrays and strings

In this project, I learned about what and how to use pointers and arrays and
the differences between the two as well as how to use and manipulate strings in C.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](main.h): Header file containing prototypes for all functions written in the project.

| File                | Prototype                                              |
| ------------------- | ------------------------------------------------------ |
| `0-memset.c`        | `char *_memset(char *s, char b, unsigned int n);`      |
| `0-strcat.c`        | `char *_strcat(char *dest, char *src);`                |
| `0-reset_to_98.c`   | `void reset_to_98(int *n);`                            |
| `1-memcpy.c`        | `char *_memcpy(char *dest, char *src, unsigned int n);`|
| `1-strncat.c`       | `char *_strncat(char *dest, char *src,int n);`         |
| `1-swap.c`          | `void swap_int(int *a, int *b);`                       |
| `2-strchr.c`        | `char *_strchr(char *s, char c);`                      |
| `2-strncpy.c`       | `char *_strncpy(char *dest, char *src, int n)`         |
| `2-strlen.c`        | `int _strlen(char *s);`                                |
| `3-strspn.c`        | `unsigned int _strspn(char *s, char *accept);`         |
| `3-strcmp.c`        | `int _strcmp(char *s1, char *s2);`                     |
| `3-puts.c`          | `void _puts(char *str);`                               |
| `4-strpbrk.c`       | `char *_strpbrk(char *s, char *accept);`               |
| `4-rev_array.c`     | `void reverse_array(int *a, int n);`                   |
| `4-print_rev.c`     | `void print_rev(char *s);`                             |
| `5-strstr.c`        | `char *_strstr(char *haystack, char *needle);`         |
| `5-string_toupper.c`| `char *string_toupper(char *);`                        |
| `5-rev_string.c`    | `void rev_string(char *s);`                            |
| `6-cap_string.c`    | `char *cap_string(char *);`                            |
| `6-puts2.c`         | `void puts2(char *str);`                               |
| `7-print_cheboard.c`| `void print_chessboard(char (*a)[8]);`                 |
| `7-leet.c`          | `char *leet(char *);`                                  |
| `7-puts_half.c`     | `void puts_half(char *str);`                           |
| `8-print_diagsums.c`| `void print_diagsums(int *a, int size);`               |
| `8-print_array.c`   | `void print_array(int *a, int n);`                     |
| `9-strcpy.c`        | `char *_strcpy(char *dest, char *src);`                |
| `100-atoi.c`        | `int _atoi(char *s);`                                  |

## Tasks :page_with_curl:

* **0. memset**
  * [0-memset.c](./0-memset.c): C function that fills the first `n` bytes of
  memory area pointed to by `s` with the constant byte `b`.
    * Returns a pointer to the filled memory area `s`.

 * **0. strcat**
   * [0-strcat.c](./0-strcat.c): C function that concatenates two strings.
    * Adds a terminating null byte at end.

* **0. 98 Battery st.**
  * [0-reset_to_98.c](./0-reset_to_98.c): C function that takes a pointer to an
  `int` as a parameter and updates the value it points to to `98`.

* **1. memcpy**
  * [1-memcpy.c](./1-memcpy.c): C function that copies `n` bytes from memory
  area `src` to memory area `dest`.
    * Returns a pointer to the memory area `dest`.

* **1. strncat**
  * [1-strncat.c](./1-strncat.c): C function that concatenates two strings using at most
  an inputted number of bytes.
    * Adds a terminating null byte at end, unless source string is longer than maximum byte
    number.

* **1. Don't swap horses in crossing a stream**
  * [1-swap.c](./1-swap.c): C function that swaps the value of two integers.

* **2. strchr**
  * [2-strchr.c](./2-strchr.c): C function that returns a pointer to the first occurence of
  the character `c` in the string `s`.
    * If the character is not found, the function returns `NULL`.

* **2. strncpy**
  * [2-strncpy.c](./2-strncpy.c): C function that copies a string, including the
  terminating null byte, using at most an inputted number of bytes.
    * If the length of the source string is less than the maximum byte number,
    the remainder of the destination string is filled with null bytes.
    * Works identically to the standard library function `strncpy`.

* **2. This report, by its very length, defends itself against the risk of being read**
  * [2-strlen.c](./2-strlen.c): C function that returns the length of a string.

* **3. strcmp**
  * [3-strcmp.c](./3-strcmp.c): C function that compares two strings.
    * Returns the difference in bytes at point of difference.
    * Works identically to the standard library function `strcmp`.

* **3. strspn**
  * [3-strspn.c](./3-strspn.c): C function that returns the number of bytes in the intitial
  segment of memory area `s` which consist only of bytes from a substring `accept`.

* **3. I do not fear computers. I fear the lack of them**
  * [3-puts.c](./3-puts.c): C function that prints a string, followed by a new line,
  to `stdout`.

* **4. strpbrk**
  * [4-strpbrk.c](./4-strpbrk.c): C function that locates the first occurence in a
  string `s` of any of the bytes in a string `accept`.
    * Returns a pointer to the byte in `s` that matches one of the bytes in `accept`.
    * If no matching byte is found, the function returns `NULL`.

* **4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**
  * [4-rev_array.c](./4-rev_array.c): C function that reverses the content of an
  array of integers.

* **4. I can only go one way. I've not got a reverse gear**
  * [4-print_rev.c](./4-print_rev.c): C function that prints a string, in reverse,
  followed by a new line.

* **5. strstr**
  * [5-strstr.c](./5-strstr.c): C function that finds the first occurence of a
  substring `needle` in a string `haystack`.
    * The terminating null bytes (`\0`) are not compared.
    * Returns a pointer to the beginning of the located substring.
    * If the substring is not found, the function returns `NULL`.

* **5. Always look up**
  * [5-string_toupper.c](./5-string_toupper.c): C function that changes all lowercase
  letters of a string to uppercase.

* **5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes**
  * [5-rev_string.c](./5-rev_string.c): C function that reverses a string.

* **6. Chess is mental torture**
  * [7-print_chessboard.c](./7-print_chessboard.c): C function that prints the chessboard.

* **6. Expect the best. Prepare for the worst. Capitalize on what comes**
  * [6-cap_string.c](./6-cap_string.c): C function that capitalizes all words of a string.

* **6. Half the lies they tell about me aren't true**
  * [6-puts2.c](./6-puts2.c): C function that prints every other character of a string,
  followed by a new line.

* **7. Mozart composed his music not for the elite, but for everybody**
  * [7-leet.c](./7-leet.c): C function that encodes a string into 1337, without
  `switch` or ternary operations and using only one `if` and two loops.
    * Letters `a` and `A` are replaced by `4`.
    * Leters `e` and `E` are replaced by `3`.
    * Letters `o` and `O` are replaced by `0`.
    * Letters `t` and `T` are replaced by `7`.
    * Letters `l` and `L` are replaced by `1`.

* **7. The line of life is a ragged diagonal between duty and desire**
  * [8-print_diagsums.c](./8-print_diagsums.c): C function that prints the sum of the two
  diagonals of a square matrix of integers.

* **7. Winning is only half of it. Having fun is the other half**
  * [7-puts_half.c](./7-puts_half.c): C function that prints the second half of a string,
  followed by a new line.

* **8. Arrays are not pointers**
  * [8-print_array.c](./8-print_array.c): C function that prints an input `n` elements
  of an array of integers, followed by a new line.
    * Numbers are separated by a comma followed by a space.
    * Numbers are displayed in the same order as they are stored in the array.

* **9. strcpy**
  * [9-strcpy.c](./9-strcpy.c): C function that copies the string pointed to by
  `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
    * Returns the pointer to `dest`.

* **10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers**
  * [100-atoi.c](./100-atoi.c): C function that converts a string to an integer
  without using `long`, new variable arrays, or hard-coded special values, as follows:
    * The number in the string can be preceded by an infinite number of characters.
    * Takes into account all `+` and `-` signs before the number.
    * If there are no numbers in the string, the function returns `0`.

