#include<stdio.h>
int main ()
{
    int cp1,np1;
    int cp2,np2;
    double pp1,pp2,total;
    scanf ("%d %d %lf",&cp1,&np1,&pp1);
    scanf ("%d %d %lf",&cp2,&np2,&pp2);
    total = (np1*pp1)+(np2*pp2);
    printf ("VALOR A PAGAR: R$ %.2lf\n",total);
    return 0;
}
