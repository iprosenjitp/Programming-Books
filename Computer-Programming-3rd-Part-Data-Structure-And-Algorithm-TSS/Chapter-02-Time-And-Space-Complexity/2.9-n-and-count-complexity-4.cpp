#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            count++;
        }
    }

    for(int i = 0; i < n; i++){
        count++;
    }

    printf("count = %d\n", count);

    return 0;
}

