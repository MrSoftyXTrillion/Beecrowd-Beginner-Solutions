#include<stdio.h>
int main ()
{
    int count,yrs,mnths,dys;
    scanf ("%d",&count);
    yrs = count / 365;
    mnths = (count % 365) / 30;
    dys = ((count % 365) % 30);
    printf ("%d ano(s)\n",yrs);
    printf ("%d mes(es)\n",mnths);
    printf ("%d dia(s)\n",dys);
    return 0;
}
