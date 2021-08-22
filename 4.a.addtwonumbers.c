#include<stdio.h>
#include<conio.h>
void main()
/*********************************
* Author Rie
* Purpose to read teo numbers from user and print sum and average
**********************************/
{
    int fn, sn, sum;
    float average;

    // Read values from user
    printf("Enter first number:");
    scanf("%d",&fn);
    printf("Enter second number:");
    scanf("%d",&sn);

    //Logic
    sum=fn+sn;
    average=sum/2.0;

    printf("Sum = %d, Average=%f",sum,average);
    getch();
}
