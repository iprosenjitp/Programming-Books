#include <iostream>

using namespace std;

int main()
{
    int t, num;
    long long int fact;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &num);
        fact = 1;
        for(int i = 2; i <= num; i++){
            fact *= i;
        }
        printf("%lld\n", fact);
    }

    return 0;
}

/**
3
6
10
15
*/
