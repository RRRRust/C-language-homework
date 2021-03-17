#include <stdio.h>
void main()
{
	int a, b, c, n = 0;
	for (a = 1; a <= 4; a++) {
		for (b = 1; b <= 4; b++) {
			for (c = 1; c <= 4; c++) {
				if (a != b && b != c && c != a) {
					printf("%d%d%d\t", a, b, c);
					n++;
				}

			}
		}printf("\n");
	}printf("¹²ÓÐ%d¸ö", n);
}