#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t, num;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &num);
        int sq_root = sqrt(num);

        if(sq_root*sq_root == num) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}

/**
3
16
18
196
*/

/**
while(t--){
    scanf("%d", &num);
    double sq_root = sqrt(num);

    if(ceil(sq_root) == floor(sq_root)) printf("YES\n");
    else printf("NO\n");
}
*/

/**
while(t--){
    scanf("%d", &num);
    double sq_root = sqrt(num);
    double defference = ceil(sq_root) - floor(sq_root);

    if(defference < 0.000001) printf("YES\n");
    else printf("NO\n");
}
*/

