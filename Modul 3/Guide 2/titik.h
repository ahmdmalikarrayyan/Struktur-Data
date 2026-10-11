#ifndef TITIK_H_INLUDED
#define TITIK_H_INLUDED

struct Titik {
    float x ;
    float y ;
} ;

void inputTitik(Titik &t) ;
void tampilTitik(Titik t) ;
float hitungJarak(Titik t1, Titik t2) ;

#endif