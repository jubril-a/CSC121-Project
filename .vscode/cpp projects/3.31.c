#include <stdio.h>
int main(void)
{
    int x =5;
    int y =8;
    // for task a
    puts("for a:");
    if (y == 8)
    {
        if (x == 5)
        {
            puts("@@@@@");
        }
        else
        {
            puts("#####");
        }
        puts("$$$$$");
        puts("&&&&&");
    }

    // for task b
    puts("for b:");
    if (y == 8)
    {
        if (x == 5)
        {
            puts("@@@@@");
        }
    }
    else
    {
        puts("#####");
        puts("$$$$$");
        puts("&&&&&");
    }

    // for task c
    puts("for c:");
    if (y == 8)
    {
        if (x == 5)
        {
            puts("@@@@@");
        }
    }
    else
    {
        puts("#####");
        puts("$$$$$");
    }

    puts("&&&&&");

    // for task d
    y=7;

    puts("for d:");
    if (y == 8)
    {
        if (x == 5)
        {
            puts("@@@@@");
        }
    }

    else
    {
        puts("#####");
        puts("$$$$$");
        puts("&&&&&");
    }
}