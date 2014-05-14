#include <stdio.h>
#include <string.h>

#define OK 0
#define NO_INPUT 1
#define TOO_LONG 2

static int getLine(char* prompt, char* buffer, size_t sz)
{
	int ch, extra;
	if(prompt != NULL)
	{
		printf("%s", prompt);
		fflush(stdout);
	}
	if(fgets(buffer, sz, stdin) == NULL)
		return NO_INPUT;
	if(buffer[strlen(buffer)-1] != '\n') {
		extra = 0;
		while(((ch = getchar()) != NULL) && (ch != '\n'))
			extra = 1;
		return (extra == 1) ? TOO_LONG : OK;
	}
	buffer[strlen(buffer)-1] = '\0';
	return OK;
}
