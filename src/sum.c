#include "sum.h"
#include "min.h"
int sum(int list[],int l){
    int s = 0;
    int m = min(list,l);
    int i;
    for ( i = 0; i<l ; i++){
        if (list[i]==m) break;
        s = s + list[i];

    }

    return s;

}

