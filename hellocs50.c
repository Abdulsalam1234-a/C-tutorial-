#include <stdio.h>
#include "cs50.h"

int main(void)
{
    // get name from user
    string name = get_string("what is your name? ");
    // print hello {name}
    printf("Hello, %s\n", name);
    return 0;
}


// link to downloaad library 
// https://github.com/cs50/libcs50/releases