#include<stdio.h>

// For Number pattern Printing

/*

For r=6

     1
    22
   333
  4444
 55555
666666

*/

void main(){
int i,s,j,r;
printf("Enter number of rows: ");
scanf("%d",&r); printf("Pattern is :\n");
for(i=0;i<r;i++){
for(s=r-1-i;s>0;s--){
printf(" ");
}
 for(j=i+1;j>0;j--){
  printf("%d",i+1);
}
if(i<r-1){printf("\n");}
}
}