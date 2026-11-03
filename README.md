# C++ Practical Assignment 11
## Standard Template Library (STL)

### Problem statement
Demonstrate the C++ Standard Template Library using a vector container and the `sort()` and `reverse()` algorithms to store, sort, and reverse integer elements entered by the user.

### Objectives
- Understand the Standard Template Library (STL).
- Use a vector container to store integers.
- Insert elements with `push_back()`.
- Sort elements with `sort()`.
- Reverse elements with `reverse()`.
- Understand iterators.

### Files
- `main.cpp` — complete C++ source code.
- `README.md` — assignment documentation.
- `output_screenshot.png` — program output screenshot.
- `sample_output.txt` — sample input and output.

### Requirements
A C++11-compatible compiler such as g++. No external libraries are required.

### Compile and run
```bash
g++ -std=c++11 main.cpp -o assignment11
./assignment11
```
Windows (MinGW):
```bash
g++ -std=c++11 main.cpp -o assignment11.exe
assignment11.exe
```

### STL components used
- `vector<int>`: dynamic sequence container for integer elements.
- `push_back()`: adds an element to the end of the vector.
- `sort(begin(), end())`: sorts elements in ascending order.
- `reverse(begin(), end())`: reverses the specified range.
- `begin()` and `end()`: provide iterators for the algorithms and traversal.

### Sample test case
Input:
```text
5
40 10 30 20 50
```
Expected output:
```text
Original elements: 40 10 30 20 50
Sorted elements: 10 20 30 40 50
Reversed elements: 50 40 30 20 10
```
