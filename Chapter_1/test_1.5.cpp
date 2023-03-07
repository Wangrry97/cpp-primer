/*
 * @Author: Wangrry
 * @Date: 2023-02-14 00:03:10
 * @LastEditors: Wangrry
 * @LastEditTime: 2023-02-14 00:05:42
 * @Version: 
 * @Description:  
 */
#include <iostream>

int main()
{
    std::cout << "请输入两个数：" << std::endl;
    int x, y;
    std::cin >> x >> y;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << x << std::endl;
    std::cout << " 和 " << std::endl;
    std::cout << y << std::endl;
    std::cout << "的积为：" << std::endl;
    std::cout << x * y << std::endl;
    system("pause");
    return 0;
}