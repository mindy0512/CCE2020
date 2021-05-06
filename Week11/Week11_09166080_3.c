#include <stdio.h>
#include <stdlib.h>
int compare (const void *p1,const void *p2)
///轉成「整數的指標」/望遠鏡，準星看見的整數
{
    int d1 = *( (int*)p1 );
    int d2 = *( (int*)p2 );
    if(d1>d2) return 1;
    if(d1==d2) return 0;
    if(d1<d2) return -1;
}
int a[10]= {2,4,5,3,1,6,8,7,10,9};
int main()
{
    qsort( a, 10, sizeof(int), compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
