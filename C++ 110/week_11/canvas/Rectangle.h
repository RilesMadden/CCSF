// Week 11 - Canvas Post
// Rectangle Class
// Riley Madden, 110b Spring 2024


// Rectangle.h - Rectangle header file
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    private:
        double width;
        double length;
        char *name;
        void initName(char* n);
    public:
        //constructors
        Rectangle();
        Rectangle(double, double, const char*);

        void setWidth(double);
        void setLength(double);
        void setName(const char *);
        void setWidth(char *);
        void setLength(char *);
        double getWidth() const;
        double getLength() const;
        void printName() const;

        //destructor
        ~Rectangle();
};

#endif