#include "stdio.h"
#include "stdlib.h"

int main(int argc, char **argv)
{
	FILE *fp;
	char name[6];
	int num = atoi((const char*)argv[1]);

	if (argc != 2)
	{
		printf("argument error");
		return (-1);
	}
	for (int i = 0; i < num; i++)
	{
		sprintf(name, "%c.cpp", 'A' + i);
		if ((fp = fopen(name, "w")) == NULL)
		{
			printf("file opne failed");
			return (-1);
		}
		fclose(fp);
	}
	return (0);
}