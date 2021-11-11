
#include <stdio.h>
#include <limits.h>
#include "max.h"
#include "min.h"
#include "diff.h"
#include "sum.h"

#define ARR_SIZE 100


int main()
{
    int n;
    int list[ARR_SIZE];

    scanf("%d",&n);


    int i = 0;
    while (getchar() != '\n')
    {
        scanf("%d",&list[i]);
        i++;
    }

    switch (n) {
        case(0):
            printf("%d\n",max(list,i));
            break;
        case(1):
            printf("%d\n",min(list,i));
            break;
        case(2):
            printf("%d\n",diff(list,i));
            break;
        case(3):
            printf("%d\n",sum(list,i));
            break;
        default:
            printf("Данные некорректны");

    }

    return 0;
}
