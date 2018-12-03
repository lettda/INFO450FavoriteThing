//
//  ThingsList.cpp
//  INFO450FavoriteThing
//
//  Created by David Lett on 11/26/18.
//  Copyright © 2018 David Lett. All rights reserved.
//

#include "ThingsList.hpp"
#include <iostream>
#include "FavoriteCar.hpp"

//Construct new empty array
ThingsList::ThingsList() {
    size = 0;
}

bool ThingsList::duplicateCar(FavoriteCar car) {
    for (int i = 0; i < size; i++) { //loop of the properties of the newly created car and determine if any are the same
        if ((car.getColor() == list[i].getColor()) && (car.getYear() == list[i].getYear()) && (car.getMake() == list[i].getMake()) && (car.getModel() == list[i].getModel())) {
            
            cout << "Duplicate Item" << endl; //if all of the properties match item is a duplicate
            
            return false;
        }
    }
    return true;
}

//Method takes in input of a car object to add that car into the list
int ThingsList::addCarToList() {
    FavoriteCar newCar;
    newCar.addCar(); //Run add car method from FavoriteCar class
    if (!duplicateCar(newCar)) {
        cout << "Invalid entry duplicate car" << endl;
//        newCar.~FavoriteCar();
        return 0;
    } else { //if at least one of the properties are different add the new car to the lit
            list[size] = newCar;
            size++; //new item added increase list size my one
        cout << "Car successfully added" << endl;
        }
    return 0;
}
 //loop over each item in the list of cars and display it to the user
void ThingsList::displayList() {
    for (int j = 0; j < size; j++) {
        cout << list[j] << endl;
    }
    
}
