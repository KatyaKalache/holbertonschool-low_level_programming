#include <stdio.h>
#include <unistd.h>
/**
 * main - gets parent pid of parent process
 * Return: parent id
 */
int main(void)
{
	pid_t my_ppid;

	my_ppid = getppid();
	printf("%u\n", my_ppid);
	return (0);
}
