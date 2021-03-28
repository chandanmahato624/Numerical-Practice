#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float);
void main(){
    float fx0,fx1,fx2,x0,x1,x2,eps=0.00001;
    printf("Find the root of the equation x62-2x-3 = 0");
    printf("\nEnter value for x0 and x1 :");
    scanf("%f%f",&x0,&x1);
    if(f(x0)*f(x1)>0){
        printf("\nThere is no root between %f and %f",x0,x1);

    }do{
        fx1 = f(x1);
        fx0 = f(x0);
        x2 = (x0*fx1-x1*fx0)/(fx1-fx0);
        fx2 = f(x2);
        if(fabs(fx2)<eps){
            printf("\nThe root is %f",x2);
        }
        if(fx2*fx0<0)
        x1 = x2;
        else
        x0=x2;
    }
    while(1);
}
float f(float x){
    return(pow(x,2)-2*x-3);
}