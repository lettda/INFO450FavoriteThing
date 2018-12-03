//
//  ThingsList.hpp
//  INFO450FavoriteThing
//
//  Created by David Lett on 11/26/18.
//  Copyright © 2018 David Lett. All rights reserved.
//

#ifndef ThingsList_hpp
#define ThingsList_hpp

#include <stdio.h>
#include "FavoriteCar.hpp"


class ThingsList
{
    FavoriteCar list[100];
    int size;
    
public:
    ThingsList();
    void displayList();
    int addCarToList();
    bool duplicateCar(FavoriteCar car);
};

#endif /* ThingsList_hpp */
