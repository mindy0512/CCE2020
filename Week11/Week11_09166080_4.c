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
