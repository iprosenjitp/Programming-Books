#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t, x, y;
    int A[101], B[101], C[202];
    scanf("%d", &t);

    while(t--){
        scanf("%d", &x);
        for(int i = 0; i < x; i++) scanf("%d", &A[i]);
        scanf("%d", &y);
        for(int i = 0; i < y; i++) scanf("%d", &B[i]);
        for(int i = 0; i < x; i++) C[i] = A[i];
        for(int i = x, j = 0; i < x+y; i++, j++) C[i] = B[j];
        sort(C, C+x+y);
        for(int i = 0; i < x+y; i++) printf("%d ", C[i]);
        printf("\n");
    }

    return 0;
}

/*
2
3 1 3 5
2 4 10
5 10 20 30 40 50
3 15 21 22
*/

