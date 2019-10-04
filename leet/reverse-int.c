#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>


int main()
{
	int *res = (int *)malloc(sizeof(int));
	int ans = 457845887348;

	printf("%d", isOv(res, ans));

	return 0;
}
