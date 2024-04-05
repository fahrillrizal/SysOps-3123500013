#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define N 4

void perkalian(int hasil[N][N], int a[N][N], int b[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < N; k++) {
                hasil[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void cetak(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int b[N][N] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };

    int hasil[N][N];

    // Fork child process
    pid_t pid = fork();

    if (pid == -1) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) { // Child process
        perkalian(hasil, a, b);
        printf("Child Process hasil:\n");
        cetak(hasil);
    } else { // Parent process
        wait(NULL);
        printf("Parent Process hasil:\n");
        perkalian(hasil, a, b);
        cetak(hasil);
    }

    return 0;
}
