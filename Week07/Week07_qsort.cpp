#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char n[100][10];
int compare(const void *p1,const void *p2)
{
	char *s1= (char*)p1;
	char *s2= (char*)p2;
	return strcmp( s1, s2);
}
int main(){
	int x;
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		scanf("%s",&n[i]);
	}

	qsort(     n,   x,      10    ,compare);
 ///�ֳt�ƦC(�}�C,�ƶq,�C�Ӧ��h�j,���(�禡));

	for(int i=0;i<x;i++){
		printf("%s\n",n[i]);
	}
}
