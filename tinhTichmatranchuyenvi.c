#include <stdio.h>

int main() {
    int t;  
    scanf("%d", &t);
    for (int k = 1; k <= t; k++) {
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n][m];  
        //doc ma tran a
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        
        //tinh ma tran tich a * a^T va ma tran ket qua co kich thuoc n x m
        int result[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                result[i][j] = 0;
                for (int k = 0; k < m; k++) {
                    result[i][j] += a[i][k] * a[j][k];
                }
            }
        }
        
        //hienthiketqua
        printf("Test %d:\n", k);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j > 0) printf(" ");
                printf("%d", result[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
