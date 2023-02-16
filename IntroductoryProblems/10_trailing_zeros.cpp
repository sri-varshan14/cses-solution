
#include<bits/stdc++.h>
using namespace std;

long long int solve(long long int a){
    long long int two_mul=0,five_mul=0,ten_mul=0,temp_mul;
    for(long long int i=1;i<=a;i++){
        long long int temp=i;
        while(temp%10==0){
            temp = temp/10;
            ten_mul++;
        }
        if(temp%2==0){
            temp_mul = (temp/2);
            temp = temp - (temp_mul*2);
            two_mul+=temp_mul;
        }
        if(temp%5==0){
            temp_mul = (temp/5);
            temp = temp - (temp_mul*5);
            five_mul+=temp_mul;
        }
    }
    return (ten_mul + min(two_mul,five_mul));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin>>n;
    std::cout<<solve(n);
    return 0;
}