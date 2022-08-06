#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        count++;
    }

    printf("n = %d, count = %d\n", n, count);
    return 0;
}

