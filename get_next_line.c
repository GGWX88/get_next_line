#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	unsigned int	size;
	char	*buffer;

	size = 0;
	while (read(fd, NULL, 1) != 0)
	{
		size++;
	}
	buffer = malloc(sizeof(unsigned char) * (size));
	read(fd, buffer, size);
	return (buffer);
}


//=======================main=========================

int	main(void)
{
	int		fd;
	char	*output;

	fd = open("test1.txt", O_RDONLY);
	output = get_next_line(fd);
	printf("%s\n", output);
	printf("\n[NED]\n");

}
