#include<bits/stdc++.h>
int main()
{
    long long int T,i;
    double pi = 141593,r;
    scanf("%lld",&T);
    for (i = 1 ; i<=T ; i++) {
        scanf("%lf",&r);
        printf("Case #%lld: %0.2lf\n",i,(r*r)/2);
    }

    return 0;
}
