#include <stdio.h>

int main() {
	int x = 100;
	int i, j, k;
	while (x <= 999) {
		i = (int)(x/100);
		j = (int)((i*(-100) + x) / 10);
		k = x - ((int)(x/10) * 4 + (int)(x/10)) * 2;
		if ((i*i*i + j*j*j + k*k*k) == x)
			printf("%d ", x);
		x++;
	}
	return 0;
}
