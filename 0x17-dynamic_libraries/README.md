# C - Dynamic libraries
![school logo](https://pbs.twimg.com/profile_images/644908719050850305/LbLzZ2vf_200x200.jpg)
## Description
The project is part of Holberton school curriculum. It will help understand:

* What is a dymanic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage `nm`, `ldd`, `ldconfig`
## Compilation
`gcc -c -Wall -Werror -fPIC *.c`
`gcc -shared -o libholberton.so shared.o`
`gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lholberton -o len`
## Tasks
0) Create the dynamic library libholberton.so containing all the functions listed below:

`int _putchar(char c);`
`int _islower(int c);`
`int _isalpha(int c);`
`int _abs(int n);`
`int _isupper(int c);`
`int _isdigit(int c);`
`int _strlen(char *s);`
`void _puts(char *s);`
`char *_strcpy(char *dest, char *src);`
`int _atoi(char *s);`
`char *_strcat(char *dest, char *src);`
`char *_strncat(char *dest, char *src, int n);`
`char *_strncpy(char *dest, char *src, int n);`
`int _strcmp(char *s1, char *s2);`
`char *_memset(char *s, char b, unsigned int n);`
`char *_memcpy(char *dest, char *src, unsigned int n);`
`char *_strchr(char *s, char c);`
`unsigned int _strspn(char *s, char *accept);`
`char *_strpbrk(char *s, char *accept);`
`char *_strstr(char *haystack, char *needle);`

### __Clone repository:__
https://github.com/KatyaKalache/holbertonschool-higher_level_programming.git
## List of functions and system calls used
| functions        | Functionality                    |
| ---------------- | -------------------------------- |
| `_strlen`        | custom functio, used to find the |
|                  | length of the given string       |
## Author
Ekaterina Kalache: [github account](https://github.com/KatyaKalache), [twitter](https://twitter.com/KatyaKalache)

## License
Public, no copyright protection