#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        char line[100000];
        scanf(" %[^\n]", line);
        char *p, *e;
        long input;
        int count = 0;
        p = line;

        for(p = line; ; p = e){
            input = strtol(p, &e, 10);
            if(p == e){
                break;
            }
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}


/**
int main()
{
    char line[] = "1 -2 10000 -50 20 7 445";
    char *p, *e;
    long input;
    int count = 0;
    p = line;

    for(p = line; ; p = e){
        input = strtol(p, &e, 10);
        if(p == e){
            break;
        }
        count++;
    }
    printf("%d\n", count);

    return 0;
}
*/

