
#include <stdio.h>

int main() {
    // Write C code here7
    int size;

    printf("enter the size of array\n");
    scanf("%d",&size);
    int number[size];

    for(int i=0;i<size;i++){
        printf("enter the element in index:%d",i);
        scanf("%d",&number[i]);


    }
    for(int i=0;i<size;i++){
        printf("%d",number[i]);
    }

    return 0;
}