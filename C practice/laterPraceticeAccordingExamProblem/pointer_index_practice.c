#include <stdio.h>
#include <stdlib.h>
int main() {
    int size;

    printf("the size of array:\n");
    scanf("%d", &size);

    int *original = malloc(size * sizeof(int));

    printf("enter the elements:\n");
    for(int i = 0; i < size; i++) {
        printf("original[%d] = ", i);
        scanf("%d" , original+i);
    }

    printf("before:\n");
    for(int i = 0; i < size; i++) {
        printf("original[%d] = %d\n", i, *(original+i));
    }

    int *result = malloc(size * sizeof(int));
    for(int t = 0; t < size; t++) {
        printf("result[%d] = %d\n", t, *(result+t));
    }

    int odd_index = 0;
    int even_index = size-1;

    for(int j=0;j<size;j++)
    {
        if(original[j]%2==1)
            result[odd_index++]=original[j];
        else
            result[even_index--]=original[j];
    }
    printf("after:\n");
    for(int k = 0; k < size; k++) {
        printf("result[%d] = %d\n", k, *(result+k));
    }
    free(original);
    free(result);
return 0;
}
