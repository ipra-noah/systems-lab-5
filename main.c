C
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h> // Required for pid_t on some systems

int main() {
    pid_t pid = fork(); // Create a new process

    if (pid == 0) {
        // This block runs ONLY in the Child process
        printf("This is the child process. PID: %d\n", getpid());
    } else if (pid > 0) {
        // This block runs ONLY in the Parent process
        printf("This is the parent process. PID: %d\n", getpid());
    } else {
        // fork() returned -1, meaning it failed
        printf("Fork failed!\n");
    }

    return 0;
}
