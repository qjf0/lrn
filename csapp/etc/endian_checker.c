/* A little-endian/big-endian detector */
#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint16_t n = 0x00FF;
	if (*(uint8_t *)&n == 0x00) {
		printf("detector: big-endian\n");
	} else {
		printf("detector: little-endian\n");
	}

	return 0;
}
