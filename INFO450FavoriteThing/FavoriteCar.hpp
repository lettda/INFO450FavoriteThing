//
//  FavoriteThing.hpp
//  INFO450FavoriteThing
//
//  Created by David Lett on 11/26/18.
//  Copyright © 2018 David Lett. All rights reserved.
//

#ifndef FavoriteCar_hpp
#define FavoriteCar_hpp

#include <stdio.h>
#include <string>
#include <iostream>


using namespace std;


class FavoriteCar {
    int year;
    string color;
    string make;
    string model;
    
public:
    FavoriteCar();
    string getMake();
    string getModel();
    int getYear();
    string getColor();
    int addCar();
    
    friend ostream & operator << (ostream &os , const FavoriteCar &);
};


#endif /* FavoriteCar_hpp */
