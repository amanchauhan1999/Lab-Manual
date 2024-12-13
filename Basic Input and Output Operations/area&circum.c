#include<stdio.h>
int main(int argc, char const *argv[])
{
    float radius,area,curc;

    printf("Enter the radius of the circle :");
    scanf(" %f",&radius);

    area = (3.14*radius*radius);

    curc = (3.14*2*radius);

    printf("Area of the circle is %.2f and the cirumfrence of the circle is %.2f",area,curc);
    return 0;
}
