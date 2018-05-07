/*************************************************************************
	> File Name: main.cpp
	> Author: weeks
	> Mail: 18402927708@163.com
	> Created Time: 2018年05月07日 星期一 19时46分05秒
 ************************************************************************/

#include<iostream>
#include"gtest/gtest.h"
using namespace std;

class A  
{  
private:
    int _a;  
public:
    A(int a);
    ~A();
    void add(int a);
    int getA();  
}; 
 
A::A(int a) {  
    this->_a = a;  
}  
A::~A() {  
}  
void A::add( int a ){  
    this->_a += a;  
}  
int A::getA( ){
    return this->_a;  
} 


class A_test : public testing::Test {
protected:
    A* _p_a;
    virtual void SetUp() { //初始化函数
        this->_p_a = new A(1);
    }
    virtual void TearDown() { //清理函数
        if (this->_p_a) {
            delete this->_p_a;
        }
    }
};
//TEST_F与TEST的区别是，TEST_F提供了一个初始化函数（SetUp）和一个清理函数(TearDown)，在TEST_F中使用的变量可以在初始化函数SetUp中初始化，在TearDown中销毁，并且所有的TEST_F是互相独立的，都是在初始化以后的状态开始运行，一个TEST_F不会影响另一个TEST_F所使用的数据


//第一个测试，参数A_test是上面的那个类，第二个参数FirstAdd是测试名称
TEST_F(A_test,FirstAdd){
    EXPECT_EQ(1, _p_a->getA());
    _p_a->add(3);
    EXPECT_EQ(4,_p_a->getA());
}

TEST_F(A_test,SecondAdd){
    EXPECT_EQ(1,_p_a->getA());
    _p_a->add(5);
    EXPECT_EQ(6,_p_a->getA());
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc,argv); //用来处理test相关的命令行开关也可不加
    return  RUN_ALL_TESTS(); 
}

