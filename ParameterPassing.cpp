#include <iostream>
#include<stdio.h>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    
}

int main() {
    int x =10;
    int y = 20;
    //swap(x, y);
    swap(&x, &y);
    
    cout<<"No after swapping :"<<x<<" "<<y<<endl;
    printf("%d %d",x, y);
  
    return 0;
}
