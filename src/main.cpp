#include <iostream>
#include <string.h>

using namespace std;
class Test {
public:
    Test(){
        a = 10;
        p = (char *)malloc(100);//��p�����ڶ���������һ���ڴ� colloc
        strcpy(p,"dsfdsfsfsd");
        cout << "���캯��"<<endl;
    }
    ~Test(){
        if(p != NULL){
            free(p);
            p = NULL;
        }
        cout << "��������" << endl;
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
        cout << "�޲ι��캯��"<< m_a << " " << m_b <<endl;
    }
    Test2(int a){
        m_a = a;
        m_b = 0;
        cout << "�вι��캯��"<< m_a << " " << m_b <<endl;
    }
    Test2(int a,int b){
        m_a = a;
        m_b = b;
        cout << "�вι��캯��"<< m_a << " " << m_b <<endl;
    }

    Test2(const Test2& obj){//�������캯��
        m_a = obj.m_a;
        m_b = obj.m_b;
        cout << "�������캯��" << m_a << " " << m_b << endl;
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

//�в����Ĺ��캯������
void method2(){
    //C++�������Զ����õĹ��캯��
//    //1. ���ŷ�
    Test2 t1(1);//c++�������Զ��ĵ��ö�Ӧ�Ĺ��캯��
    Test2 t2(2, 3);
//
//    //2. =�ŷ�
    Test2 t3 = (4, 5, 6, 7, 8);//= C++��"=" ������ǿ�������˹��캯��
    Test2 t4 = 9;//�����ǲ��ǰ�9��ֵ��t4;,���ǵģ����������Test2�Ĺ��캯��

    //3. ֱ�ӵ��ù��캯�����ֶ����õĹ��캯��
    Test2 t5 = Test2(1, 2);

    t1 = t5;//�� t5 copy�� t1 //��ֵ����

    //�����˿������캯��
    Test2 t6 = t5;

    Test2 t7(t5);
    //����ĳ�ʼ���Ͷ���ĸ�ֵ  ��������ͬ�ĸ���


}
int main12() {
    method2();
    return 0;
}
