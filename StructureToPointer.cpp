#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
    
};

int main() {
    //struct Rectangle r = {10, 5}; //for c programming we need to write struct
    //struct Rectangle *p = &r;
    
    //struct Rectangle *p; // here struct is defined for c programming
    Rectangle *p; // struct is not necessary for c++
    
   // p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); //malloc function used for c programming
    p = new Rectangle; //we don't need malloc for c++
    
   // r.length = 15;
    //(*p).breadth = 5;
    
    p->length = 15;
    p->breadth = 5;
    
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
   
    return 0;
}
