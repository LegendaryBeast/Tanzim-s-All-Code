#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>=m)
       {
         printf("%d",n-m);
       }
    else
        {
           int c=0;
           while(m>n)
           {
               if(m%2==0)
               {
                   m=m/2;
                   c++;
               }
               else
               { m+=1;
               c++;}
           }
           printf("%d",c+(n-m));
        }
        
 
}
