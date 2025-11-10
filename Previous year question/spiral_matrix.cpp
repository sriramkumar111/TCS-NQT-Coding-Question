#include <bits/stdc++.h>
using namespace std;

void printSpiralMatrix(vector<vector<int>>& matrix, int N, int M) {
    int top = 0, bottom = N - 1, left = 0, right = M - 1;

    while (top <= bottom && left <= right) {
        // Move right
        for (int i = left; i <= right; i++) cout << matrix[top][i] << " ";
        top++;

        // Move down
        for (int i = top; i <= bottom; i++) cout << matrix[i][right] << " ";
        right--;

        // Move left (if still within bounds)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) cout << matrix[bottom][i] << " ";
            bottom--;
        }

        // Move up (if still within bounds)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) cout << matrix[i][left] << " ";
            left++;
        }
    }
    cout << endl;
}

int main() {
    int N, M;
    cout << "Enter rows (N) and columns (M): ";
    cin >> N >> M;
    
    vector<vector<int>> matrix(N, vector<int>(M));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix[i][j];

    cout << "Spiral order: ";
    printSpiralMatrix(matrix, N, M);

    return 0;
}

