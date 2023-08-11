#include<stdio.h>

// For Number pattern Printing

/*

For r=6

6 6 6 6 6 6
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1

*/

void main(){
int r,i,j;
printf("Enter number of rows: ");
scanf("%d",&r);
for(i=r;i>=1;i--){
for(j=1;j<=i;j++){
 printf("%d ",i);
}
printf("\n");
}
}
