I MWIDHU HAMZA, used the max_columns() function to find the largest value in each column of the matrix.
It uses two for loops: the first moves through each column, while the second checks all the values in that column.
I set max_val to a very small value using numeric_limits<double>::lowest(). Each value is then compared with max_val; if it is larger, it becomes the new maximum. After checking the whole column, the maximum value is printed.
Output: The function displays the largest value from each column, for example:
Column Maximums: 7 8 9
This means the maximum values in columns 1, 2, and 3 are 7, 8, and 9 respectively.
