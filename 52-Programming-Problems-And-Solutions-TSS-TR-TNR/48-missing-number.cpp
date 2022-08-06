#include <iostream>

using namespace std;

/*
int main()
{
    int t, n, num;
    int A[100005];
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &n);

        for(int j = 1; j <= n; j++) A[j] = 0;

        for(int j = 0; j < n-1; j++){
            scanf("%d", &num);
            A[num] = 1;
        }

        for(int j = 1; j <= n; j++){
            if(A[j] == 0){
                printf("%d\n", j);
                break;
            }
        }
    }

    return 0;
}
*/

int main()
{
    int t, n, num;
    scanf("%d", &t);
    while(t--){
        int sum1 = 0, sum2 = 0;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++) sum1 += i;

        for(int i = 0; i < n-1; i++){
            scanf("%d", &num);
            sum2 += num;
        }
        printf("%d\n", sum1-sum2);
    }
}

/*
2
7 2 1 4 6 5 3
9 9 4 5 8 6 1 7 2
*/

