#include <stdio.h>
#define N 3
void initMatrix() {
    int i, j;
    int matrix[N][N] = {0, 0};
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Enter %d th element of matrix: ", i + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int a[][]){
    int i, j;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
   }
}
int main() {
    int i, j;
    int matrix[N][N];
    initMatrix(matrix[][]);
    printMatrix(matrix[][]);
    return 0;
}