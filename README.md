Matrix Column Operations in C++

Task Requirements

The task was to implement a C++ program that calculates and displays the sum of each column in a matrix. The program should also handle an empty matrix safely.

Implementation Strategy

The program uses a two-dimensional vector, `vector<vector<double>>`, to store the matrix. A function called `sum_columns()` uses nested loops to go through each column and add its elements together.

The outer loop selects a column, while the inner loop adds the elements in that column. The matrix is passed by constant reference to avoid unnecessary copying and prevent modification of the original matrix.

Key Decisions and Approaches

- Used `vector<vector<double>>` to represent the matrix.
- Used nested loops to access and sum the matrix elements.
- Used `double` to allow decimal values.
- Added an empty-matrix check to prevent invalid access.
- The time complexity is **O(m × n)**, where `m` is the number of rows and `n` is the number of columns.

Testing

The program was tested using a matrix containing positive and decimal values. The calculated sums were compared with manually calculated results. An empty matrix was also considered to ensure the program handles it safely.

 Working Example

Input Matrix

```text
1.0   2.0   3.0
4.0   5.0   6.0
7.0   8.0   9.0

Column Sums: 12 15 18
