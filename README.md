# C Foundations

Focused C programs and exercises covering compilation, memory, debugging, data structures, and systems-level programming.

## Current Topics

- C source files and executables
- Compilation with Clang
- Compiler warnings
- Primitive numeric types
- Variables and constants
- Functions and return values
- Formatted terminal output
- Basic Git workflow

## Programs

### Order Summary

A terminal program that calculates and displays restaurant order line totals and a subtotal. Multiple order lines, item quantities, line toals, total item count, subtotal calculation.

## Build

```bash
mkdir -p build

clang -std=c17 -Wall -Wextra -Wpedantic \
    src/order_summary.c \
    -o build/order_summary
