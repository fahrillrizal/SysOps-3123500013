#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {  // Child process
        printf("Child process is running\n");
    } else {  // Parent process
        printf("Parent process is running\n");
    }

    return 0;
}
