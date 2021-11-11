#include "max.h"
int max(int list[], int l){
    int maxi = 0;
    int i;
    for (i = 0; i<l ; i++){
        if (list[i]>maxi) maxi = list[i];
    }
    return maxi;
}



