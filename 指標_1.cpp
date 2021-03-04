#include <stdio.h>
int main()
{
    int a=10,b=20,c=30;
    printf("n1:%d n2:%d n3:%d\n", a,b,c);
    int *p=&a;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n", a,b,c);
}
