#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();//1 poped frop front
    while(q.front()!=q.back()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<q.front()<<endl;
    return 0;
}