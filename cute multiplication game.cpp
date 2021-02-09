#include<bits/stdc++.h>
int main()
{
    long long int m,n,N,Q,i,t,mult=1,j,k;
    int arr[100000];
    scanf("%lld%lld",&N,&Q);
    for (i=0 ; i<N ; i=i+1)
        scanf("%lld",&arr[i]);
    for (j=1 ; j<=Q ; j++) {
        scanf("%lld%lld",&m,&n);
        if (m>n)
        {
            t = m;
            m = n;
            n = t;
        }
        for (k = m ; k<=n ; k=k+1) {
            mult = mult * arr[k-1];

        }
        printf("%lld\n",mult);
        mult = 1;

    }

    return 0;
}
