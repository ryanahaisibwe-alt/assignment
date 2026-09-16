Task: standard deviation of columns;

Task requirements.

To write a function called std_columns(). 
 This function needs to look at a table with rows and columns) and calculate the standard deviation for each column.
 It needs to find out how spread out the numbers in each column are.

Implementation Strategy

Since I am still getting used to 2D arrays in C++, I decided to use a  std::vector<std::vector<double>> because vectors change size automatically and are easier to handle than raw arrays.
I broke the problem down into simple steps that I can understand, doing one thing at a time:
Find out how big the grid is by checking the size of the vectors.
Loop through the columns one by one.
Step1: Go down the column to add up all the numbers and calculate the average (mean).
Step2:Go down the same column again to see how far each number is from that average, square those differences, and add them up.
Final Math: Divide that total by the number of rows (minus 1) and use std::sqrt() to get the final answer.

Key Decisions or Approaches

 Usually, in class, we write loops that go through rows first. But for this task, I had to flip it. 
My outer loop locks onto a column j, and my inner loop changes the row i so I can move straight down vertically fixing the "Divide by Zero" Bug.
While writing this, I realized that if a column only has 1 number, subtracting 1 from the row count equals 0. Dividing by 0 makes the program crash. 
I added a simple if statement to check for this and just set the answer to 0.0 if there's only one row.
I used double instead of int because averages and standard deviations almost always have decimals, and I didn't want C++ to accidentally round my numbers down

Testing the code;

I tested my code inside a basic int main() function using a few simple print statements (std::cout) to check the math:
Test 1: I put in a small 3x2 grid with easy numbers like 1, 2, 3 to see if I could easily double-check the math on a piece of paper.
Test 2 : I tried a column where all the numbers were identical (like 5, 5, 5). Since the numbers don't change at all, the standard deviation should be 0. The code successfully printed 0.

