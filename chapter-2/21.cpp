/*
 * @FilePath: 21.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-03-01 17:54:17
 * @LastEditTime: 2023-03-01 17:56:14
 * @Descripttion: 
 */
int i = 0;
double* dp = &i; //非法，*的位置应该在dp之前，且i与dp类型不同
int *ip = i;//非法，ip应该指向地址，而不是一个确切的值
int *p = &i;//正确