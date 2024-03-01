#include<stdio.h>
int main ()
{
    int EmN,Wh;
    double ApH,salary;
    scanf ("%d %d %lf",&EmN,&Wh,&ApH);
    salary = Wh * ApH;
    printf ("NUMBER = %d\n",EmN);
    printf ("SALARY = U$ %.2lf\n",salary);
    return 0;
}
