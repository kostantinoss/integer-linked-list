#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "list.h"


int main() {
    clock_t start, stop;
    double cpu_time;
    
    List *list;
    list = createList();
    
    int limit = 100;
    
    for (int i = 0; i < limit; i++) {
        append(list, i);   
    }
    
    start = clock();
    printf("list[%d] = %d\n", limit - 1, get(list, limit - 1));
    
    stop = clock();
    
    cpu_time = ((double)(stop - start))/CLOCKS_PER_SEC;
    printf("cpu time = %.4f sec\n", cpu_time);
    printList(list);
    
    return 0;
}
