#include "hashtable.h"

int main(void) {
    ht h;
    int status = create_ht(&h);

    if(status != 0){
        printf("Ошибка");
        return 0;
    }

    for(int i = 1; i < 11; ++i){
        set_pair(&h, i, i * i);
    }
    for(int i = 1; i < 11; ++i) {
        int result = -1;
        status = find_pair(&h, i, &result);

        printf("Операция поиска %d,  %d\n", i, status);
        if(status == 0){
            printf("%d\n", result);
        }
    }

    free_ht(&h);
    return 0;
}