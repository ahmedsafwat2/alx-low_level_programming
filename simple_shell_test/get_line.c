#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char *buf = NULL;
    size_t len = 0;
    ssize_t i = 0;
    char ch;

    while (1)
    {
	    printf("$ ");
	if (getline(&buf, &len, stdin) != EOF)
    		printf("%s", buf);
	else
		return (0);
    }
}
