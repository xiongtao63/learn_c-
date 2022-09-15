//
// Created by Zero on 2019/10/10.
//

#include <iostream>
#include <string.h>

using namespace std;//ʹ�������ռ�std��׼�������ռ�


/*
 * ���캯��
 * 1. û�з���ֵ
 * 2. �������ƺ�������ͬ ClassName(){}
 * ��������
 * 1. û�з���ֵ
 * 2. �������ƺ�������ͬ ~ClassName(){}
 */
class Test {
public:

    Test() {//���캯�� ��ʼ������

        a = 10;
        p = (char *) malloc(100);//��p�����ڶ���������һ���ڴ� colloc
        strcpy(p, "adgabasdfer");

        cout << "���캯��" << endl;
    }

    ~Test() {//�������� �ͷ���Դ�Ĺ���
        //���������ǵ����ǵĶ�������֮ǰ���ɱ���������ȥ���õ�
        if (p != NULL) {
            free(p);
            p = NULL;
        }
        cout << "��������" << endl;
    }

    void print() {//��Ա����
        cout << "a: " << a << " p: " << p << endl;
    }


private:
    int a;//��ĳ�Ա����
    char *p;

};

void objTest() {
    Test t1;//������һ������
    t1.print();
}

int main001() {
    //TODO: C++�������
    cout << "C++�������" << endl;

    objTest();

    return 0;
}


//���캯������
class Test2 {
public:

    void init(int a, int b) {
        m_a = a;
        m_b = b;
    }

    Test2() {//�޲������캯��
        m_a = 0;
        m_b = 0;
        cout << "�޲ι��캯�� " << m_a << " " << m_b << endl;
    }

    Test2(int a) {//�в����Ĺ��캯��
        m_a = a;
        m_b = 0;
        cout << "�вι��캯�� " << m_a << " " << m_b << endl;
    }

    Test2(int a, int b) {//�в����Ĺ��캯��
        m_a = a;
        m_b = b;
        cout << "�вι��캯�� " << m_a << " " << m_b << endl;
    }

    Test2(const Test2 &obj) {//��һ���������캯��

        m_a = obj.m_a;
        m_b = obj.m_b;
        cout << "�������캯�� " << m_a << " " << m_b << endl;
    }

    ~Test2() {
        cout << "�������� " << m_a << " " << m_b << endl;
    }

    void print() {
        cout << "print " << m_a << " " << m_b << endl;
    }

    int getA() {
        return m_a;
    }

private:
    int m_a;
    int m_b;

};


void objTest1() {
    Test2 tl;
}

//�в����Ĺ��캯������
void objTest2() {

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

void objTest3() {
    Test2 t1;
    t1.init(2, 3);

    Test2 tArr[3];
    tArr[0].init(1, 2);
    tArr[1].init(1, 2);
    tArr[2].init(1, 2);
}


//�������캯���ĵ���ʱ��
//3.��ʵ��ȥ��ʼ��һ���������βε�ʱ�����ÿ������캯��
void copyTest(Test2 t) {

    cout << t.getA() << endl;
}

void objTest4() {

    Test2 t1(1, 2);
    Test2 t2 = t1;//1 =
    Test2 t3(t2);//2 ()
    t2.print();

    cout << "t2��ʼ�����" << endl;
    copyTest(t2);// ��������t2 ʵ�γ�ʼ���β�t��ʱ�򣬻��Զ����ÿ������캯��

}

//4.
Test2 getTest2() {
    Test2 t(4, 5);
    return t;
}

void objTest5() {

//    getTest2();

    Test2 t1 = getTest2();//��ʼ�� t1, ����һ����������(����)������ת������������ t1
    cout << "getTest2�������" << endl;
    t1.print();

}

void objTest6() {

//    getTest2();

    Test2 t1(1,2);//t1�Ѿ���ʼ����
    t1 = getTest2();//��ֵ
    cout << "getTest2�������" << endl;
    t1.print();

}
//objTest5
//�вι��캯�� 4 5
//getTest2�������
//        print 4 5
//�������� 4 5
//==========================
//objTest6
//�вι��캯�� 1 2
//�вι��캯�� 4 5
//�������� 4 5 getTest2��t������
//getTest2�������
//        print 4 5
//�������� 4 5

int main2() {
    //TODO: ���캯������
    cout << "���캯������" << endl;


//    objTest1();
//    objTest2();
//    objTest3();
//    objTest4();
    objTest5();
    cout <<"=========================="<<endl;
    objTest6();
    return 0;
}

class Test3 {
public:

    Test3() {//���캯�� ��ʼ������

        a = 10;
        p = (char *) malloc(100);//��p�����ڶ���������һ���ڴ� colloc
        strcpy(p, "adgabasdfer");

        cout << "���캯��" << endl;
    }

    Test3(const char *arg){
        a = 20;
        p = (char *) malloc(100);//��p�����ڶ���������һ���ڴ� colloc
        strcpy(p, arg);
        cout << "���캯��" << endl;
    }

    Test3(const Test3& t){//���
        a = t.a;
        p = (char *) malloc(100);
        strcpy(p,t.p);
    }

    ~Test3() {//�������� �ͷ���Դ�Ĺ���
        //���������ǵ����ǵĶ�������֮ǰ���ɱ���������ȥ���õ�
        if (p != NULL) {
            free(p);
        }
        cout << "��������" << endl;
    }

    void print() {//��Ա����
        cout << "a: " << a << " p: " << p << endl;
    }


private:
    int a;//��ĳ�Ա����
    char *p;

};

void objTest7(){
    Test3 t1("adfwe");

    Test3 t2 = t1;

    cout<<"objTest7����"<<endl;

}

int main11(){
    //TODO: ǳ���������
    cout<<"ǳ���������"<<endl;


    objTest7();
    cout <<"main ����"<<endl;

    return 0;
}