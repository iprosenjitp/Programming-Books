#include <iostream>

using namespace std;

int main()
{
    int cnt = 0;
    for(int i = 1000; i > 0; i--){
        printf("%d\t", i);
        cnt++;
        if(cnt == 5){
            printf("\n");
            cnt = 0;
        }
    }

    return 0;
}

