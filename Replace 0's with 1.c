#include<stdio.h>

//Program to replace all 0's with 1 in a given integer

int main(){

int inputNumber=0;
scanf("%d",&inputNumber);



int lencheck = inputNumber;
int len =1;
while(lencheck != 0){
    lencheck = lencheck/10;
    len++;
}
int array[len];
for(int i =0;i<len-1;i++){
    array[i] = inputNumber%10;
    inputNumber = inputNumber/10;
    if(array[i] == 0){
        array[i] =1;
    }
}

for(int i =len-1;i>=0;i--){
   printf("%d",array[i]);
}




}
