#include<stdio.h>
#include<stdlib.h>
int f(const void*a,const void*b){return*(int*)a-*(int*)b;}
int main(){
    int n,a[20],i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,4,f);
    for(i=0;i<n;i++)
        if(!i||a[i]!=a[i-1])
            printf("%d%s",a[i],i==n-1?"":" ");
}