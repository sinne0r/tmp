
#include "diff.h"
#include "min.h"
#include "max.h"

int diff(int list[],int l){
    return max(list,l) - min(list,l);
}

