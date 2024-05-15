# Merge Sort in C++

This repository contains an implementation of the merge sort algorithm in C++. Merge sort is a popular sorting algorithm known for its efficiency and stability.

## Overview

Merge sort is a divide-and-conquer algorithm that divides the input array into two halves, sorts each half recursively, and then merges the sorted halves to produce a single sorted array. It guarantees a worst-case time complexity of O(n log n), making it suitable for sorting large datasets.

## Files

- `merge_sort.cpp`: Contains the implementation of the merge sort algorithm with separate `merge` and `merge_sort` functions.
- `README.md`: This file provides an overview of the repository.

## Usage

To use the merge sort algorithm in your project:

1. Clone this repository to your local machine.
2. Compile the `merge_sort.cpp` file using a C++ compiler.
3. Include the necessary header files (`iostream` and `vector`).
4. Use the `merge_sort` function to sort your array/vector.

```cpp
#include <iostream>
#include <vector>

using namespace std;

// Function prototypes for merge and merge_sort

int main() {
    // Your code to create an array/vector and call merge_sort
    return 0;
}
