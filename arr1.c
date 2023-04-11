#include<stdio.h>
 int main(){
     int a;
     int arr[a];
     printf("enter the size of elements\n");
     scanf("%d",&a);
     printf("enter the elements\n");
     for(int i=0;i<a;i++){
         scanf("%d",&arr[i]);}
         printf("\n");
         for(int j=0;j<a;j++){
             printf(" printed elements are arr[%d]=%d\n",j,arr[j]);
         }
     
     return 0;
 }