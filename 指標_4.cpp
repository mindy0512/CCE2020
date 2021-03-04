#include <stdio.h>
int main()
{
    int a[3]={10,20,30};
    printf("a[0]:%d a[1]:%d a[2]:%d\n", a[0],a[1],a[2]);
    int *p=&a[0];
    *p=200;
    printf("a[0]:%d a[1]:%d a[2]:%d\n", a[0],a[1],a[2]);
    int *p2=&a[2];
    *p2=300;
    printf("a[0]:%d a[1]:%d a[2]:%d\n", a[0],a[1],a[2]);

    p2=p;
    *p2=400;
    printf("a[0]:%d a[1]:%d a[2]:%d\n", a[0],a[1],a[2]);

}
