#include <stdio.h>

// BUGGY CODE
//
unigned int buggy_global = -1;

int main()
{

    int a = malloc(10000);

    a = &a;
}

