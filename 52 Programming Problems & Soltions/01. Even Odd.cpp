#include <iostream>

using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if(n%2 == 0) printf("Even\n");
        else printf("Odd\n");
    }

    return 0;
}

