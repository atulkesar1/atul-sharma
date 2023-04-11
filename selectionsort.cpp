#include<iostream>
using namespace std;
 
void swap(int *a,int *b){
   int temp;
   temp=*a;
    *a=*b;
    *b=temp;
}
void selectionsort(int arr[],int n){
    int i,j,min_x;
    for(i=0;i<n-1;i++){
        min_x=i;
        for(j=i+1;j<n;j++)
        if(arr[j] < arr [min_x])
        min_x = j;
        if(min_x != i)
        swap(&arr[min_x],&arr[i]);

    }
}
void printArray(int arr[],int h){
for( int g=0;g<h;g++){
    cout << "   " << arr[g]<<" " ;
}}


 void insertionsort(int arr[],int n){
    int temp,j,i;
    for( i=1;i<n;i++){
         j=i-1;
       temp=arr[i];
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
 }
int main(){



    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr, n);
    insertionsort(arr,n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;






    // int f;
    //  cout<< " enter the size of ARRAY  \n " << endl;
    // cin>> f;
   // int arr[f];
   // cout<<" ENTER THE elements  " <<endl;
   // for(int k=0;k<f;k++){
   // cin >> arr[k] ;}
   //  cout << printArray(f) ;
   // cout<< " sorting of the array " << selectionsort(arr,f);
   
}