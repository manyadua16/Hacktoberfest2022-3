#include<stdio.h>
    int x,y,c;
    
    printf("Enter the three number to compare\n");
    scanf("%d%d%d",&x,&y,&c);
    if(x>y)
    {
        if (x>c){
            printf("greatest no.%d",x);
        }
        else {
            printf("greatest no.%d",c);
        }
    }
    else
    {
        if(y>c)
            {
            printf("greatest no.%d",y);
            }
    else {
            printf("greatest no.%d",c);
        }
    }
 
   return 0;
}
