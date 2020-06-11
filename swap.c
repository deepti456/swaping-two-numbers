/*swaping two numbers*/
#include<stdio.h>
main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("the numbers before swaping are a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the numbers after swaping are a=%d,b=%d\n",a,b);


}


