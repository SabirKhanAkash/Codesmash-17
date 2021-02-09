#include<bits/stdc++.h>
int main()
{
    long long int T,N,N1,i,j,k;
    scanf("%lld",&T);
    for (i = 1 ; i<=T ; i++) {
        scanf("%lld",&N);
        for (j = 0 ; j<N ; j++) {
            for (k = 0 ; k<N ; k++) {
                if (k>=1 && j!=0 && j!=(N-1) && k<(N-1))
                    printf(" ");
                else
                    printf("*");
            }
            if (k == N)
                printf("\n");
        }
        printf("\n");
    }
    return 0;
}
