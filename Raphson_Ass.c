#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float x0,x1,h,m,n;
    printf("Find the root of the equation x^3-9x+1 = 0");
    printf("\nEnter the initial value of x0: ");
    scanf("%f",&x0);
    x1=x0;
    do{
        x0=x1;
        m = pow(x0,3)-9*x0+1;
        n = 3*pow(x0,2)-9;
        h = -m/n;
        x1 = x0 + h;
    }
    while(fabs(x1-x0)>0.00001);
    printf("\nThe root of the equation is : %f",x1);
}
