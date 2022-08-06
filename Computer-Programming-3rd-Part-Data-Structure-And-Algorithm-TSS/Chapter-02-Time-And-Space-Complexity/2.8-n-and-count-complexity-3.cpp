#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                count++;
            }
        }
    }

    printf("n = %d, count = %d\n", n, count);
    return 0;
}
