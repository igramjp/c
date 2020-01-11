#include <stdio.h>

/*
#define old_maxint(a,b) \
    {int _a = (a), _b = (b); _a > _b ? _a : _b; }
*/

#define new_maxint(a,b) \
    ({int _a = (a), _b = (b); _a > _b ? _a : _b; })

int main(void)
{
    printf("hello, world.\n");
    
    int n;
    //n = old_maxint(1, 10);
    n = new_maxint(1, 10);
    printf("%d\n", n);

    return 0;
}
