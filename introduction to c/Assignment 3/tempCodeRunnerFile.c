#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0; i<a; i++)
    {
        scanf("%d",&b[i]);

    }
    int d;


     int c=0;
     int m=0;
    for(int i=0; i<a; i++)
    {
        d=b[i];
         c=0;
        for(int j=0; j<a; j++)
        {  if(i==j)
        {
            continue;
        }
         else{
            if(d==b[j])
            {
                c++;
            }
         }

        }
        if(c==0)
        {
           m++;
        }

    }

    printf("%d ",m);


}