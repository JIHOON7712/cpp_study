#include<iostream>

int main(){
    int x = 123;
    x = 20; // 메모리의 주소를 가지는 게 lvalue, 값만 가지는 게 rvalue  
    std::cout<< x << std::endl;

    return 0;
}