/*
 * By: Yannick Amegan
 * 11/2/15
 * -- LineSegment Class Implementation --
 */

#include"LineSegment.hpp"

LineSegment::LineSegment(Point end1, Point end2){
    setEnd1(end1);
    setEnd2(end2);
}

void LineSegment::setEnd1(Point startIn){
    start = startIn;
}

Point LineSegment::getEnd1(){
    return start;
}

void LineSegment::setEnd2(Point endIn){
    end = endIn;
}

Point LineSegment::getEnd2(){
    return end;
}

double LineSegment::length(){
    return start.distanceTo(end);
}

double LineSegment::slope(){
    return (end.getYCoord() - start.getYCoord()) / (end.getXCoord() - start.getXCoord());
}
