#include<stdio.h>
#include<iostream>
using namespace std;

double e(int x, int n){
    static double s = 1;
    if(n == 0){
        return s;
    }else{
        s = 1 + s * x/n;
        return e(x , n - 1);
    }
}

int main(){
    cout<<e(2 , 10)<<endl;
    return 0;
}
