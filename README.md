# Printf

![42-Badge](https://img.shields.io/badge/%C3%89cole-42SP-blue)![C-Badge](https://img.shields.io/badge/Language-C-lightgrey)[![42Unlicense](https://img.shields.io/badge/License-42Unlicense-yellowgreen)](https://github.com/gcamerli/42unlicense)

## Description

This project is pretty straight forward. A recode of printf.


## Goals

This project will introduce the use of variadic arguments.

## Mandatory

It will manage the following conversions:

• %c print a single character.

• %s print a string of characters.

• %p The void * pointer argument is printed in hexadecimal.

• %d print a decimal (base 10) number.

• %i print an integer in base 10.

• %u print an unsigned decimal (base 10) number.

• %x print a number in hexadecimal (base 16), with lowercase.

• %X print a number in hexadecimal (base 16), with uppercase.

• %% print a percent sign.


## Bonus

• Manage any combination of the following flags: **’-0.’** and minimum field width
with all conversions

• Manage all the following flags: **’# +’** (yes, one of them is a space)


## Usage

To compile the library, run:

```
$ make
```

Include the header:
```
#include "src/ft_printf.h"
```

Add the flag when compiling the code:
```
-L./printf_dir -lftprintf
```

## License

This work is published under the terms of [42 Unlicense](https://github.com/gcamerli/42unlicense)
