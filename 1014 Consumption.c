#include<stdio.h>
int main ()
{
    double avgConsumption,x,y;
    scanf ("%lf %lf",&x,&y);
    avgConsumption = x/y;
    printf ("%.3lf km/l\n",avgConsumption);\
    return 0;
}
