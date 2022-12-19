#include <iostream>

int main() {
    int n = 5;
    int mat[n][n];
    int m=1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            mat[i][j] = 0;
        }
    }

    for(int a = 0; a<n-2; a++) {
        for (int i = 0+a; i < n-a; i++) {
            mat[a][i] = m;
            m++;
        }
        m--;
        for (int i = 0+a; i < n-a; i++) {
            mat[i][n-1-a] = m;
            m++;
        }
        m--;
        for (int i = n-1-a; i > -1+a; i--) {
            mat[n-1-a][i] = m ;
            m++;
        }
        m--;
        for (int i = n-1-a; i > 0+a; i--) {
            mat[i][a] = m;
            m++;
        }

    }
    std::cout << std::endl;

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            std::cout << mat[i][j] << ' ';
        }
        std::cout << std::endl;
    }



    return 0;
}