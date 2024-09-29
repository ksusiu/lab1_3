// point.h
#ifndef POINT_H
#define POINT_H

// Класс Point описывает точку на плоскости с координатами x и y
class Point {
private:
double x; // Координата x
double y; // Координата y

public:
// Конструктор по умолчанию
Point();

// Конструктор с параметрами
Point(double xVal, double yVal);

// Метод для получения координаты x
double getX() const;

// Метод для получения координаты y
double getY() const;

// Метод для задания координаты x
void setX(double xVal);

// Метод для задания координаты y
void setY(double yVal);

// Статический метод для вычисления расстояния между двумя точками
static double distance(const Point& p1, const Point& p2);
};

#endif // POINT_H
