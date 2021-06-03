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
## 指標
### 指標_1
```c
#include <stdio.h>
int main()
{
    int a=10,b=20,c=30;
    printf("n1:%d n2:%d n3:%d\n", a,b,c);
    int *p=&a;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n", a,b,c);
}

```
![](https://i.imgur.com/CtNZRa6.png)
### 指標_2
```c
#include <stdio.h>
int main()
{
    int a=10,b=20,c=30;
    printf("n1:%d n2:%d n3:%d\n", a,b,c);
    int *p=&a;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n", a,b,c);
    int *p2=&c;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n", a,b,c);
}

```
![](https://i.imgur.com/8HzXhv7.png)
### 指標_3
```c
#include <stdio.h>
int main()
{
    int a=10,b=20,c=30;
    printf("n1:%d n2:%d n3:%d\n", a,b,c);
    int *p=&a;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n", a,b,c);
    int *p2=&c;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n", a,b,c);
    
    p2=p;
    *p2=400;
    printf("n1:%d n2:%d n3:%d\n", a,b,c);

}

```
![](https://i.imgur.com/8vBYl1s.png)
### 指標_4
```c
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

```
![](https://i.imgur.com/ZMz6s5O.png)

### 指標與陣列_1
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p = 666;

}
```
![09166080_1](https://user-images.githubusercontent.com/74175691/110755990-93afd480-8284-11eb-8694-7348af618742.png)
### 指標與陣列_2
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p = 666;

    p--:
    *p=555;

}
```
![09166080_2](https://user-images.githubusercontent.com/74175691/110756029-a0342d00-8284-11eb-9149-ad8c060b85b3.png)
### 指標與陣列_3
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
    int *p=&a[2];
    *p=222;

    int *p2= p+2; //宣告
    *p2=666;

    p=p+2;  //使用
    *p = 666;

    p--:
    *p=555;

}
```
![09166080_3](https://user-images.githubusercontent.com/74175691/110758679-c0192000-8287-11eb-8952-a86444827ac3.png)
## malloc()
```C
#include <stdio.h>
#include <stdlib.h>
int a[5];
int main()
{
    int b[5];
    
    int *p = (int *)malloc(sizeof(int)*5);

    return 0;
}
```
![09166080_4](https://user-images.githubusercontent.com/74175691/110764237-c3afa580-828d-11eb-86de-8279352cd4c0.png)
## Week05_字串_1
```C
#include <stdio.h>
char line[20]="233233233233233233";
int main()
{
    char *p=line;
    for(int i=0;line[i]!=0;i++)
    {
        p=&line[i];
        char c=line[i];
        if(c!='2') printf("%c",c);
    }
    printf("\n");
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/09166080_1.png)
## Week05_字串_2
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);
}
```

![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/09166080_2.png)
## Week05_字串_2bad
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]="majority這是好的，沒問題，要多長有多長";
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n",line3);
    printf("你相信嗎? 這是 line4:==%s==\n",line4);
}
```

![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/09166080_2bad.png)
## Week05_字串與二維陣列_3
```C
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};
    char *p;
    for(int i=0;i<5;i++)
    {
        p = line[i];
        printf("%s\n",line[i]);
    }
}
```

![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/09166080_3.png)
## Week05_二維陣列_4
```C
#include <stdio.h>
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int main()
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```

![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/09166080_4.png)

## Week05_字串排列_5
```C
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
```

![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/09166080_5.png)

## Week07 上方Week05_字串排列_5,改用 qsort() 快速排序
```C
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
	
	qsort(     n,  x,      10    ,compare);
  //快速排列(陣列,數量,每個有多大,比較(函式));
	
	for(int i=0;i<x;i++){
		printf("%s\n",n[i]);
	}
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/HW07_09166080_2.png)

## Week08  CPE題目 (UVA10420) List of Conquests :
```C
#include <stdio.h>
#include <string.h>
char name[2000][80];
char others[80];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",name[i]);
		gets(others);
	}
	char temp[80];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(name[i],name[j])>0){
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	int ans=1;
	printf("%s ",name[0]);
	for(int i=0;i<n-1;i++){
		if(strcmp(name[i],name[i+1])!=0){
			printf("%d\n",ans);
			printf("%s ",name[i+1]);
			ans=1;
		}else{
			ans++;
		}
	}
	printf("%d\n",ans);
}
```
## Week08 CPE題目 (UVA10226) Hardwood species :(未完成)
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		for(int i=0;  ;i++){
			gets(tree[i]);
			if(strcmp(tree[i],"")==0){
				N=i;
				break;
			}
		}
		
		qsort(tree,N,32,compare);
		
		int ans=1;
		printf("%s ",tree[0]);
		for(int i=0;i<N-1;i++){
			if(strcmp(tree[i],tree[i+1])!=0){
				printf("%.4f\n",100*ans/(float)N);
				printf("%s ",tree[i+1]);
				ans=1;
			}else{
				ans++;
			}
		}
		printf("%.4f\n",100*ans/(float)N);

	}
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/HW8_09166080_5.png)
## Week10 CPE題目 (UVA10008) What's Cryptanalysis? :(未完成)(先讀入句子)
```C
#include <stdio.h>
char line[10000];
int main()
{
	int n;
	scanf("%d\n",&n);
	
	for(int i=0;i<n;i++){
		gets(line); ///scanf讀入至空行，gets是讀入至跳行
		printf("%s\n",line);
	}
	
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W10_09166080_1.png)
## Week10 CPE題目 (UVA10008) What's Cryptanalysis? :(未完成)(大小寫處理)
```C
#include <stdio.h>
char line[10000];
int main()
{
	int n;
	scanf("%d\n",&n);
	
	for(int i=0;i<n;i++){
		gets(line);
		
		//題目答案為大寫，所以要小寫轉大寫
		//先判斷全部的句子，是英文大寫?小寫?不是英文?
		for(int k=0;line[k]!=0;k++){
			char c=line[k];
			if(c>='A'&&c<='Z') printf("大");
			else if(c>='a'&&c<='z') printf("小");
			else printf("他");
		}
	}
	
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W10_09166080_2.png)
## Week10 CPE題目 (UVA10008) What's Cryptanalysis? :(未完成)(大小寫統計)
```C
#include <stdio.h>
char line[10000];
int ans[26];
int main()
{
	int n;
	scanf("%d\n",&n);
	
	for(int i=0;i<n;i++){
		gets(line);
		
		//題目答案為大寫，所以要小寫轉大寫
		//先判斷全部的句子，是英文大寫?小寫?不是英文?
		
		//判斷完後並統計
		for(int k=0;line[k]!=0;k++){
			char c=line[k];
			if(c>='A'&&c<='Z') ans[c-'A']++;
			else if(c>='a'&&c<='z') ans[c-'a']++;
		}
	}
	
	//印出統計結果
	for(int i=0;i<26;i++){
		printf("%c %d\n",'A'+i,ans[i]);
	}
	
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W10_09166080_3.png)
## Week10 CPE題目 (UVA10008) What's Cryptanalysis? :(完成)(統計排序)
```C
#include <stdio.h>
char line[10000];
int ans[26];
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(line);
		//題目答案為大寫，所以要小寫轉大寫
		//先判斷全部的句子，是英文大寫?小寫?不是英文?
		//判斷完後並統計
		for(int k=0;line[k]!=0;k++){
			char c=line[k];
			if(c>='A'&&c<='Z') ans[c-'A']++;
			else if(c>='a'&&c<='z') ans[c-'a']++;
		}
	}
	
	//排序(題目是先統計數字大到小，如果統技術一樣就找字母排序)
	for(int i=0;i<26;i++){
		for(int j=i+1;j<26;j++){
			if(ans[i]<ans[j] || (ans[i]==ans[j]&&alphabet[i]>alphabet[j])){
				int temp=ans[i];
				ans[i]=ans[j];
				ans[j]=temp;
				char temp2=alphabet[i];
				alphabet[i]=alphabet[j];
				alphabet[j]=temp2;
			}
		}
	}
	//印出統計結果(統計結果為0的不要印出來)
	for(int i=0;i<26;i++){
		if(ans[i]>0) printf("%c %d\n",alphabet[i],ans[i]);
	}
	
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W10_09166080_4.png)
## Week10 CPE題目 (UVA10008) What's Cryptanalysis? :(未完成)(排序用Qsort)
(還有字母排序問題)
```C
#include <stdio.h>
#include <stdlib.h>
char line[10000];
typedef struct {
	int ans; //int ans[26];
	char c;//char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}BOX;
BOX array[26];
int compare(const void *p1,const void *p2){
	if( ((BOX*)p1)->ans > ((BOX*)p2)->ans) return -1;
	else if(((BOX*)p1)->ans < ((BOX*)p2)->ans) return +1;
	else return 0; //ans相等，比字母
}
int main()
{
	for(int i=0;i<26;i++) array[i].c = 'A'+i;
	
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(line);
		//題目答案為大寫，所以要小寫轉大寫
		//先判斷全部的句子，是英文大寫?小寫?不是英文?
		//判斷完後並統計
		for(int k=0;line[k]!=0;k++){
			char c=line[k];
			if(c>='A'&&c<='Z') array[c-'A'].ans++;
			else if(c>='a'&&c<='z') array[c-'a'].ans++;
		}
	}
	
	//排序(題目是先統計數字大到小，如果統技術一樣就找字母排序)
	//用Qsort
	qsort(array,26,sizeof(BOX),compare);

	//印出統計結果
	for(int i=0;i<26;i++){
		if(array[i].an s> 0) printf("%c %d\n",array[i].c,array[i].ans);
	}
	
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W10_09166080_5.png)
## Week10 CPE題目 (UVA10008) What's Cryptanalysis? :(完成)(排序用Qsort)
```C
#include <stdio.h>
#include <stdlib.h>
char line[10000];
typedef struct {
	int ans; //int ans[26];
	char c;//char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}BOX;
BOX array[26];
int compare(const void *p1,const void *p2){
	if( ((BOX*)p1)->ans > ((BOX*)p2)->ans) return -1;
	else if(((BOX*)p1)->ans < ((BOX*)p2)->ans) return +1;
	else if( ((BOX*)p1)->c > ((BOX*)p2)->c) return +1; //上方的是數字大排前面，這裡是字母小排前面，所以比較符號會顛倒
	else if( ((BOX*)p1)->c < ((BOX*)p2)->c) return -1;
	else return 0; //ans相等，比字母
}
int main()
{
	for(int i=0;i<26;i++) array[i].c = 'A'+i;
	
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(line);
		//題目答案為大寫，所以要小寫轉大寫
		//先判斷全部的句子，是英文大寫?小寫?不是英文?
		//判斷完後並統計
		for(int k=0;line[k]!=0;k++){
			char c=line[k];
			if(c>='A'&&c<='Z') array[c-'A'].ans++;
			else if(c>='a'&&c<='z') array[c-'a'].ans++;
		}
	}
	
	//排序(題目是先統計數字大到小，如果統技術一樣就找字母排序)
	//用Qsort
	qsort(array,26,sizeof(BOX),compare);

	//印出統計結果
	for(int i=0;i<26;i++){
		if(array[i].an s> 0) printf("%c %d\n",array[i].c,array[i].ans);
	}
	
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W10_09166080_6.png)
## Week11 Typedef_1
```C
#include <stdio.h>
unsigned char c;
typedef unsigned char uchar;
uchar d;
int main()
{
    c = 'A';
    d = c;
    printf("%c",d);
}

```

![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W11_09166080_1.png)
## Week11 Typedef_2
```C
#include <stdio.h>
typedef struct data{
    char c;
    int ans;
} DATA;

DATA listA;

int main()
{
    listA.c = 'A';
    listA.ans = 1;

    printf("%c %d\n", listA.c, listA.ans);
}

```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W11_09166080_2.png)
## Week11 指標_1
```C
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

```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W11_09166080_3.png)

## Week11 指標_2(與上方比對應用於之前題目)
```C
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char name[2000][80];
char others[80];
int compare( const void *p1, const void *p2 )
{//            轉成「字串的指標」
	
	char *s1 = (char*)p1;
	char *s2 = (char*)p2;
	if( strcmp(s1,s2)>0 ) return 1;
	if( strcmp(s1,s2)==0 ) return 0;
	if( strcmp(s1,s2)<0 ) return -1;

}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", name[i] );
		gets( others );
	}
	
	qsort( name, N, 80, compare );
	
	printf("%s ", name[0] );//開頭
	int ans=1;
	
	for(int i=0; i<N-1; i++){
		if( strcmp( name[i], name[i+1] ) == 0 ){
			ans++;
		}else{
			printf("%d\n", ans );//結尾		
			printf("%s ", name[i+1] );//新的開頭
			ans=1;
		}
	}
	printf("%d\n", ans );//結尾
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W11_09166080_4.png)

## Week13 Processing基本程式_視窗大小&背景顏色
```JAVA
size(1024,400);  //視窗大小
background(#538352);  //背景顏色
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W13_09166080_1.png)
## Week13 Processing基本程式_滑鼠點擊_1
```JAVA
void setup(){ //只做一次的設定
  size(1024,400);
}
void draw(){ //互動版本，每秒畫60fps
  if( mousePressed ) background(#76D1CB); 
  else background(#538352);
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W13_09166080_2.png)
## Week13 Processing基本程式_滑鼠點擊_2
```JAVA
void setup(){ //只做一次的設定
  size(1024,400);
}
void draw(){ //互動版本，每秒畫60fps
  if( mousePressed ) background(#76D1CB); 
  else background(#538352);
  text(a,512,200); //顯示出文字test(文字,X,Y);
}
int a=0;
void mousePressed(){
  a++;  //累積滑鼠點擊次數
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W13_09166080_3.png)
## Week13 Processing基本程式_文字設定
```JAVA
void setup(){ //只做一次的設定
  size(1024,400);
}
void draw(){ //互動版本，每秒畫60fps
  if( mousePressed ) background(#76D1CB); 
  else background(#538352);
  textSize(36);  //設定文字大小
  text("中文壞掉Now a is:"+a,512,200); //顯示出文字test(文字,X,Y);
       //中文會無法顯示
}
int a=0;
void mousePressed(){
  a++;  //累積滑鼠點擊次數
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W13_09166080_4.png)

## Week13 Processing基本程式_簡易時鐘
```JAVA
void setup(){
  size(1024,400); //視窗大小
}
void draw(){
  background(#538352);  //背景顏色
  int s = second();  //時間 秒(0~59)
  int m = minute();  //時間 分(0~59)
  int h = hour();    //時間 時(0~23)
  textSize(80);
  text(h+":"+m+":"+s, 100,200);
    //數字：數字：數字
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W13_09166080_5.png)

## Week13 Processing基本程式_簡易倒數計時_1
```JAVA
void setup(){
  size(1024,400); //視窗大小
  textFont(createFont("標楷體",80));  //給中文字體與大小
}
void draw(){
  background(#538352);  //背景顏色
  int s = second();  //時間 秒(0~59)
  int m = minute();  //時間 分(0~59)
  int h = hour();    //時間 時(0~23)
  textSize(80);
  text(h+":"+m+":"+s, 100,200);
    //數字：數字：數字
  int total = s+60*m+60*60*h;  //總秒數
  int closeH=17, closeM=40,closeS=0;  //截止時間
  int closetotal=closeS+closeM*60+closeH*60*60;  //截止時間總秒數
  int ans = closetotal - total;  //距離截止時間還有多少秒
  text("剩下幾秒："+ans,100,100);  //印出
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W13_09166080_6.png)

## Week13 Processing基本程式_簡易倒數計時_2
```JAVA
void setup(){
  size(1024,400); //視窗大小
  textFont(createFont("標楷體",80));  //給中文字體與大小
}
void draw(){
  background(#538352);  //背景顏色
  int s = second();  //時間 秒(0~59)
  int m = minute();  //時間 分(0~59)
  int h = hour();    //時間 時(0~23)
  textSize(80);
  text(h+":"+m+":"+s, 100,200);
    //數字：數字：數字
  int total = s+60*m+60*60*h;  //總秒數
  int closeH=17, closeM=40,closeS=0;  //截止時間
  int closetotal=closeS+closeM*60+closeH*60*60;  //截止時間總秒數
  int ans = closetotal - total;  //距離截止時間還有多少秒
  text("剩下"+ans/60/60+":"+ans/60+":"+ans%60,100,100);  //印出
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W13_09166080_7.png)

## Week14 Processing基本程式_(浮點數)亂數
```JAVA
void setup(){
  float ans = random(60);  //亂數,會是小於60的浮點數
  text( ans, 20,20);  //顯示ans
}
void draw(){//畫圖，每秒60次


}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W14_09166080_1.PNG)
## Week14 Processing基本程式_(整數)亂數
```JAVA
int ans=0;
void setup(){
  size(300,300);
  //float ans = random(60);  //亂數,會是小於60的浮點數
    textSize(30);  //字體大小
  //text( ans, 20,20);  //顯示ans
}
void draw(){//畫圖，每秒60次
  background(#5DB46C);  //背景
  text(ans, 20,30);  //顯示ans

}
void mousePressed(){
  ans = (int)random(60);  //原浮點數不能直接便整數，所以需要轉型
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W14_09166080_.PNG)
## Week14 Processing基本程式_兩個數值交換
```JAVA
int []a={1,2,3,4,5,6,7,8,9,10};  //JAVA寫法
int i1,i2;
void setup(){
  size(400,100);
  textSize(30);
}
void draw(){
  background(#5DB46C);
  for(int i=0;i<10;i++){
    text(a[i],i*40,50);
  }
  rect(i1*40, 50, 30, 30);  //下方顯示方塊表示交換的數值
  rect(i2*40, 50, 30, 30);  //下方顯示方塊表示交換的數值
}
void mousePressed(){
  i1=(int)random(10);  //第一個數字亂數取
  i2=(int)random(10);  //第二個數字亂數取
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;  //交換
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W14_09166080_3.PNG)
## Week14 Processing基本程式_運用陣列做出抽獎_一次顯示五個數
```JAVA
int []a= new int[47];//JAVA的陣列
void setup(){
   size(500,200);  //視窗大小
   textSize(30);  //字體大小
   for(int i=0;i<47;i++) a[i]=i;  //讓a[i]的陣列裡，會先放整齊對應的數字
   for(int i=0;i<1000;i++){
     int i1=(int)random(47);  //第一個數字亂數取
     int i2=(int)random(47);  //第二個數字亂數取
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;  //交換
   }//先洗好牌
}
void draw(){
  background(#5DB46C);
  for(int i=0;i<5;i++){
    text(a[i],i*80,100);  //顯示出前五個
  }
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W14_09166080_4.PNG)

## Week14 Processing基本程式_運用陣列做出抽獎_一個一個顯示_
```JAVA
int []a= new int[47];//JAVA的陣列
void setup(){
   size(500,200);  //視窗大小
   textSize(30);  //字體大小
   for(int i=0;i<47;i++) a[i]=i;  //讓a[i]的陣列裡，會先放整齊對應的數字
   for(int i=0;i<1000;i++){
     int i1=(int)random(47);  //第一個數字亂數取
     int i2=(int)random(47);  //第二個數字亂數取
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;  //交換
   }//先洗好牌
}
int N=0;
void draw(){
  background(#5DB46C);
  for(int i=0;i<N;i++){  //顯示N個
    text(a[i],i*80,100);  
  }
}
void mousePressed(){
  N++;  //每點擊一次就多顯示
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W14_09166080_5.PNG)
## Week14 Processing基本程式_運用陣列做出抽獎_一個一個顯示_2
```JAVA
int []a= new int[47];//JAVA的陣列
void setup(){
   size(500,200);  //視窗大小
   textSize(30);  //字體大小
   for(int i=0;i<47;i++) a[i]=i;  //讓a[i]的陣列裡，會先放整齊對應的數字
   for(int i=0;i<1000;i++){
     int i1=(int)random(47);  //第一個數字亂數取
     int i2=(int)random(47);  //第二個數字亂數取
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;  //交換
   }//先洗好牌
}
int N=0;
void draw(){
  background(#5DB46C);
  textAlign(CENTER,CENTER);  //文字對齊:中，中
  for(int i=0;i<N;i++){  //顯示N個
    fill(255); //顏色填充:白
    ellipse( i*80+40,100,55,55);  //畫圓
    fill(0);  //顏色填充：黑
    text(a[i],i*80+40,100);  
  }
}
void mousePressed(){
  N++;  //每點擊一次就多顯示
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W14_09166080_6.PNG)

## Week14 Processing基本程式_運用陣列做出抽獎_一個一個顯示_動態移動
```JAVA
int []a= new int[47];//JAVA的陣列
void setup(){
   size(500,200);  //視窗大小
   textSize(30);  //字體大小
   for(int i=0;i<47;i++) a[i]=i;  //讓a[i]的陣列裡，會先放整齊對應的數字
   for(int i=0;i<1000;i++){
     int i1=(int)random(47);  //第一個數字亂數取
     int i2=(int)random(47);  //第二個數字亂數取
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;  //交換
   }//先洗好牌
}
int N=0,rolling=0;
void draw(){
  background(#5DB46C);
  textAlign(CENTER,CENTER);  //文字對齊:中，中
  for(int i=0;i<N;i++){  //顯示N個
    int x=i*80+40;
    if(i==N-1 && rolling>0){
      x+=rolling;
      rolling-=3;
    }
    fill(255); //顏色填充:白
    ellipse( x,100,55,55);  //畫圓
    fill(128);
    text(a[i],x+2,100+2);
    fill(0);  //顏色填充：黑
    text(a[i],x,100);  
  }
}
void mousePressed(){
  rolling = 500;
  N++;  //每點擊一次就多顯示
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W14_09166080_7.PNG)

## Week15 Processing基本程式_用second()秒鐘,奇偶數調背景色
```JAVA
void setup(){//設定只做一次
  size(400,200);
}
void draw(){//畫圖
  int s = second();
  if(s%2==0) background(#5889CB);
  else background(#81D184);
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W15_09166080_1.png)
## Week15 Processing基本程式_利用秒數、餘數、減法,做出10到0的倒數計時
```JAVA
void setup(){//設定只做一次
  size(400,200);
  textSize(40); //字體大小
}
void draw(){//畫圖
  int s = second();
  background(#81D184);
  text(10 -s%11,100,100); //10~0有11個數
}
```
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W15_09166080_2.png)
