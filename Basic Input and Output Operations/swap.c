#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the number you want to swap :");
    scanf("%d %d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    
    return 0;
}
