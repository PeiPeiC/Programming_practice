#include <stdio.h>
void exchange_sort(int array,int size);
int main(){
    int array[6]={27,7,2,9,4,85};
    exchange_sort(array,6);
    for(int i=0;i<6;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
void exchange_sort(int array,int size){
    for(int i=0;i<size-1;i++){
        for(int j =i+1;j<size;j++)
            if(array[i]>array[j]){
                int temp =array[i];
                array[i]=array[j];
                array[j]=temp;
            }
    }


}
