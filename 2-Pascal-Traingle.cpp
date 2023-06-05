#include <vector>
#include <iostream>

using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> result;
    if (n == 0) {
        return result;
    }
    result.push_back({1});
    for (int i=1; i<n; i++) {
        vector<long long int> current_row(i+1, 1);
        for (int j=1; j<i; j++) {
            current_row[j] = result[i - 1][j - 1] + result[i - 1][j];
        }
        result.push_back(current_row);
    }
    return result;

}
