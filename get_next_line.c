#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char	*buffer;

	buffer = malloc(sizeof(unsigned char) * (BUFFER_SIZE));
	if (buffer == NULL)
		return (NULL);
	if (read(fd, buffer, BUFFER_SIZE - 1) == 0)
	{
		free(buffer);
		return (NULL);
	}
	buffer[BUFFER_SIZE - 1] = '\0';
	return (buffer);
}


//=======================main=========================

#include <fcntl.h>

int	main(void)
{
	int		choice;
	int		fd;
	int		chr_count;
	char	*output;

	printf("Choose test file 1, 2, or 3: ");
	scanf("%i", &choice);

	if (choice == 1)
		fd = open("test1.txt", O_RDONLY);
	else if (choice == 2)
		fd = open("test2.txt", O_RDONLY);
	else if (choice == 3)
		fd = open("test3.txt", O_RDONLY);
	else
	{
		fd = -42;
		printf("wtf bro\n");
		return (1);
	}

	chr_count = 0;
	output = get_next_line(fd);

	if (output == NULL)
	{
		printf("NULL returned\n");
		return (1);
	}

	printf("%s\n", output);
	printf("buffer size: %i\n", BUFFER_SIZE);
	printf("string length: %li\n", strlen(output));
	while(chr_count != BUFFER_SIZE)
	{
		if (output[chr_count] == '\0')
			printf("char[%i] = \\0\n", chr_count);
		else if (output[chr_count] == '\n')
			printf("char[%i] = \\0\n", chr_count);
		else
			printf("char[%i] = %c\n", chr_count, output[chr_count]);
		chr_count++;
	}

	free(output);
	printf("\n[END]\n");
}
