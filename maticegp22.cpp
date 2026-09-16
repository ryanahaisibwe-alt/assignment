#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

void sum_columns(const vector<vector<double>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return;
    size_t rows = matrix.size();
    size_t cols = matrix[0].size();
    
    cout << "Column Sums: ";
    for (size_t j = 0; j < cols; ++j) {
        double sum = 0;
        for (size_t i = 0; i < rows; ++i) {
            sum += matrix[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void mean_columns(const vector<vector<double>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return;
    size_t rows = matrix.size();
    size_t cols = matrix[0].size();
    
    cout << "Column Means: ";
    for (size_t j = 0; j < cols; ++j) {
        double sum = 0;
        for (size_t i = 0; i < rows; ++i) {
            sum += matrix[i][j];
        }
        cout << (sum / rows) << " ";
    }
    cout << endl;
}

void min_columns(const vector<vector<double>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return;
    size_t rows = matrix.size();
    size_t cols = matrix[0].size();
    
    cout << "Column Minimums: ";
    for (size_t j = 0; j < cols; ++j) {
        double min_val = numeric_limits<double>::max();
        for (size_t i = 0; i < rows; ++i) {
            if (matrix[i][j] < min_val) {
                min_val = matrix[i][j];
            }
        }
        cout << min_val << " ";
    }
    cout << endl;
}

void max_columns(const vector<vector<double>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return;
    size_t rows = matrix.size();
    size_t cols = matrix[0].size();
    
    cout << "Column Maximums: ";
    for (size_t j = 0; j < cols; ++j) {
        double max_val = numeric_limits<double>::lowest();
        for (size_t i = 0; i < rows; ++i) {
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
            }
        }
        cout << max_val << " ";
    }
    cout << endl;
}

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
