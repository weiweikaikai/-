/*************************************************************************
	> File Name: main.cpp
	> Author: weeks
	> Mail: 18402927708@163.com
	> Created Time: 2018年05月07日 星期一 19时46分05秒
 ************************************************************************/

#include<iostream>
#include"gtest/gtest.h"
using namespace std;

int Factorial( int n )
{
    if(n==2) 
        return 100; //出个错
    return n<=0? 1 : n*Factorial(n - 1);
}

TEST(TestFactorial, OtherInput) ////第一个参数是测试用例名，第二个参数是测试名：随后的测试结果将以"测试用例名.测试名"的形式给出
{
    EXPECT_EQ(1, Factorial(1));
    EXPECT_EQ(2, Factorial(2));
    EXPECT_EQ(6, Factorial(3));
    EXPECT_EQ(40320, Factorial(8));
}



int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc,argv); //用来处理test相关的命令行开关也可不加
    return  RUN_ALL_TESTS(); 
}

