#include <bits/stdc++.h>
using namespace std;

void sksm(int* x,int* y,int* sum){
    *sum= *x+*y;
    cout<<*sum<<endl;
}
 
int main(){
    // * = value at
    // & = value of
    int a=10;
    int *b=&a;
    // here int *b denotes declaration of a pointer b && int *b == int* b
    // here b is a pointer. It stores an address.
    //value of pointer b = address of a
    // here b pointer stores address of int a.
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<&a<<endl;


    int num1=4,num2=6,sum;
    sksm(&num1,&num2,&sum);

    int* ptr = &a;
    int *pt = &a;
    cout<<ptr<<endl<<pt<<endl;
    cout<<*ptr<<endl<<*pt<<endl;

    int number = 6;
    int* pr;
    // pr = stores memory address
    // *pr = value stored in pr memory location
    // &number = memory address
    pr = &number;//valid
    *pr = number;
    cout<<pr<<endl;
    cout<<&pr<<endl;
    cout<<*pr<<endl;
    cout<<&number<<endl;
    delete pr;
    return 0;
}