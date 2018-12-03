//
//  main.cpp
//  INFO450FavoriteThing
//
//  Created by David Lett on 11/26/18.
//  Copyright © 2018 David Lett. All rights reserved.
//

#include <iostream>
#include <string>
#include "FavoriteCar.hpp"
#include "ThingsList.hpp"

using namespace std;


int main() {

    char answer = ' ';
    char displayUserList = ' ';
    
    FavoriteCar myCar;
    ThingsList carList;
    
    do {
        cout << "This program will help you keep track of your favorite cars" << endl;
        cout << "In a moment you will asked to input your first item" << endl;
        
        carList.addCarToList(); //add thing to the list
        
        cout << "Would you like to enter another item? (Y/N)" << endl;
        cin >> answer;
        
        cin.ignore(); //clear past user input
        cin.clear();
    } while (answer == 'Y' || answer == 'y');
    
    cout <<"Would you like to see your list of favorite things? (Y/N)"<<endl;
    cin >> displayUserList;
    
    if (displayUserList == 'Y' || 'y') {
        carList.displayList();
    }
    return 0;
}
