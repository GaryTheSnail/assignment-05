/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

#ifndef FUNCTION_H
#define FUNCTION_H

class Point {                                               //Point class
    private:
        double x, y;
    public:
        Point(double x = 0, double y = 0);                  //default constructor
    
        double get_x();                                     //getters
    
        double get_y();
    
        ~Point();                                           //default destructor
};

class Shape {
    public:
        virtual bool contains(const Point & p) const = 0;   //contains prototype
    
        virtual ~Shape() = default;                         //virtual default destructor
};

class Rectangle : public Shape {                            //Rectangle class
    public:
        bool contains(const Point & p) const;
};

class Ellipse : public Shape {                              //Ellipse class
    public:
        bool contains(const Point & p) const;
};

class Square : public Rectangle {                           //Square class
    public:
        bool contains(const Point & p) const;
};

class Circle : public Ellipse {                             //Circle class
    public:
        bool contains(const Point & p) const;
};

#endif
