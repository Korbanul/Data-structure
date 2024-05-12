#include <iostream>
#include <limits.h>
using namespace std;

// Function to find the minimum number of scalar multiplications needed to multiply a chain of matrices
int matrixChainOrder(int p[], int n) {


  /* Create a 2D array to store the minimum number of scalar multiplications required
   to multiply matrices from i to j */

  int m[n][n];

  // Initialize the diagonal elements of the m array with 0, as multiplying a single matrix
  // requires no scalar multiplications
  for (int i = 1; i < n; i++) {
    m[i][i] = 0;
  }

  // Fill the remaining elements of the m array using dynamic programming
  for (int l = 2; l < n; l++) { // Consider chain lengths from 2 to n-1
    for (int i = 1; i < n - l + 1; i++) { // Starting indices for subchains of length l
      int j = i + l - 1; // Ending indices for subchains of length l

      m[i][j] = INT_MAX; // Initialize the minimum cost for this subchain with a very large value

      for (int k = i; k < j; k++) { // Consider all possible partitions of the subchain
        int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]; // Cost of partitioning the subchain at k
        if (q < m[i][j]) { // Update the minimum cost if the current partition yields a lower cost
          m[i][j] = q;
        }
      }
    }
  }

  // Return the minimum number of scalar multiplications for the entire chain of matrices
  return m[1][n - 1];
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]); 

  cout << "Minimum number of multiplications is : " << matrixChainOrder(arr, n) << endl;

  return 0;
}
