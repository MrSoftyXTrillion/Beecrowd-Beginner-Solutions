#include<stdio.h>
int main ()
{
    int STIH,AVGS,s;
    double TS;
    scanf ("%d %d",&STIH,&AVGS);
    s = AVGS * STIH;
    TS = s/12.0;
    printf ("%.3lf\n",TS);
    return 0;
}
