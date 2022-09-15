//
// Created by 86188 on 2022/9/15.
//
#include <iostream>
using namespace std;

void myFunc6(int a){
    cout <<"a: " <<a<<endl;
}

void myFunc6(char * a){
    cout <<"a: " <<a<<endl;
}
void myfunc6(int a,int b){
    cout << "a: " <<a<< " b: " << b<< endl;
}
void myfunc6(char* a,char* b){
    cout << "a: " <<a<< " b: " << b<< endl;
}

typedef void (myTypeFunc6)(int a,int b);
typedef void (*myPFunc6)(int a,int b);
//typedef void (*myPFunc6)(char* a,char* b);
typedef int SIZE_OF;

int main117(){
    SIZE_OF a;
    myTypeFunc6 * func = NULL;
    func = myfunc6;
    func(1,2);

    myPFunc6  func6 = nullptr;
    myPFunc6 fun1 = myfunc6;
    func6 = myfunc6;
    func6(1,2);

    char buf1[] = "aaa";
    char buf2[] = "bbb";
    func6(buf1[0],buf2[0]);
    return 0;
}