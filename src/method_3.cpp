//
// Created by 86188 on 2022/9/15.
//

#include <iostream>
using namespace std;


void test11(int a){
    cout << "a: " <<a<<endl;
}

void test11(char const*a){
    cout << "a: " <<a<<endl;
}

void test11(int a,int b){
    cout << "a: " <<a<< " b: " << b<< endl;
}

void test11(int a,int b,int c = 3){

}
void test11(int a,int b,int c,int){

}
//int test11(int a ){
//
//}

int main116(){
    test11(1);
    test11("aaa");
//    test11(1,2);产生二义性
    return 0;
}