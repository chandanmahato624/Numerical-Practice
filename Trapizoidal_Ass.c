#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n,i;
    float y[25],a,b,m,h,s1=0,s;
    printf("Enter the number of interval :");
    scanf("%d",&n);
    printf("\nEnter the value for A and B:");
    scanf("%f%f",&a,&b);
    a= 3.14*a/180;
    b= 3.14*b/180;
    h= (b-a)/n;
    for(i=0;i<=n;i++)
    y[i]=sin(a+i*h);
    for(i=1;i<n;i++)
    s1+=y[i];
    s= (y[0]+y[n]+2*s1)*h/2;
    printf("\nThe value of integration: %f",s);
}