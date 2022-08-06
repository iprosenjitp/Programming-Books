#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t, a, b, c;
    double s, area;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &a, &b, &c);
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s-a) * (s-b) * (s-c));
        printf("Area = %0.3lf\n", area);
    }
    return 0;
}

/*
3
24 30 18
13 18 15
20 20 20
*/
