/*
 * @Author: Wangrry
 * @Date: 2023-02-14 21:38:08
 * @LastEditors: Wangrry
 * @LastEditTime: 2023-02-14 21:41:06
 * @Version: 
 * @Description: 
 */
#include<iostream>

int main(){
    int val = 50, sum = 0;
    while (val <=100)
    {
        sum += val;
        ++val;
    }
    std::cout << sum << std::endl;
    system("pause");
    return 0;
}