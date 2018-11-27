//
//  FavoriteThing.cpp
//  INFO450FavoriteThing
//
//  Created by David Lett on 11/26/18.
//  Copyright © 2018 David Lett. All rights reserved.
//

#include "FavoriteCar.hpp"
#include <iostream>
using namespace std;

FavoriteCar::FavoriteCar() {
    year = 0;
    color = "";
    make = "";
    model = "";
    
}

//FavoriteCar::~FavoriteCar(){
//
//}


int FavoriteCar::getYear() {return year;}
string FavoriteCar::getColor() {return color;}
string FavoriteCar::getMake() {return make;}
string FavoriteCar::getModel() {return model;}

int FavoriteCar::addCar() {
    cout << "All we need is the year(i.e. 1999), the color(i.e. red), the make(i.e. Ford) and model(i.e. Escort)" << endl;
    cout << "Now what year was the car built?"<< endl;
    cin >> year;

    cout << "Now what color is the car"<< endl;
    getline(cin, color);
    
    cout << "Now what is the car's make(i.e. Ford, Chevy, etc)?"<< endl;
    getline(cin, make);
    
    cout << "Now what is the model of the car (i.e. Escort, Camaro, etc)?"<< endl;
    getline(cin, model);
    
    return 0;
}
