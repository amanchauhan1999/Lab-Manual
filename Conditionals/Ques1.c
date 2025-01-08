#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);

    if(n<=100000){
        printf("No Tax");
    }else if(150000>n>100001){
        //exceed tax is 10%
        float tax = n/10;
        printf("%.2f",tax);
    }else if(2,50,000>n>1,50,000){
        float tax = 5000+n*1/5;
        printf("%.2f",tax);
    }else{
        float tax = 25000+(n*30/100);
        printf("%.2f",tax);
    }
    return 0;
}
