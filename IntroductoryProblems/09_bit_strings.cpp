#include<bits/stdc++.h>
using namespace std;
long long int modv = pow(10,9) + 7; 

long long int solve(long long int a){
    long long int result=1;
    for(long long int i=0;i<a;i++){
        result*=2;
        result%=modv;
    }
    return result;
}

int main(){
    long long int n;
    cin>>n;
    std::cout<<solve(n);
    return 0;
}