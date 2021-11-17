  #include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main() {
    
    int x = 10;
    int y = 15;
    int sum;
    
    sum = add(10, 15);
    
    cout<<"The result is :"<<sum<<endl;
    
    
   
    return 0;
}
