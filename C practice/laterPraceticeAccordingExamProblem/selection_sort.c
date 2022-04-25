#include <stdio.h>
int max_key(int low,int high);
void swap(int low,int high);
int main(){
    int count =6;
    int entry[6]={27,7,2,9,4,85};
    for(int position=count-1;position>0;position--){
        int max= max_key(0,position);
        swap(max,position);
    }
    for(int i=0;i<6;i++){
        printf("%d ",entry[i]);
    }
    
    return 0;
}
int max_key(int low,int high){
    int largest,current;
    int entry[6]={27,7,2,9,4,85};

    largest=low;
    for(current=low+1;current<=high;current++)
        if(entry[largest]<entry[current]) 
            largest=current;
return largest;
}
void swap(int a,int b){
    int temp =a;
    a=b;
    b=temp;
}