#include<bits/stdc++.h>
using namespace std;

long long int solve(long long int a, long long int b){
    long long int result;

    if(a<b){
        result = (b%2==1)? ((b*b)-a+1):(((b-1)*(b-1))+a);
    }
    else{
        result = (a%2==0)? ((a*a)-b+1):(((a-1)*(a-1))+b);
    }

    return result;
}

int main(){
    long long int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b; 
        cout<<solve(a,b)<<"\n";
    }
    return 0;
}