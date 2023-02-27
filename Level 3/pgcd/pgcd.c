#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int string1 = atoi(argv[1]);
	int string2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("\n");
		return 0;
	}
	if (string1 <= 0 || string2 <= 0)
	{
		printf("\n");
		return 0;
	}
	while (string2 != 0)
	{
		int temporary = string2;
		string2 = string1 % string2;
		string1 = temporary;
	}
	printf("%d\n", string1);
	return 0;
}
