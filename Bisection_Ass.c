#include<stdio.h>
#include<conio.h>
#include<math.h>
float fun(float);
void main(){
    float a,b,x,s=0.00001;
    printf("Find the root of the equation x^3-5x+3=0");
    printf("\nEnter the value for A and B :");
    scanf("%f%f",&a,&b);
    if(fun(a)*fun(b)>0){
        printf("\nThere is no root between %f and %f",a,b);
        exit(0);
    }
    do{
        x=(a+b)/2;
        if(fun(a)*fun(x)<0)
        b=x;
        else if(fun(b)*fun(x)<0)
        a=x;
        else
        break;
    }
    while(fabs(b-a)>s);
    printf ("\nThe root is = %f",x);
}float fun(float a){
    return(pow(a,3)-5*a+3);
}