#include<stdio.h>

int main()
{
    double p, r, t, interest;
    if(0 < p <= 100000 && 0 < r <= 20 && 0 < t <= 20){
    scanf("%lf %lf %lf", &p, &r, &t);
    interest = ( p* r* t) / 100;
    printf("%lf",interest);
    }

        return 0;
}
