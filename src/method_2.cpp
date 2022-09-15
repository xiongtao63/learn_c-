//
// Created by 86188 on 2022/9/15.
//

#include <iostream>

using namespace std;
void myPrint1(int x = 1){
    cout << "x: " << x<<endl;
}
void myPrint12(int a,int b,int c= 1,int d = 2){
    cout<<"a: " << a<<" b: " <<b<<" c: "<<c<<" d: "<<d<<endl;
}

int main114(){
    myPrint1(4);
    myPrint1();

    myPrint12(1,2,3,4);
    myPrint12(5,6);
    myPrint12(7,8,9);
    return 0;
}

void myPrint13(int a,int b,int){
    cout<<"a: " << a<<" b: " <<b<<endl;
}
void myPrint14(int a,int b,int =0){
    cout<<"a: " << a<<" b: " <<b<<endl;
}
int main115(){
//    myPrint13(1,2);
    myPrint13(1,2,3);
    myPrint14(1,2,3);
    return 0;
}


