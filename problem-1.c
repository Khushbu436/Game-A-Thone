#include<stdio.h>

int sub(int a,int b){
    return a-b;
}
int main(void){
    int a,b;

    printf("Kindly Enter value of a and b to substract them : ");
    scanf("%d %d",&a,&b);

    printf("substraction of %d and %d is : %d\n",a,b,sub(a,b));

    return 0;
} 
