#include <iostream>

using namespace std;

int main()
{
    int t, num1, num2, num3, temp;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d %d", &num1, &num2, &num3);

        if(num1 > num2){
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

        if(num2 > num3){
            temp = num2;
            num2 = num3;
            num3 = temp;
        }

        if(num1 > num2){
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

        printf("Case %d: %d %d %d\n", i, num1, num2, num3);
    }

    return 0;
}

