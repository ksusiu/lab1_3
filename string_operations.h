#ifndef STRING_OPERATIONS_H
#define STRING_OPERATIONS_H

#include <string>

// Функция для конкатенации (соединения) двух строк
std::string concatenate(const std::string& str1, const std::string& str2);

// Функция для получения длины строки
int getLength(const std::string& str);

// Функция для разворота строки
std::string reverseString(const std::string& str);

// Функция для проверки, является ли строка палиндромом
bool isPalindrome(const std::string& str);

#endif // STRING_OPERATIONS_H
