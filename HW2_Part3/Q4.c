#include <stdio.h>

int fun(int *array, int y, int x) {
  int count = 0;
  int pos = 0;
  int res;
  int i = 0;
  while (i < y) {
    count = 1;
    while (count < x) {
      while (array[pos] == 0)
        pos = (pos + 1) % y;
      count++;
      pos = (pos + 1) % y;
    }
    while (array[pos] == 0)
      pos = (pos + 1) % y;
    res = array[pos];
    array[pos] = 0;
    i++;
  }
  return res;
}

int main() {
	int array[100];
	int x = 7;
	int y = 100;
	int z = 0;
	int res;
	
	while (z < y) {
		array[z] = z + 1;
		z++;
	}
	res = fun(array, y, x);
	printf("%d\n", res);
	return 0;
}

