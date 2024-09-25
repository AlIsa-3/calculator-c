# Calculator Written in C 

This calculator is written in C using only the stdio.h header.

## Features

As of this version, current features are as follows:

- Addition
- Subtraction
- Multiplication
- Division
- Exponentiation


## Usage Examples

The compiled program can be run from the cwd as follows:

```
$ ./calculator 
Enter your Expression: 
Operations are (+,-,*,/,^ (exponentiation)) 
$ 4+4
4 + 4 = 8
```



## Requirements

As only C source code is supplied, a compiler is necessary.

## Planned Changes:
- Ability to reuse the output in a new computation


## Changelog
- Input can now be done on one line
- Combined inputs into a struct
- Fixed error in calculation function causing calculations to not work as intended
- Added ability for values to be non-integers
- Implemented Exponentiation as repeated multiplication
- Added a function which controls the output of results
- Added a function which controls the computation
- Added Multiplication and Division functions
- calculator.c now uses 'addition' and 'subtraction' functions as opposed to one-time use code
- Created repo



