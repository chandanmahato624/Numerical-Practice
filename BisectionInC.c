#include<stdio.h>
#include<math.h>
#define pr printf
#define sc scanf
int main(){
    float a,b,x,s;
    pr("The equation is : x^3 -x -1= 0\n");
    pr("Enter the value of A(-) : ");
    sc("%f",&a);
    pr("Enter the value of B(+) : ");
    sc("%f",&b);
    x = (a+b)/2;
    s = (x*x*x)-x-1;
    for(int i=0; i<20; i++){
        if(s>0){
            b=x;
        }else{
            a=x;
        }
        x = (a+b)/2;
        s = (x*x*x)-x-1;
    }
    printf("The root = %f",x);

}