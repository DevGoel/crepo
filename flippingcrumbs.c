#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Flipping Crumbs
void flippingcrumbs()
{
    for(char c; (c=getchar())!='$'; printf("%c", (c & 0xCC) >> 2 | (c & 0x33) << 2));
}
