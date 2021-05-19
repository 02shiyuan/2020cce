#include<stdio.h>
int a[100];
int main()
{
    int n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ans=0;
    for(int k=0;k<n-1;k++){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                ans++;
            }
        }
    }
    printf("Optimal train swapping takes %d swaps,\n",ans);
}
