#include <stdio.h>
#include <string.h>
char a[100][10];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)  ///�ΰj��覡Ū����J���^��
	{
		scanf("%s",a[i]);
	}

	///�r��Ƨ�

	char temp[10];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if( strcmp(a[i],a[j]) >0){  ///��j�p
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	for(int i=0;i<n;i++){  ///�Ƨǧ������
		printf("%s\n",a[i]);
	}
}
