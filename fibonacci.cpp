#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int smallpart=fibonacci(n-1)+fibonacci(n-2);
    return smallpart;
    
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
}