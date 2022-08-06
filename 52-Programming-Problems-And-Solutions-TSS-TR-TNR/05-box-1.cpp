#include <iostream>

using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("*");
            }
            printf("\n");
        }
        if(t == 0) break;
        printf("\n");
    }

    return 0;
}

