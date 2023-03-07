/*
 * @FilePath: 17.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-02-28 15:44:53
 * @LastEditTime: 2023-02-28 15:46:14
 * @Descripttion: 
 */
#include<iostream>
int main(){
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << "  " << ri << std::endl;
    return 0;
}