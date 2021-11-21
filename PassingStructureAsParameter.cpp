#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
struct Rectangle *fun(){
    struct Rectangle *p;
    p = new Rectangle;
    //p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // for c
    
    p->length = 20;
    p->breadth = 15;
    
    return p;
}
//void fun(struct Rectangle r){
//void fun(struct Rectangle *p){
//   // r.length = 20;
//    p->length = 20;
//    //cout<<"Length "<<r.length<<endl<<"Breadth :"<<r.breadth<<endl; //call by value
//    cout<<"Length "<<p->length<<endl<<"Breadth :"<<p->breadth<<endl;//call by address
//}


int main() {
    struct Rectangle *ptr = fun();
    cout<<"Length "<<ptr->length<<endl<<"Breadth :"<<ptr->breadth<<endl;
//    struct Rectangle r = {10, 5};
//    //fun(r);
//    fun(&r);
    
    //printf("The value of length %d \n The value of breadth %d \n",r.length,r.breadth);
    
    return 0;
}
