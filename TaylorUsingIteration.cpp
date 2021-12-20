#include<stdio.h>
#include<iostream>
using namespace std;

double e(int x, int n){
    static double s = 1;
    
    for(;n > 0 ; n--){
        s = 1 + s*x/n;
    }
    return s;
}

int main(){
    cout<<e(2 , 10)<<endl;
    return 0;
}
