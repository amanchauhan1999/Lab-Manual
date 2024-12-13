#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    float  in,f,c;
   printf("Hit 1 if you want to change celcius into farenheit\n");
   printf("Hit 2 if you want to change farenheit into celcius\n");
   scanf(" %d",&a);
   printf("Enter the data you want to change :\n");
   scanf(" %f",&in);

   switch (a)
   {
   case 1:
        f = (in*1.8)+32;
        printf("%.2f",f);
    break;
   case 2:
        c =(in-32)*0.55;
        printf("%.2f",c);
        break;
   default:
        printf("Select the valid changement options");
    break;
   }
    return 0;
}
