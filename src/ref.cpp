//
// Created by 86188 on 2022/9/15.
//
#include <iostream>

using namespace std;

int getB1(){
    int a;
    a = 10;
    return a;
}

int& getB2(){
    int a;
    a = 20;
    return a;
}
int* getB3(){
    int a;
    a = 30;
    return &a;
}

int main1111(){
    int a1 = getB1();
    cout << "a1: " << a1 << endl;

//    int a2 = getB2();
//    cout << "a2: " << a2 <<endl;

    int *a3 = getB3();
    cout << "a3: " << a3 <<endl;
    return 0;
}

int getBB1(){
    static int a = 10;
    a++;
    return a;
}

int& getBB2(){
    static int b = 20;
    b++;
    cout <<"b: " << b <<endl;
    printf("&b:%p\n",&b);
    return b;
}

int main112(){
    int g1 = getBB1();
    cout<< "g1: " << g1 <<endl;
//    getBB1() = 100;

    int g2 = getBB2();
    printf("&g2:%p\n",&g2);
    cout<< "g2: " << g2 << endl;
    getBB2() = 200;
    getBB2();
    return 0;
}
