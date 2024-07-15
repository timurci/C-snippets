#include "read_bytes.h"

t_bytes	read_bytes(const void *address, const size_t size) {
	size_t			count = size / sizeof(unsigned char);
	unsigned char	*octet = malloc(sizeof(unsigned char) * size);

	for (size_t i = 0; i < size; i++) {
		octet[i] = *((unsigned char *) address + i);
	}

	t_bytes	bytes = {
		octet,
		size
	};

	return bytes;
}

void	print_bytes(const t_bytes bytes) {
	printf("%s: ", "HEX");
	for (size_t i = 0; i < bytes.size; i++) {
		printf(" %02x ", bytes.octets[i]);
	}
	printf("\n");
	printf("%s: ", "DEC");
	for (size_t i = 0; i < bytes.size; i++) {
		printf("%3i ", bytes.octets[i]);
	}
	printf("\n");
}

void	read_and_print_bytes(const void *address, const size_t size) {
	t_bytes	bytes = read_bytes(address, size);

	print_bytes(bytes);
	free(bytes.octets);
}
