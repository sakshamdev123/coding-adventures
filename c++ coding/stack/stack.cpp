#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(9);
    s.push(8);
    s.push(7);
    s.push(6);
    s.push(5);
    s.push(4);
    s.pop();//4 poped from top
    for(int i=0;i<5;i++){
        cout<<s.top()<<endl;;
        s.pop();
    }
    return 0;
}