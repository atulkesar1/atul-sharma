#include<stdio.h>
int main(){
  int a[2][2],b[2][2],c[2][2];
  int p1,p2,p3,p4,p5,p6,p7;

  printf(" enter four elements of first matrix: ");
  for(int i=0;i<2;i++)
      for(int j=0;j<2;j++)
           scanf("%d",&a[i][j]);

  printf("enter the four elements of second matrix: ");
  for( int i=0;i<2;i++)
      for(int j=0;j<2;j++)
           scanf("%d",&b[i][j]);

  printf("\nThe first matrix is\n");
  for(int i=0;i<2;i++){
      printf("\n");
      for(int j=0;j<2;j++)
           printf("%d\t",a[i][j]);
  }

  printf("\nThe second matrix is\n");
  for(int i=0;i<2;i++){
      printf("\n");
      for(int j=0;j<2;j++)
           printf("%d\t",b[i][j]);
  }

  p1= (a[0][0] + a[1][1])*(b[0][0]+b[1][1]);
  p2= (a[1][0]+a[1][1])*b[0][0];
  p3= a[0][0]*(b[0][1]-b[1][1]);
  p4= a[1][1]*(b[1][0]-b[0][0]);
  p5= (a[0][0]+a[0][1])*b[1][1];
  p6= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
  p7= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);

  c[0][0]=p1+p4-p5+p7;
  c[0][1]=p3+p5;
  c[1][0]=p2+p4;
  c[1][1]=p1-p2+p3+p6;

   printf("\nAfter multiplication using \n");
   for(int i=0;i<2;i++){
      printf("\n");
      for(int j=0;j<2;j++)
           printf("%d\t",c[i][j]);
   }

   return 0;
}
