#include <iostream>
#include <string.h>

using namespace std;
class Test {
public:
    Test(){
        a = 10;
        p = (char *)malloc(100);//给p变量在堆区分配了一块内存 colloc
        strcpy(p,"dsfdsfsfsd");
        cout << "构造函数"<<endl;
    }
    ~Test(){
        if(p != NULL){
            free(p);
            p = NULL;
        }
        cout << "析构函数" << endl;
    }

    void print(){
        cout << "a: "<<a << "p: "<<p <<endl;
    }

private:
    int a;
    char *p;
};


void method1(){
    Test t1;
    t1.print();
}
int main22() {
    method1();
    return 0;
}

class Test2 {
public:
    void init(int a,int b){
        m_a = a;
        m_b = b;
    }

    Test2(){
        m_a = 0;
        m_b = 0;
        cout << "无参构造函数"<< m_a << " " << m_b <<endl;
    }
    Test2(int a){
        m_a = a;
        m_b = 0;
        cout << "有参构造函数"<< m_a << " " << m_b <<endl;
    }
    Test2(int a,int b){
        m_a = a;
        m_b = b;
        cout << "有参构造函数"<< m_a << " " << m_b <<endl;
    }

    Test2(const Test2& obj){//拷贝构造函数
        m_a = obj.m_a;
        m_b = obj.m_b;
        cout << "拷贝构造函数" << m_a << " " << m_b << endl;
    }
    void print() {
        cout << "print " << m_a << " " << m_b << endl;
    }
    int getA(){
        return m_a;
    }
private:
    int m_a;
    int m_b;
};

//有参数的构造函数调用
void method2(){
    //C++编译器自动调用的构造函数
//    //1. 括号法
    Test2 t1(1);//c++编译器自动的调用对应的构造函数
    Test2 t2(2, 3);
//
//    //2. =号法
    Test2 t3 = (4, 5, 6, 7, 8);//= C++对"=" 功能增强，调用了构造函数
    Test2 t4 = 9;//这里是不是把9赋值给t4;,不是的，这里调用了Test2的构造函数

    //3. 直接调用构造函数，手动调用的构造函数
    Test2 t5 = Test2(1, 2);

    t1 = t5;//把 t5 copy给 t1 //赋值操作

    //调用了拷贝构造函数
    Test2 t6 = t5;

    Test2 t7(t5);
    //对象的初始化和对象的赋值  是两个不同的概念


}
int main12() {
    method2();
    return 0;
}
