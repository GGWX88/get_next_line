#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	unsigned int	size;
	char	*temp;
	char	*buffer;

	size = 0;
	temp = malloc(1);
	while (read(fd, temp, 1) != 0)
	{
		size++;
	}
	printf("ran\n");
	buffer = malloc(sizeof(unsigned char) * (size));
	read(fd, buffer, size);
	free(temp);
	return (buffer);
}


//=======================main=========================

#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*output;

	fd = open("test1.txt", O_RDONLY);
	output = get_next_line(fd);
	printf("%s\n", output);
	printf("\n[END]\n");
	free(output);
}
