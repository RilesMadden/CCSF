// Week 10 - Question 2
// Rectangle Class
// Riley Madden, CS 110b

// Rectangle.h - Rectangle header file
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    private:
        double width;
        double length;
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const {return width;};
        double getLength() const {return length;};
        double getArea() const;
        double getPerimeter() const;
        bool isSquare() const;
};

#endif