// Circle.h - Circle header file
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
    private:
        double x;
        double y;
        double radius;
    public:
        void setRadius(double r);
        void setX(double value);
        void setY(double value);
        double getRadius() const;
        double getX() const;
        double getY() const;
        double getArea() const;
        bool containsPoint(double xValue, double yValue) const;
};

#endif
