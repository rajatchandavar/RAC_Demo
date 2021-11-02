#include<iostream>

void increment(int value){
    ++value;
}


int main(){
    int a = 20;
    increment(a);
    std::cout << a << std::endl;
}