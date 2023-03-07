/*
 * @Author: Wangrry
 * @Date: 2023-02-14 22:04:02
 * @LastEditors: Wangrry
 * @LastEditTime: 2023-02-21 22:17:23
 * @Version: 
 * @Description: 
 */
#include <iostream>
int main()
{
    int x, y;
    std::cout << "请输入两个整数" << std::endl;
    std::cin >> x >> y;
    if (x > y)
    {
        x = x + y;
        y = x - y;
        x = x - y;
    }
    for (int i = x; i <= y; i++)
    {
        std::cout << i << std::endl;
    }

    system("pause");
    return 0;
}