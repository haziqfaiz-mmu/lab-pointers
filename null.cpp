#include<iostream>
using namespace std;

void print(void *anything){

    cout<<anything;
}

int main(){

    int a{3};

    print(&a);
}