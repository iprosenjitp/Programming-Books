#include <iostream>

using namespace std;

int main()
{
    int t, r1, r2, b;
    double crr, rrr;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d", &r1, &r2, &b);
        crr = 6.0 * r2 / (300 - b);
        rrr = 6.0 * (r1+1 - r2) / b;
        printf("%0.2lf %0.2lf\n", crr, rrr);
    }

    return 0;
}

/**
4
300 294 6
200 100 100
333 250 40
118 100 180
*/

