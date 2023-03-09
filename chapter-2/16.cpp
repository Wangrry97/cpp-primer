/*
 * @FilePath: 16.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-02-28 15:39:46
 * @LastEditTime: 2023-02-28 15:43:16
 * @Descripttion:
 */
int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.14;
    r2 = r1;
    i = r2;
    r1 = d;
    return 0;
}
