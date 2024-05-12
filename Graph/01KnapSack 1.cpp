#include <iostream>

using namespace std;

int knapSack(int W, int wt[], int val[], int n) {
   int B[n + 1][W + 1];

   // Build table B in bottom up manner
   for (int i = 0; i <= n; i++) {
      for (int w = 0; w <= W; w++) {
         if (i == 0 || w == 0)
            B[i][w] = 0;
         else if (wt[i] <= w)//1,2
            B[i][w] = max(B[i - 1][w],B[i - 1][w - wt[i]]+val[i]);
         else
            B[i][w] = B[i - 1][w];
      }
   }

   return B[n][W];
}

int main() {
   int val[] = {0,2,3,1,4};
   int wt[] = {0,3,4,6,5};
   int  W = 8;
   int n = (sizeof(val) / sizeof(val[0]))-1;
   cout << knapSack(W, wt, val, n) << endl;
   return 0;
}