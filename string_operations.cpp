#include "string_operations.h"
#include <algorithm> // Для использования std::reverse

// Реализация функции конкатенации строк
std::string concatenate(const std::string& str1, const std::string& str2) {
return str1 + " " + str2; // Соединяем строки с пробелом между ними
}

// Реализация функции для получения длины строки
int getLength(const std::string& str) {
return str.length();
}

// Реализация функции разворота строки
std::string reverseString(const std::string& str) {
std::string reversed = str;
std::reverse(reversed.begin(), reversed.end()); // Разворачиваем строку
return reversed;
}

// Реализация функции для проверки, является ли строка палиндромом
bool isPalindrome(const std::string& str) {
std::string reversed = reverseString(str); // Разворачиваем строку
return str == reversed; // Сравниваем исходную и развернутую строку
}
