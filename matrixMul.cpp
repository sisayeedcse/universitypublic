#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

// Function to print the optimal parenthesization
void printOptimalParenthesis(int i, int j, int n, vector<vector<int>>& s) {
    if (i == j) {
        cout << "A" << i;
    } else {
        cout << "(";
        printOptimalParenthesis(i, s[i][j], n, s);
        printOptimalParenthesis(s[i][j] + 1, j, n, s);
        cout << ")";
    }
}

// Function to find the minimum number of multiplications needed
void matrixChainOrder(vector<int>& p, int n) {
    vector<vector<int>> m(n, vector<int>(n, 0));  // table to store minimum multiplications
    vector<vector<int>> s(n, vector<int>(n, 0));  // table to store optimal split points

    // cost is zero when multiplying one matrix
    for (int i = 1; i < n; i++)
        m[i][i] = 0;

    // l is the chain length
    for (int l = 2; l < n; l++) {
        for (int i = 1; i < n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }

    // The minimum cost is m[1][n-1]
    cout << "Minimum number of multiplications is " << m[1][n - 1] << endl;

    // Print the optimal parenthesization
    cout << "Optimal parenthesization is: ";
    printOptimalParenthesis(1, n - 1, n, s);
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};  // Example dimensions
    int n = arr.size();

    matrixChainOrder(arr, n);

    return 0;
}
