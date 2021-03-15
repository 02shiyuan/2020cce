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

##p2=p1, 然後 *p2=400
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    *p2=400;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    return 0;
}
```

##用陣列 int n[3]={10, 20, 30}, 再用指標, 去改裡面的值
```C
#include <stdio.h>
int main()
{
    int n[3]=10,20,30;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    int *p=&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    int *p2=&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    p2=p;
    *p2=400;
    return 0;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    return 0;
}
```

##使用指標 *p , 把變數n1 的值改掉
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    return 0;
}
```
##使用指標 *p2 , 把變數n3 的值改掉
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p2=&n3;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    return 0;
}
```
##9
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p=666;
}
```
##10
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

int main()
{
    int *p=&a[2];
    *p=222;
        printAll();
    p=p+2;
    *p=666;
        printAll();
    p--;
    *p=555;
        printAll();
}
```
##11
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
    for(int i=0;i<10;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

int main()
{
    int *p=&a[2];
    *p=200;
        printAll();
    int *p2=p+4;
    *p=666;
        printAll();
    p--;
    *p=555;
        printAll();
        return 0;
}
```
##12
```C
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int *p=(int*)malloc(sizeof(int)*10);
    return 0;
}
```

