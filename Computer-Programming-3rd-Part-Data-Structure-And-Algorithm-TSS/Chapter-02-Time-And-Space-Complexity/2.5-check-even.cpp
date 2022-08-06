#include <iostream>

using namespace std;

int main()
{
    int n, even[102];

    for(int i = 0; i <= 100; i++){
        even[i] = 0;
    }

    for(int i = 0; i <= 100; i += 2){
        even[i] = 1;
    }

    scanf("%d", &n);
    if(even[n] == 1){
        printf("%d is even number.\n", n);
    }
    else{
        printf("%d is odd number.\n", n);
    }

    return 0;
}

