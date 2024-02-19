#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int n;scanf("%d",&n);
    int z=n/2;
    int arr[z];
    if(n%2!=0){arr[z-1]=3;}
     if(n%2==0){arr[z-1]=2;}
    
    for(int i=0;i<z-1;i++){
        arr[i]=2;
    }
    printf("%d\n",z);
    for(int j=0;j<z;j++){
    printf("%d ",arr[j]);
    }
}
