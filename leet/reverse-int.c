#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>

int reverse(long myInt)
{
    bool isNeg = myInt < 0;
	int reverse = 0;
    int toAdd = 0;

	if (isNeg) myInt = -myInt;

	while (myInt != 0)
	{
		toAdd = myInt % 10;
        if (reverse > INT_MAX/10 || (reverse == INT_MAX / 10 && toAdd > 7)) return 0;
        if (reverse < INT_MIN/10 || (reverse == INT_MIN / 10 && toAdd < -8)) return 0;
		reverse = (reverse * 10) + toAdd;
		myInt = myInt / 10;
	}

	if (reverse != 0 && isNeg)
	{
		reverse = -reverse;
	}

    return reverse;
}

int main()
{
	reverse(321);
	return 0;
}
