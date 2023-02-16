#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int num;
    cin>>num;
    if(num>1 && num<4)
        printf("NO SOLUTION");
    else{
        long long int i;
        for(i=2;i<=num;i+=2)
            printf("%lld ",i);
        for(i=1;i<=num;i+=2)
            printf("%lld ",i);
    }
    return 0;
}
