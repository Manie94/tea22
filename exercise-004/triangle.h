//Include Guard
#ifndef My_FANCY_TRIANGLE_H
#define My_FANCY_TRIANGLE_H
#include <fmt/chrono.h>
#include <fmt/format.h>

struct Triangle {
    unsigned int side_a;
    unsigned int side_b;
    unsigned int side_c;
};

//vorwärtsdeklaration
Triangle* newTriangle();
Triangle* newTriangleWithValues(unsigned int a, unsigned int b, unsigned int c);

void freeTriangle(Triangle* ptr);

unsigned int perimeter(Triangle* self);

#endif
