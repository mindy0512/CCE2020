#include <stdio.h>
#include <string.h>
char a[100][10];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)  ///用迴圈方式讀取輸入的英文
	{
		scanf("%s",a[i]);
	}

	///字串排序

	char temp[10];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if( strcmp(a[i],a[j]) >0){  ///比大小
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	for(int i=0;i<n;i++){  ///排序完後顯示
		printf("%s\n",a[i]);
	}
}
