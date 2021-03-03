# 2020cce
#第01周的實習課程式

##第一題:分式化簡
```C
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
```

##第二題:讀入整數反序列印
```C
#include <stdio.h>
int a[10];
int main()
{
	int n;
	for(int i=1;i<=10;i++){
		if(n==0)
		break;
		else scanf("%d",&a[i]);
	}
	for(int i=10;i>=1;i--){
		if(a[i]!=0)printf("%d ",a[i]);
	}
	printf("\n");
}
```

##第三題:A的B次方函數
```c
#include <stdio.h>
int MYPOWER(int x,int y)
{
	int ans=1;
	if(x>=1 &&x<=9){
		for(int i=1;i<=y;i++){
			ans*=x;
		}
	}
	return ans;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```

##第四題:漸增數列相加
```c
#include <stdio.h>
int main()
{
	int a,n=0;
	scanf("%d",&a);
	for(int i=2;i<=a;i++){
		int j,z;
		j=i-1;
		z=j*i;
		n=n+z;
	}
	printf("%d\n",n);
}
```

##第五題:找零錢
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d=50*%d+5*%d+1*%d\n",a,a/50,a%50/5,a%50%5);
}
```

##第六題:因數個數
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int k=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0) k++;
	}
	printf("%d\n",k);
}
```

##第七題:找倍數 
```c
#include <stdio.h>
int main()
{
	int a,k=0;
	for(int i=1;i<=10;i++){
		scanf("%d",&a);
		if(a%3==0){
			k++;
		}
	}
	printf("%d\n",k);
}
```

##第八題:整數轉換為等級
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90) printf("A\n");
	else if(a>=80) printf("B\n");
	else if(a>=60) printf("C\n");
	else printf("F\n");
}
```
