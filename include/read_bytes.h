#ifndef READ_BYTES_H
# define READ_BYTES_H

# include <stdio.h>
# include <stdlib.h>

/**
* A struct that stores bytes contiguously.
*/
typedef struct s_bytes {
	unsigned char	*octets;	/**< Stores bytes **/
	size_t			size;		/**< The number of bytes **/
}	t_bytes;

/**
* Read "size" bytes of memory from "address".
* @param address start reading from this memory address
* @param size determine how many bytes to read
*/
t_bytes	read_bytes(const void *address, const size_t size);

/**
* Print byte contents in hex and dec format.
*/
void	print_bytes(const t_bytes bytes);

/**
* @see read_bytes()
* @see print_bytes()
*/
void	read_and_print_bytes(const void *address, const size_t size);

#endif
