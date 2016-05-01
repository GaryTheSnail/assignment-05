/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

#include <iostream>
#include "function.h"

double Point::get_x() {                             //getters
    return x;
}

double Point::get_y() {
    return y;
}

bool Rectangle::contains(const Point & p) const {         //Rectangle contains method
    return 0;
}

bool Ellipse::contains(const Point & p) const {           //Ellipse contains method
    return 0;
}

bool Square::contains(const Point & p) const {            //Square contains method
    return 0;
}

bool Circle::contains(const Point & p) const {            //Circle contains method
    return 0;
}
