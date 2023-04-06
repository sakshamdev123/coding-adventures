#include<bits/stdc++.h>
using namespace std;

class dog{
    public:
    int dog_no;
    void get_dog_no(){
        cout<<"Enter number of dogs :: ";
        cin>>dog_no;
        cout<<endl;
    }
};

class cat{
    public:
    int cat_no;
    void get_cat_no(){
        cout<<"Enter number of cats :: ";
        cin>>cat_no;
        cout<<endl;
    }
};

class animals : public dog , public cat{
    public:
    int x;
    animals operator+(animals test){
    animals temp;
    temp.x=x+test.x;
    return temp;
    }
    int animal_count = dog_no + cat_no;
    void display(){
        cout<<"Total number of animals :: "<<animal_count<<endl;
    }
};

int main(){
    dog d;
    d.get_dog_no();
    cat c;
    c.get_cat_no();
    animals a;
    a.display();
    return 0;
}
