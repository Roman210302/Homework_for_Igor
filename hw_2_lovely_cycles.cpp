#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int n, m, i = 0, j = -1;
   cin >> n >> m;
   int a[n][m], max = n * m;
   
   for (int c = 1, d = 0; c <= max; d++) {
       //right
       while (j < m - 1 - d && c <= max) {
           a[i][++j] = c++;
       }
       //down
       while (i < n - 1 - d && c <= max) {
             a[++i][j] = c++;
       }
       //left
       while (j > d && c <= max) {
           a[i][--j] = c++;
       }
       //up
       while (i > d + 1 && c <= max) {
           a[--i][j] = c++;
       }
   }
    
   for (i = 0; i < n; i++) {
       for (j = 0; j < m; j++) {
           cout << setw(4) << a[i][j];
       } cout << endl;
   }
}
