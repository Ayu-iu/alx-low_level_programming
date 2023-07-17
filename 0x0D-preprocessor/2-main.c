#ifndef MAIN_H
#define MAIN_H

#define _GNU_SOURCE

#include <stdio.h>

void print_filename(void);

#endif

#include "filename.h"

void print_filename(void)
{
	FILE *fp = fopen("/proc/self/cmdline", "r");
	if (fp != NULL)
	{
		char buffer[256];
		size_t bytesRead = fread(buffer, sizeof(char), sizeof(buffer) -1, fp);
		if (bytesRead > 0)
		{
			buffer[bytesRead] = '\0';
			char *filename = strrchr(buffer, '/');
			if (filename != NULL)
			{
				printf("%s\n", filename + 1);
			}
		}
		fclose(fp);
	}
}

#include "main.h"

int main(void)
{
	print_filename();
	return 0;
}
