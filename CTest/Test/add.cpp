/*************************************************************************
	> File Name: add.cpp
	> Author: weeks
	> Mail: 18402927708@163.com
	> Created Time: 2018年05月07日 星期一 19时24分46秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;
 
int main(int argc, char *argv[])
{
 if (argc != 3) {  
        std::cout << "parameter error" << std::endl;  
        return -1;   
    }     
  
    int a, b;  
    a = atoi(argv[1]);  
    b = atoi(argv[2]);  
    std::cout << a << " + " << b << " is " << a + b << std::endl;  

    return 0;
}

