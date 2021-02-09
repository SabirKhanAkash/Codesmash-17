#include<bits/stdc++.h>
int main()
{
    long long int T,i,N;
    scanf("%lld",&T);
    for (i=1 ; i<=T ; i++) {
        scanf("%lld",&N);
        switch (N) {
            case 0: printf("Case %lld: abcdef\n",i);
            break;
            case 1: printf("Case %lld: bc\n",i);
            break;
            case 2: printf("Case %lld: abdeg\n",i);
            break;
            case 3: printf("Case %lld: abcdg\n",i);
            break;
            case 4: printf("Case %lld: bcfg\n",i);
            break;
            case 5: printf("Case %lld: acdfg\n",i);
            break;
            case 6: printf("Case %lld: acdefg\n",i);
            break;
            case 7: printf("Case %lld: abc\n",i);
            break;
            case 8: printf("Case %lld: abcdefg\n",i);
            break;
            case 9: printf("Case %lld: abcdfg\n",i);
            break;
            default:
                break;
        }
    }

    return 0;
}
