#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	pid_t pid = fork();

	if (pid == 0) { // if Child Process
		puts("Hi, I'm a child process");
	}
	else {
		printf("Child Process ID: %d \n", pid);
		sleep(5); // sleep 5 sec
	}
	
	if (pid == 0)
		puts("End Child Process");
	else
		puts("End Parent Process");
	return 0;
}


