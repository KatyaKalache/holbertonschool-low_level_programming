# C - Hash tables
![alt text](http://i2.wp.com/www.themysticwave.com/wp-content/uploads/2015/09/Apartment-Therapy.jpg)
## Description
This project is part of Holberton school curriculum and at the end of this project we should know:

* What is a hash function

* What makes a good hash function

* What is a hash table, how do they work and how to use them

* What is a collision and what are the main ways of dealing with collisions in the context of a hash table

* What are the advantages and drawbacks of using hash tables

* What are the most common use cases of hash tables

## Compilation
`gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic`
### __Clone repository:__ https://github.com/KatyaKalache/holbertonschool-low_level_programming

directory: `0x19-hash_tables`

|Custom functions  | Functionality                    |
| ---------------- | -------------------------------- |
|   * `_putchar`   | output of chars & strings        |
|   * `_strcmp`    | compares two strings             |
|   * `_putstring` | outputs strings                  |
|   * `_print_env` | print environment                |
|   * `_getline`   | delimited string input           |
|   * `_strncat`   | concatenates two strings         |
|   * `_strlen`    | calculate the length of a string |

## Header file
 `hash_tables.h`
__Contains all function prototypes and function structures used for the program:__
  * `hash_table_create` - creates a hash table
  * `hash_djb2` - implementing the djb2 algorithm
  * `key_index` - gives you the index of a key
  * `hash_table_set` - adds an element to the hash table
  * `hash_table_get` - retrieves a value associated with a key
  * `hash_table_print` - prints a hash table
  * `hash_table_delete` - deletes a hash table
## Authors
Ekaterina Kalache: [github account](https://github.com/KatyaKalache), [twitter](https://twitter.com/KatyaKalache)

## License
Public, no copyright protection