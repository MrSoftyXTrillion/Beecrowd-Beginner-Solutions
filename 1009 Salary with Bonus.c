#include<stdio.h>
int main ()
{
    char name[50];
    double SS,TVSBHH,salary,rem;
    scanf ("%s %lf %lf",&name,&SS,&TVSBHH);
    rem = TVSBHH * 0.15;
    salary = SS + rem;
    printf ("TOTAL = R$ %.2lf\n",salary);
    return 0;
}
