//
// Created by 86188 on 2022/9/15.
//

#include <iostream>

using namespace std;

void printAA();
#define MYFUNC(a,b) ((a)<(b)) ? (a): (b)

inline void printBB(){
    int a = 10;
    cout << "a: "<< a<<endl;
    for (int i = 0;i<1000;i++){

    }
}

int main113(){
    printAA();
    MYFUNC(1,2);
    printBB();
    return 0;
}

void printAA(){
    //定义实现
    cout<<"printA"<<endl;//C++编译器有可能会给你内联
}
