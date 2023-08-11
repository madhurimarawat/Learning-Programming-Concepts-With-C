#include<stdio.h>

// For converting to uppercase
#include<ctype.h>

// Program for printing pattern

/*

For r=E

    A
   AB
  ABC
 ABCD
ABCDE

*/

void main(){

char i,j,s,r;

printf("Enter last character of rows: ");
scanf("%c",&r);

// Converting to uppercase
r=toupper(r);

for(i='A';i<=r;i++){
for(s=r;s>i;s--){

printf(" ");
}

for(j='A';j<=i;j++){
printf("%c",j);
}

printf("\n");
}

}
