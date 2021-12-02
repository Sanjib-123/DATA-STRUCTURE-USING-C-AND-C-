#include <stdio.h>
//int fact(int n){
//    if(n == 0 ){
//        return 1;
//    }else{
//        return fact(n - 1) * n;
//    }
//}

//#include<stdio.h>
//long int multiplyNumbers(int n);
//int main() {
//    int n;
//    printf("Enter a positive integer: ");
//    scanf("%d",&n);
//    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
//    return 0;
//}
//
//long int multiplyNumbers(int n) {
//    if (n>=1)
//        return n*multiplyNumbers(n-1);
//    else
//        return 1;
//}
int fact(int n){
    int num;
    int fact = 1;
    for (int i = num; i >= 1; i--) {
        fact *= i;
    }
    return fact;
}
