#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int
reverse(long myInt)
{
    bool isNeg = myInt < 0;
	int reverse = 0;
    int toAdd = 0;

	if (isNeg) 
		myInt = -myInt;

	while (myInt != 0)
	{
		toAdd = myInt % 10;
        if (reverse > INT_MAX/10 || (reverse == INT_MAX / 10 && toAdd > 7))
			return 0;
        if (reverse < INT_MIN/10 || (reverse == INT_MIN / 10 && toAdd < -8))
			return 0;
		reverse = (reverse * 10) + toAdd;
		myInt = myInt / 10;
	}

	if (reverse != 0 && isNeg)
		reverse = -reverse;

    return reverse;
}

int
main()
{
	int answer;
	answer = reverse(321);
	printf("%d \n", answer);
	answer = reverse(-321);
	printf("%d \n", answer);
	answer = reverse(1234567905);
	printf("%d \n", answer);

	return 0;
}
