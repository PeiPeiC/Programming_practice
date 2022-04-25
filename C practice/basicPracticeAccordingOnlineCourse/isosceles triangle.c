#include <stdio.h>
int main(){
    int side1,side2,side3;
    printf("Please enter the lengths: ");
    scanf("%d%d%d",&side1,&side2,&side3);
    if (side1 == side2 || side2 == side3 || side1 == side3 ){
        if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
            printf("Isosceles triangle\n");
    }
    if (!(side1 == side2 || side2 == side3 || side1 == side3 )){
        if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
        printf("Not a isosceles triangle but a triangle\n");
    }
    if(!(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)){
        printf("Not a triangle\n");
    }
    return 0;
}
