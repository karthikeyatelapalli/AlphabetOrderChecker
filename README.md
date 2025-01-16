# Alphabet Order Checker

This C program checks whether a given string contains only alphabetical characters in ascending order. The program handles three scenarios:
1. If the input contains non-alphabetical characters, it returns **"invalid input"**.
2. If the characters are not in ascending order, it returns **"not in order"**.
3. If all the characters are in ascending alphabetical order, it returns **"in order"**.

## Features
- Validates input to ensure it only contains alphabetical characters.
- Handles both uppercase and lowercase letters by converting all letters to lowercase for comparison.
- Reports the input's status (invalid input, not in order, in order).

## Usage
1. Run the program.
2. Enter a sequence of characters.
3. View the result based on the input string.

## How to Compile and Run
1. Save the program as `alphabet_order_checker.c`.
2. Compile the program:
   ```bash
   gcc alphabet_order_checker.c -o alphabet_order_checker
