//
// Created by William Uhl on 9/5/15.
//

#include <math.h>
#include "Point.h"
#include <iostream>
#include <iomanip>

using namespace std;

// computeArea finds the area of a triangle with three points

double computeArea(Point &a, Point &b, Point &c){

    double side1 = a.distanceTo(b);
    //cout << side1 << endl;        used to make sure calculations were correct
    double side2 = b.distanceTo(c);
    //cout << side2 << endl;        used to make sure calculations were correct
    double side3 = c.distanceTo(a);
    //cout << side3 << endl;        used to make sure calculations were correct

    double area = .25*(sqrt((4*pow(side1,2)*pow(side2,2))-pow(pow(side1,2)+pow(side2,2)-pow(side3,2),2)));

    return area;
}

int main(void) {

    //local variable for input and area
    double x;
    double y;
    double z;
    double area;

    cout << "Welcome to triangle area computation" << endl;

    //Get first point
    cout << "Please input the x coordinate for the first point" << endl;
    cin >> x;
    cout << "Please input the y coordinate for the first point" << endl;
    cin >> y;
    cout << "Please input the z coordinate for the first point" << endl;
    cin >> z;
    Point point1(x,y,z);

    //get second point
    cout << "Please input the x coordinate for the second point" << endl;
    cin >> x;
    cout << "Please input the y coordinate for the second point" << endl;
    cin >> y;
    cout << "Please input the z coordinate for the second point" << endl;
    cin >> z;
    Point point2(x,y,z);

    //get third point
    cout << "Please input the x coordinate for the third point" << endl;
    cin >> x;
    cout << "Please input the y coordinate for the third point" << endl;
    cin >> y;
    cout << "Please input the z coordinate for the third point" << endl;
    cin >> z;
    Point point3(x,y,z);


    //compute the area of the users triangle
    area = computeArea(point1, point2, point3);

    //print out the found area
    cout << fixed << setprecision(2) << "The area of the triangle you entered is: " << area << endl;

    return 0;
}

