#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
    int *p=&a[2];
    *p=222;

    int *p2= p+2; //�ŧi
    *p2=666;

    p=p+2;  //�ϥ�
    *p = 666;

    p--:
    *p=555;

}
