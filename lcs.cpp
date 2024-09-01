#include <iostream>
#include <vector>
#include <string>
using namespace std;

void LCS(string X,string Y) {
    int m = X.length();
    int n = Y.length();

    vector<vector<int>> c(m + 1, vector<int>(n + 1, 0));
    vector<vector<char>> b(m + 1, vector<char>(n + 1, '\0'));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (X[i - 1] == Y[j - 1]) {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = '\\';
            }
            else if (c[i - 1][j] >= c[i][j - 1]) {
                c[i][j] = c[i - 1][j];
                b[i][j] = '|';
            }
            else {
                c[i][j] = c[i][j - 1];
                b[i][j] = '-';
            }
        }
    }

    cout << "Length of LCS is " << c[m][n] << endl;

    int index = c[m][n];
    string lcs(index, '\0');

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (b[i][j] == '\\') {
            lcs[index - 1] = X[i - 1];
            i--; j--; index--;
        } else if (b[i][j] == '|') {
            i--;
        } else {
            j--;
        }
    }
    cout << "LCS of " << X << " and " << Y << " is " << lcs << endl;
}

int main() {
    string X = "PROVIDENCE";
    string Y = "PRESIDENT";

    LCS(X, Y);

    return 0;
}
