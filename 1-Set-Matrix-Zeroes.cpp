#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

// O(m+n) space solution
void setZeros(vector<vector<int>>& matrix) {
    vector<bool> setRowZero(matrix.size(), false);
    vector<bool> setColumnZero(matrix[0].size(), false);
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 0) {
                setRowZero[i] = true;
                setColumnZero[j] = true;
            }
        }
    }
    for (int i = 0; i < setRowZero.size(); i++) {
        if (setRowZero[i]) {
            for (int j = 0; j < matrix[i].size(); j++) {
                matrix[i][j] = 0;
            }
        }
    }
    for (int j = 0; j < setColumnZero.size(); j++) {
        if (setColumnZero[j]) {
            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

// O(1) space solution
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int column = matrix[0].size();

        bool firstZero = false;

        for (int i=0; i<row; i++) {
        
            if (matrix[i][0] == 0) {
                firstZero = true;
            }

            for (int j=1; j < column; j++) {
                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }

        }

        for (int i=1; i < row; i++) {
            for (int j=1; j<column; j++) {
                if (matrix[i][0] == 0 or matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if (matrix[0][0] == 0) {
            for (int i=0; i < column; i++) {
                matrix[0][i] = 0;
            }
        }

        if (firstZero) {
            for (int i=0; i < row; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};