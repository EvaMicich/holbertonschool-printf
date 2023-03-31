# Holberton School - Printf

Welcome to the **Holberton School - Printf** GitHub repository. This project has been created by Bryan Field and Eva Micich as part of the curriculum at [Holberton School](https://www.holbertonschool.com/) and is designed to replicate a simple example of the `printf` function in C.

## Table of Contents

- [Overview](#overview)
- [Installation](#installation)
- [Usage](#usage)
- [Supported Formats](#supported-formats)
- [Contributing](#contributing)
- [Authors](#authors)

## Overview

This project aims to recreate a simplified version of the well-known `printf` function in C. The new function, called `_printf`, provides support for basic formatting of strings, integers, and characters. The main goal of this project is to help students understand the inner workings of the `printf` function and improve their C programming skills.

## Installation

1. Clone this repository:

```bash
git clone https://github.com/EvaMicich/holbertonschool-printf.git
```

2. Change into the holbertonschool-printf directory:

```bash
cd holbertonschool-printf
```

3. Compile the source files using the supplied makefile:
```bash
make
```

## Usage
To use the _printf function, include the "main.h" header file in your C program:

```c
#include "main.h"
```
Then, you can call the _printf function just as you would use the standard printf function:
 
```c
int main()
{
    _printf("Hello, %s!\n", "Holberton");
    return (0);
}
```
## Supported Formats
The _printf function currently supports the following format specifiers:
-%c: Print a character
-%s: Print a string
-%d: Print an integer
-%i: Print an integer
-%%: Print a percent sign
## Contributing
If you would like to contribute to this project, please feel free to submit a pull request.

## Authors
Bryan Field and Eva Micich
## Flow Diagram of _printf
![image](https://user-images.githubusercontent.com/124496441/229105856-bbe39efb-0be3-4922-b22f-72f0606f7b4f.png)


