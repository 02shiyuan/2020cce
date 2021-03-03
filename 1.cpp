#include <stdio.h>
int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	for(int i=m;i>=1;i--){
		if((m%i==0)&&(n%i==0)){
			m=m/i;
			n=n/i;
		}
	}
	printf("%d %d\n",m,n);
	return 0;
}
