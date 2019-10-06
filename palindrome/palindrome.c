#include <stdio.h>
#include <stdbool.h>

long
reverse(long x)
{
    long toAdd = 0;
    long reverse = 0;
    bool isNeg = x < 0;

    while(x != 0) {
        // 3459
        // 345

        // toAdd = 9
        // toAdd = 5
        toAdd = x % 10;

        // 0 * 10 + 9 = 9
        // (9 * 10) + 5 = 95
        reverse = (reverse * 10) + toAdd;

        // 345.9
        // 34.5
        x = x / 10;
    }

    return isNeg ? -reverse : reverse;
}

bool
isPalindrome(long org)
{
    long rvs = reverse(org);
    printf("%d %d", rvs, org);
    return org == rvs;
}

int
main()
{
    bool check = isPalindrome(200);

    printf("%s \n", check ? "true" : "false");
    return 0;
}
