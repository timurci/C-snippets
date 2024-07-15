#ifndef READ_BYTES_H
# define READ_BYTES_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_bytes {
	unsigned char	*octets;
	size_t			size;
}	t_bytes;

t_bytes	read_bytes(const void *address, const size_t size);
void	print_bytes(const t_bytes bytes);
void	read_and_print_bytes(const void *var, const size_t size);

#endif
