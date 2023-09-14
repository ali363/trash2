#include<stdio.h>
#include<stdbool.h>
int main(){
//While Loop
int A=0;
while (A<=5){
    printf("%d\n",A);
    A++;
}


// Do/While Loop
int B=0;
do{
    printf("%d\n",B);
    B++;
}
while (B<=5);


//For Loop
int C;
for (C=55; C<=60; C++){
    printf("%d\n",C);
}


int D;
for (D=0; D<=20; D=D+2){
    printf("%d\n",D);
}


//Nested Loops
/* int E,F;
//outer loop
for (E=0;E<=6;++E){
    printf("Outer: %d\n",E);
//inner loop
    for (F=0;F<=6;++F){
    printf("Inner: %d\n",F);
}
} */


return 0;
}
