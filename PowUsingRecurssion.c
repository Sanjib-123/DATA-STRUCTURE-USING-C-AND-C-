#include <stdio.h>

int Pow(int m, int n){
    if(n == 0){
        return 1;
        
    }else
        return Pow(m,n - 1) * m;
}
int Ipow(int m,int n){
    if(n == 0){
        return 1;
    }else if(n % 2 == 0){
        return Pow(m * m, n/2);
    }else
        return m * Pow(m * m,(n - 1)/2);
}

int main() {
    //int r = Pow(4,3);
    int r = Ipow(9, 3);
    printf(" %d ", r);
    
    return 0;
}
