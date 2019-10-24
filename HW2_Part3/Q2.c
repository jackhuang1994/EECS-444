#include <stdio.h>

int main() {
	int elements[8] = {12, 15, 221, 3, 432, 54, 16, 67};
	int greatest = 0;
	int count = 0;

	while (count <= 7) {
		if (elements[count] > greatest) 
			greatest =  elements[count]; 
		count++;
	}
	printf("%d", greatest);
    	return 0;
}
