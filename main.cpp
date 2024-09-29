// main.cpp
#include <iostream>
#include "point.h"

int main() {
// Создаём две точки с координатами (1, 2) и (4, 6)
Point p1(1, 2);
Point p2(4, 6);

// Выводим координаты точек
std::cout « "Point 1: (" « p1.getX() « ", " « p1.getY() « ")\n";
std::cout « "Point 2: (" « p2.getX() « ", " « p2.getY() « ")\n";

// Вычисляем и выводим расстояние между точками
double dist = Point::distance(p1, p2);
std::cout « "Distance between points: " « dist « std::endl;

return 0;
}
