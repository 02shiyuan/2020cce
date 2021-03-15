
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
