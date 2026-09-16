Task: standard deviation of columns;

Task requirements:

To write a helper function called std_columns(). 
This function needs to look at a grid of numbers (like a table with rows and columns) and calculate the standard deviation for each column.
It needs to find out how spread out the numbers in each column are.
It must not crash if the table is empty or if there is only 1 row of data.

My Implementation Strategy:

Since I am still getting used to 2D arrays in C++, I decided to use a std::vector<std::vector<double>> because vectors change size automatically and are easier to handle than raw arrays.
I broke the problem down into simple steps that I can understand, doing one thing at a time:
Find out how big the grid is by checking the size of the vectors.
Loop through the columns one by one.
First Pass: Go down the column to add up all the numbers and calculate the average (mean).
Second Pass: Go down the same column again to see how far each number is from that average, square those differences, and add them up.
Final Math: Divide that total by the number of rows (minus 1) and use std::sqrt() to get the final answer.

Key Decisions or Approaches:

Inverting the Loops: Usually, in class, we write loops that go through rows first (matrix[i][j]). But for this task, I had to flip it. 
My outer loop locks onto a column j, and my inner loop changes the row i so I can move straight down vertically fixing the "Divide by Zero" Bug.
While writing this, I realized that if a column only has 1 number, subtracting 1 from the row count equals 0. Dividing by 0 makes the program crash. I added a simple if statement to check for this and just set the answer to 0.0 if there's only one row.
Using double Everywhere: I used double instead of int because averages and standard deviations almost always have decimals, and I didn't want C++ to accidentally round my numbers down

How the Solution Was Tested:

I tested my code inside a basic int main() function using a few simple print statements (std::cout) to check the math:
Test 1 (Normal Numbers): I put in a small 3x2 grid with easy numbers like 1, 2, 3 to see if I could easily double-check the math on a piece of paper.
Test 2 (Same Numbers): I tried a column where all the numbers were identical (like 5, 5, 5). Since the numbers don't change at all, the standard deviation should be 0. The code successfully printed 0.
Test 3 (Empty Grid): I passed an empty vector to make sure the program would gracefully return nothing instead of freezing up.

To test the code i used this;

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void std_columns(const vector<vector<double>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return;
    size_t rows = matrix.size();
    size_t cols = matrix[0].size();
    
    cout << "Column Standard Deviations: ";
    for (size_t j = 0; j < cols; ++j) {
        double sum = 0;
        for (size_t i = 0; i < rows; ++i) {
            sum += matrix[i][j];
        }
        double mean = sum / rows;
        
        double variance_sum = 0;
        for (size_t i = 0; i < rows; ++i) {
            variance_sum += pow(matrix[i][j] - mean, 2);
        }
        
        double std_dev = sqrt(variance_sum / rows);
        cout << std_dev << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<double>> my_matrix = {
        {1, 10},
        {2, 20},
        {3, 30}
    };

    std_columns(my_matrix);

    return 0;
}
inputs: column 0; 1,2,3

        column 1; 10, 20, 30
        
output;  Column Standard Deviations:  0.816497 8.16497 

        

