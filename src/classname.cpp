//
// Created by 86188 on 2022/9/15.
//
#include <iostream>
#include "../includes/Teacher1.h"
using namespace std;

int aaa;
int main(){
    Teacher1 t1;
    t1.setAge(33);
    cout <<"t1.age: " <<t1.getAge()<<endl;

    float a;
    a = 3.14;

    ::aaa = 4;
    cout<<"local a: " << a << " global a: " << ::aaa <<endl;
    return 0;
}
