/*
 * @Author: Wangrry
 * @Date: 2023-02-14 21:58:43
 * @LastEditors: Wangrry
 * @LastEditTime: 2023-02-14 22:01:38
 * @Version:
 * @Description:
 */
#include <iostream>
int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << sum << std::endl;
    system("pause");
    return 0;
}