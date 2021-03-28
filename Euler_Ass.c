#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n,i;
    float x,y,h,m;
    printf("Enter the step length(h):");
    scanf("%f",&h);
    printf("\nEnter the initial value of X and Y :");
    scanf("%f%f",&x,&y);
    printf("\nEnter the point whose value want to see :");
    scanf("%f",&m);
    n = (m-x)/h;
    for(i=1;i<=n;i++){
        y=y+(pow(x,2)+pow(y,2))*h;
        x+=h;
    }
    printf("\nThe value of Y(%f)=%f",m,y);
}