#include <stdio.h>

int main()
{
    auto *temp = "aa";
    printf("%lu\n", sizeof(temp));
    printf("%lu\n", sizeof("aa"));
    return 0;
}