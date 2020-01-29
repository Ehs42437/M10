#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int x = 0, y = 0;
int arr[SIZE] = {60, 80, 30, 40, 50};

void swap(int *pt1, int *pt2){
    int backUp = 0;

    backUp = *pt1;
    *pt1 = *pt2;
    *pt2 = backUp;
}

void viewArray(int arr[]){
    int cnt = 0;
    for(cnt = 0; cnt < SIZE; cnt++){
        printf("%d\t", arr[cnt]);
    }
}


int sortArray(){

    if(arr[y]<arr[x])
        swap(&arr[y], &arr[x]);


    if(x == SIZE-1)
        x = y++;

    if(y == SIZE-1){
        viewArray(arr);
        return 0;
    }

  return sortArray(x+=1);
}

int main()
{
    sortArray();
    return 0;
}
