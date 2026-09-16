min_columns Function

Purpose:

Finds the minimum value in each column of a 2D matrix. This is useful in data analysis to find the lowest score, lowest temperature, etc.

Approach:


The function loops column by column, not row by row. 
I first check if the matrix is empty to avoid crash. 
Then for each column, I assume the first big number is minimum. I used numeric limits<double>:max() which means the biggest possible number,
so any real number in the matrix will be smaller.
After that, I compare it with all rows in that column and keep the smallest one.

How It Was Tested:

Normal case Matrix {{1,2,3},{4,5,6},{7,8,9}} gave Expected 1 2 3 and it Passed.

Negative values Matrix {{-5,-1},{-10,2}} gave Expected -10 -1 and it Passed.

Empty matrix case, it handled it without crashing.

Example:
Calling min_columns(m) will output: Column Minimums:1 2 3
