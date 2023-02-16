#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int mcount=1,count=1;
    string line;
    cin>>line;
    for(int i=1;i<line.length();i++){
        if(line[i] == line[i-1]){
            count++;
        }
        else{
           if(mcount < count)
               mcount = count;
           count = 1;
        }
    }
    if(mcount < count)
        mcount = count;
    printf("%lld",mcount);
    return 0;
}
