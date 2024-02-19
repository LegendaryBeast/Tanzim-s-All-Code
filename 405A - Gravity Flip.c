#include<stdio.h>
#include<stdlib.h>

int cmp (const int *a, const int *b){
    return (*a-*b);
}
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,4,cmp);
    
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
}
