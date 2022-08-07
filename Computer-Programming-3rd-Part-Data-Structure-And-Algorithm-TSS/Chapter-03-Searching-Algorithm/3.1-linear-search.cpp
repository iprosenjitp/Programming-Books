#include <iostream>

using namespace std;

int A[1000];

int linearSearch(int n, int x)
{
    for(int i = 0; i < n; i++){
        if(A[i] == x) return i;
    }

    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &A[i]);

    int x = 10;
    scanf("%d", &x);

    int ans = linearSearch(n, x);

    if(ans != -1) printf("At position: %d\n", ans);
    else printf("Not found\n");

    return 0;
}

/*
10
10 20 30 40 50 60 70 80 90 100

*/

