#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t, len, n;
    char str[101];
    scanf("%d", &t);
    while(t--){
        scanf("%s", &str);
        len = strlen(str);
        n = str[len-1] - '0';

        if(n%2 == 0) printf("Even\n");
        else printf("Odd\n");
    }

    return 0;
}

