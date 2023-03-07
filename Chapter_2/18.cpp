/*
 * @FilePath: 18.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-03-01 15:51:54
 * @LastEditTime: 2023-03-01 15:53:37
 * @Descripttion: 
 */
#include<iostream>
using namespace std;

int main(){
    int i = 1, *pi = &i;
    cout << i << " " << pi << endl;
    i = 10;
    cout << i << " " << pi << endl;

    return 0;
}