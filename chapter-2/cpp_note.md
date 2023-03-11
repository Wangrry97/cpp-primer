<!--
 * @FilePath: cpp_note.md
 * @Author: Wang Renruoyu
 * @Date: 2023-02-21 14:23:33
 * @LastEditTime: 2023-02-21 15:23:57
 * @Descripttion: 
-->
# C++笔记

## 位、字节、字

1 Word = 8 Byte = 64 Bit

## C++中，short，int，long，longlong的区别

|数值类型|关键字|字节大小|数值范围|
|-----|-----|-----|-----|
带符号短整型|short|2|-32768 ~ 32767|
无符号短整形|unsigned short|2|0 ~ +65535|
带符号整形|int|4|-2147483648 ~ +2147483647|
无符号整形|unsigned int|4|0 ~ 4294967295|
带符号长整型|long|4|-2147483648 ~ +2147483647|
无符号长整型|unsigned long|4|0 ~ 4294967295|
带符号|long long|8|-9223372036854775808 ~ 9223372036854775807|
无符号|unsigned longlong|8|0 ~ 48446744073709551615|

>注意，超长整型和无符号超长整型是在 C++11 中引入的。

## C++中，float，double，'long double'的区别

|数值类型|关键字|字节大小|数值范围|
|-----|-----|-----|-----|
|单精度|float|4|-3.4028235×10^38^ ~ 3.4028235×10^38^|
|双精度|double|8|-1.7×10^38^ ~ 1.7×10^38^|
|高双精度|long double|8||