// point.cpp
#include "point.h"
#include <cmath> // Для функции sqrt

// Конструктор по умолчанию: задаёт точку в начале координат
Point::Point() : x(0), y(0) {}

// Конструктор с параметрами: задаёт точку с переданными координатами
Point::Point(double xVal, double yVal) : x(xVal), y(yVal) {}

// Получить координату x
double Point::getX() const {
return x;
}

// Получить координату y
double Point::getY() const {
return y;
}

// Установить координату x
void Point::setX(double xVal) {
x = xVal;
}

// Установить координату y
void Point::setY(double yVal) {
y = yVal;
}

// Вычислить расстояние между двумя точками
double Point::distance(const Point& p1, const Point& p2) {
double dx = p1.getX() - p2.getX();
double dy = p1.getY() - p2.getY();
return sqrt(dx * dx + dy * dy); // Теорема Пифагора
}
