#include <iostream>
using namespace std;

void fun(int *A,int n){
   // cout<<sizeof(A)/sizeof(int)<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<" "<<endl;
        
}

int main() {
    int A[ ] = {2, 3, 4, 5, 6};
    int n = 5;
    fun(A,n);
    
    //cout<<sizeof(A)/sizeof(int)<<endl;
    
    for(int x: A)
        cout<<x<<" ";
    
    return 0;
   
}
