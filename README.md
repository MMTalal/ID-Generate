# Character and Date Formatter

## Overview

This C++ program prompts the user to enter a letter, a month, and a year. It processes the year to extract its last two digits and formats the output in a specific way.

## Features

- Accepts a single character input from the user.
- Accepts a month input between 1 and 12.
- Accepts a year input (e.g., 2024).
- Outputs the formatted string in the format: `letter\month\second_last_digit_last_digit`.

## Requirements

- C++ compiler (e.g., g++, clang++).
- Standard C++ library.

## How to Compile and Run

1. **Compile the program**:
   ```bash
   g++ -o formatter formatter.cpp
   ```

2. **Run the executable**:
   ```bash
   ./formatter
   ```

## Usage

1. When prompted, enter a letter.
2. Enter a month as a number from 1 to 12.
3. Enter a year (e.g., 2024).
4. The program will display the result in the format: `letter\month\second_last_digit+last_digit`.

## Example

```bash
    Enter a letter: A
    Enter a month (1-12): 12
    Enter a year (e.g., 2024): 2024
    Output: A\12\24
```
## License

This project is licensed under the MIT License.

