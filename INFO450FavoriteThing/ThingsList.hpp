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

class ThingList
{
protected:
    ThingList[100];
    int listSize;
    
public:
    ThingList();
    void displayList();
    int addThing();
};

#endif /* ThingsList_hpp */
