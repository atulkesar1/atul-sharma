#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void getInput()
{
  FILE *fp;
  fp = fopen("input.text","w");
  for(int i=0;i<100000;i++)
  fprintf(fp,"%d ",rand()%100000);
  fclose(fp);
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (key < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int len){
    int minIndex, temp;
    for(int i=0; i<len; i++){
        minIndex = i;
        for(int j=i+1; j<len; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main(){

    getInput();
    FILE *fp, *Wptr;
    int index=99;
    int arrNums[100000];
    clock_t t;
    fp = fopen("input.text", "r");
    Wptr = fopen("iTimes.txt", "w");
    for(int i=0; i<300; i++){
        for(int j=0; j<=index; j++){
            fscanf(fp, "%d", &arrNums[j]);
        }
        t = clock();
        insertionSort(arrNums, index+1);
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        fprintf(Wptr, "time taken for %d iteration is %Lf\n", (i+1), time_taken);
        printf("%d\t%lf\n", (i+1), time_taken);
        index = index + 100;
        fseek(fp, 0, SEEK_SET);
    }
    fclose(Wptr);
    Wptr = fopen("STimes.txt", "w");
    index=99;
    for(int i=0; i<300; i++){
        for(int j=0; j<=index; j++){
            fscanf(fp, "%d", &arrNums[j]);
        }
        t = clock();
        selectionSort(arrNums, index+1);
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        fprintf(Wptr, "time taken for %d iteration is %Lf\n", (i+1), time_taken);
        printf("%d\t%lf\n", (i+1), time_taken);
        index = index + 100;
        fseek(fp, 0, SEEK_SET);
    }
    fclose(Wptr);
    fclose(fp);
    return 0;
}
