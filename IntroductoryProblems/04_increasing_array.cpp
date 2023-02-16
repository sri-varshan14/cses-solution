#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int min_move=0,n,prev_no=0,cur_no;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>cur_no;
        if(cur_no<prev_no){
            min_move += (prev_no - cur_no);
            cur_no = prev_no;
        }
        prev_no = cur_no;
    }
    printf("%lld",min_move);
    return 0;
}
