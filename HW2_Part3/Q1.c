#include <stdio.h>

int main() {
	int variable[3] = {3, 5, 0};
    variable[2] = (variable[0]*variable[1] - variable[0]/2);
	printf("%d ", variable[2]);
	return 0;
}

