#include <stdio.h>
typedef unsigned long long u64;

#define CLEAN(arr)  do { \
    (arr)[0] = 0; \
    (arr)[1] = 0; \
    (arr)[2] = 0; \
    (arr)[3] = 0; \
    (arr)[4] = 0; \
    (arr)[5] = 0; \
    (arr)[6] = 0; \
    (arr)[7] = 0; \
} while(0)

void output(void);
void next(void);

u64 map[8];
u64 map_next[8];

int main(void)
{
	CLEAN(map);
	map[7] = 132312341;
	output();
	return 0;
}

void next(void)
{

}

void output(void)
{
	for (int row = 0; row < 8; ++row) {
		for (int col = 0; col < 64; ++col) {
			int alive = (map[row] >> (63 - col)) & 1;
			putchar(' ' + alive * ('*' - ' '));
		}
		putchar('\n');
	}
}
