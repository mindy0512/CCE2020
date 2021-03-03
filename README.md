# CCE2020

## 基礎題_因數個數
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			x++;
		}
	}
	printf("%d\n",x);
}
```
## 基礎題_找倍數
```C
#include <stdio.h>
int x[10]={};
int main()
{
	int y=0;
	int n;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
		if(x[i]%3==0)
		{
			y++;
		}
	}
	printf("%d\n",y);
}
```
## 基礎題_找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int co50=n/50;
	int co5=(n%50)/5;
	int co1=(n%5);
	printf("%d=50*%d+5*%d+1*%d\n",n,co50,co5,co1);
}
```
## 基礎題_整數轉換為等級
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90)
	{
		printf("A\n");
	}
	else if(n>=80)
	{
		printf("B\n");
	}
	else if(n>=60)
	{
		printf("C\n");
	}
	else printf("F\n");
}
```
## 進階題_A的B次方函數
```C
#include <stdio.h>
int AB(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
	{
		ans=ans*a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",AB(a,b));
	return 0;
}
```
## 進階題_分式化簡
```C
#include <stdio.h>
int main()
{
	int x,y,i;
	scanf("%d%d",&x,&y);
	for(i=x;i>=1;i--)
	{
		if((x%i==0) && (y%i==0))
		{
			x=x/i;
			y=y/i;
		}
	}
	printf("%d %d\n",x,y);
}
```
## 進階題_漸增數列相加
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		ans=ans+(i-1)*i;
	}
		printf("%d\n",ans);
}
```
## 進階題_讀入整數反序列印
```C
#include <stdio.h>
int x[10]={};
int main()
{
	for(int i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
		if(x[i]==0)
		{
			 break;
		}
	}
	for(int i=9;i>=0;i--)
	{
		if(x[i]!=0)
		{
			printf("%d ",x[i]);
		}
	}
	printf("\n");
}
```
