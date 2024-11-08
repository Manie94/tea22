#include "triangle.h"

unsigned int perimeter (Triangle* self) {

    return self->side_a + self->side_b + self->side_c
};

    //Triangle temp; Nur ein Dreieck kann erzeugt werden

Triangle* newTriangle(){

    //Triangle temp; -> Problem Verweis auf Stacklokale Variable
    Triangle* = malloc();
    return &temp; 
}