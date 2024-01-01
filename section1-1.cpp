#include<iostream>  //전처리기

int main(){
    int x = 2;  // literal
    int y = x + 3;
    std::cout << y << std::endl;    // cout이라는 함수가 std라는 네임스페이스에 있다. <<라는 operator를 통해 y를 출력한다.
    return 0;
}