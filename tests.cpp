//
// Created by Andrei on 3/16/2022.
//

#include <cassert>
#include <iostream>
#include "patrat.h"
void teste1(){
    /*
    Square s1;
    assert(s1.getx()==0);
    assert(s1.gety()==0);
    assert(s1.getlat()==0);
    Square s2(2,2,10);
    assert(s2.getx()==2);
    assert(s2.gety()==2);
    assert(s2.getlat()==10);
    s1.setx(5);
    assert(s1.getx()==5);
    s1.setx(7);
    assert(s1.getx()==7);
    s1.sety(5);
    assert(s1.gety()==5);
    s1.sety(7);
    assert(s1.gety()==7);
    s1.setlat(5);
    assert(s1.getlat()==5);
    s1.setlat(7);
    assert(s1.getlat()==7);
    Square s3(3,3,6);
    Square s4 = s3;
    assert(s4.getx()==3);
    assert(s2.getx()==2);
    assert(s2.area(10)==100);
    assert(s2.perim(10)==40);
    */
    Point2D p1(2,3);
    assert(p1.getx()==2);
    assert(p1.gety()==3);
    p1.setx(4);
    p1.sety(4);
    assert(p1.getx()==4);
    assert(p1.gety()==4);
    Point2D p2 = p1;
    assert(p2.getx()==4);
    assert(p2.gety()==4);
    p2.setx(2);
    p2.sety(3);
    assert(p2.getx()==2);
    assert(p2.gety()==3);
    Point2D p4 = p1;
    Square s1(p4, 10);
    assert(s1.getlat()==10);
    Point2D p3=p1;
    //p3 = s1.getCorner();
    //std::cout << p3.getx();
    //assert(p3.getx()==4);
    //assert(p3.gety()==4);
    //assert(s1.getCorner().getx()==4);
    s1.setlat(5);
    assert(s1.getlat()==5);
    assert(s1.area(5)==25);
    assert(s1.perim(5)==20);
    Square s2 = s1;
    assert(s2.getlat()==5);
}