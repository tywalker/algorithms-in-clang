#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int reverse(long myInt)
{
	bool isNeg = myInt < 0;

	if (myInt < 0) myInt = myInt * -1;

	long reverse = 0;
	long toAdd = 0;

	while (myInt != 0)
	{
		toAdd = myInt % 10;
		
		printf("toAdd: %d \n", toAdd);
		reverse = (reverse * 10) + toAdd;
		printf("reverse: %d \n", reverse);
		printf("myInt: %d \n", myInt);
		myInt = myInt / 10;

	}

    return (isNeg) ? (reverse * -1) : reverse;
}

int
main()
{
	int answer;
	long myInt = 964632435;
	long toAdd = 5;

	long x = myInt * 10;
	printf("%d \n", x);

	answer = reverse(1534236469);


	return 0;
}
