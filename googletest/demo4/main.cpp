/*************************************************************************
	> File Name: main.cpp
	> Author: weeks
	> Mail: 18402927708@163.com
	> Created Time: 2018年05月07日 星期一 19时46分05秒
 ************************************************************************/

#include<iostream>
#include"gtest/gtest.h"
using namespace std;

int Fuc()
{
    int *ptr = NULL;
    *ptr = 100;
    return 0;
}

//传说中的 gtest死亡测试
TEST(TestDeathTest, Nullptr) //第一个参数是测试用例名，第二个参数是测试名：随后的测试结果将以"测试用例名.测试名"的形式给出
{
    ASSERT_DEATH(Fuc(), "");
}




int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc,argv); //用来处理test相关的命令行开关也可不加
    return  RUN_ALL_TESTS(); 
}

