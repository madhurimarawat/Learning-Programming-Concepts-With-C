#include<stdio.h>

// Program for printing pattern

/*

For n=5

AAAAA
BBBB
CCC
DD
E

*/

void main(){

int i,j,n;
char al='A';

printf("Enter number of rows: ");
scanf("%d",&n);

printf("Pattern is:\n");

for(i=n;i>=1;i--){
for(j=i;j>=1;j--){

 printf("%c",al);
}
al++;

if(i!=1){printf("\n");}
}
}

