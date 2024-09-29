#include <iostream>
#include "string_operations.h" // Подключаем заголовочный файл с операциями над строками

int main() {
std::string str1 = "Hello";
std::string str2 = "World";

// Используем функции из string_operations
std::cout « "Concatenation: " « concatenate(str1, str2) « std::endl;
std::cout « "String Length: " « getLength(str1) « std::endl;
std::cout « "Reversed String: " « reverseString(str1) « std::endl;
std::cout « "Is Palindrome: " « (isPalindrome("radar") ? "Yes" : "No") « std::endl;

return 0;
}
