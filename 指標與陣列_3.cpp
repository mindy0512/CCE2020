#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
    int *p=&a[2];
    *p=222;

    int *p2= p+2; //«Å§i
    *p2=666;

    p=p+2;  //¨Ï¥Î
    *p = 666;

    p--:
    *p=555;

}
