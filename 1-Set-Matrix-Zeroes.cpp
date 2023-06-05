#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

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