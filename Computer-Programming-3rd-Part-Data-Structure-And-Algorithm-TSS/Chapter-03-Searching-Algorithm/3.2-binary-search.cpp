#include <iostream>

using namespace std;

int A[1000];

int binarySearch(int n, int x)
{
    int left = 0;
    int right = n-1;

    while(left <= right){
//        int mid = (left + right) / 2;
        int mid = left + (right - left) / 2; // Better equation
        if(A[mid] == x) return mid;
        else if(A[mid] > x) right = mid - 1;
        else left = mid + 1;
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

    int ans = binarySearch(n, x);

    if(ans != -1) printf("At position: %d\n", ans);
    else printf("Not found\n");

    return 0;

    return 0;
}

/*
10
10 20 30 40 50 60 70 80 90 100

*/

