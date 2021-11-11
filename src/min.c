
#include "min.h"
#include <limits.h>
int min(int list[],int l){
    int mini = INT_MAX;
    int i;
    for (i = 0; i<l ; i++){
        if (list[i]<mini) mini = list[i];
    }

    return mini;

}

