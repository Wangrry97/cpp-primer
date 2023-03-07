/*
 * @Author: Wangrry
 * @Date: 2023-02-14 21:46:07
 * @LastEditors: Wangrry
 * @LastEditTime: 2023-02-14 21:54:10
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
    while (x <= y)
    {
        std::cout << x++ << std::endl;
    }

    system("pause");
    return 0;
}