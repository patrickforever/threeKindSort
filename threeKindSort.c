#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define maxSize 5
int main()
{
    int i  , j  , swapValue , swapIndex , temp;
    int a[maxSize] = {6,2,9,4,5};
    /**********bubble sort*****/
    for(i=0;i<maxSize;i++){
        for(j=i+1;j<maxSize;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("bubble sort\n");
    for(i=0;i<maxSize;i++)
        printf("%d",a[i]);
    printf("\n");

    /******select sort*****/
    for(i=0;i<maxSize;i++){
        swapValue = a[i];
        swapIndex = i;
        for(j=i+1;j<maxSize;j++){
            if(swapValue > a[j]){
                swapIndex = j;
                swapValue = a[j];
            }
        }
        temp = a[i];
        a[i] = a[swapIndex];
        a[swapIndex] = temp;
    }
    printf("select sort\n");
    for(i=0;i<maxSize;i++)
        printf("%d",a[i]);
    printf("\n");
    /******insert sort*******/
    for(i=1;i<maxSize;i++){
        swapValue = a[i];
        swapIndex = i;
        for(j=0;j<i;j++){
            if(swapValue < a[j]){
                swapIndex = j ;
                break;
            }
        }
        temp = a[i];
        a[i] = a[swapIndex];
        a[swapIndex] = temp;
    }
    printf("insert sort\n");
    for(i=0;i<maxSize;i++)
        printf("%d",a[i]);
    printf("\n");


}
