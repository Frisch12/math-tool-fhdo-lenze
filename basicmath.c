#include <stdio.h>
#include "basicmath.h"
#include "basics.c"

int showMathMenu(void)
{
	int choise = 0;
	printf("Operationen: \n");
	printf("(1)	Test1\n");
	printf("(2)	Test2\n");

	char buffer[3];
	int c = getLine("Wahl: ", buffer, sizeof(buffer));

	return choise;
}
