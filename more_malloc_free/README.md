# C - More malloc, free

In this project, I learned about using `exit`, `calloc`, and `realloc` in C.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all functions written in
the project.

| File                 | Prototype                                                                  |
| -------------------- | -------------------------------------------------------------------------- |
| `0-malloc_checked.c` | `void *malloc_checked(unsigned int b);`                                    |
| `1-string_nconcat.c` | `char *string_nconcat(char *s1, char *s2, unsigned int n);`                |
| `2-calloc.c`         | `char *string_nconcat(char *s1, char *s2, unsigned int n);`                |
| `3-array_range.c`    | `int *array_range(int min, int max);`                                      |
| `100-realloc.c`      | `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);` |

## Tasks :page_with_curl:

* **0. Trust no one**
  * [0-malloc_checked.c](./0-malloc_checked.c): C function that returns a
  pointer to a newly-allocated space in memory using `malloc`.
    * If `malloc` fails, the function causes normal process termination with a status value
    of `98`.

* **1. string_nconcat**
  * [1-string_nconcat.c](./1-string_nconcat.c): C function that returns a pointer to a
  newly-allocated space in memory containing the concatenation of two strings.
    * The returned pointer contains `s1` followed by the first `n` bytes
    of `s2`, null-terminated.
    * If `n` is greater than or equal to the length of `s2`, the entire string `s2` is used.
    * If `NULL` is passed, the function treats the parameter as an empty string.
    * If the function fails - returns `NULL`.

* **2. _calloc**
  * [2-calloc.c](./2-calloc.c): C function that returns a pointer to a newly-allocated space
  in memory for an array, using `malloc`.
    * Allocates memory for an array of `nmemb` elements of `size` bytes each.
    * The memory is set to zero.
    * If `nmemb` = 0, `size` = `0`, or the function fail - returns `NULL`.

* **3. array_range**
  * [3-array_range.c](./3-array_range.c): C function that returns a pointer to a
  newly-allocated space in memory containing an array of integers.
    * The array contains all the values from parameters `min` to `max`, inclusive,
    ordered from `min` to `max`.
    * If `min > max` or the function fails - returns `NULL`.
