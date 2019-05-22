//
//  Human.h
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#ifndef Human_h
#define Human_h

#include "Creature.h"
#include <iostream>
#include <string>
using namespace std;

class Human : public Creature
{
public:
    Human();
    Human(int newStrength, int newHit);
    
    virtual string getSpecies();
    
    virtual int getDamage();
};


#endif /* Human_h */
