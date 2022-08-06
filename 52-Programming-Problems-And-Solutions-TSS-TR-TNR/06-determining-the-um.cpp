#include <iostream>

using namespace std;

int main()
{
    int t, n, lsd, msd;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        lsd = n%10;
        while(n){
            msd = n%10;
            n = n/10;
        }
        printf("sum = %d\n", lsd+msd);
    }

    return 0;
}

