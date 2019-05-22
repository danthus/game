//
//  Demon.h
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#ifndef Demon_h
#define Demon_h

#include "Creature.h"
#include <iostream>
#include <string>
using namespace std;

class Demon : public Creature
{
public:
    Demon();
    Demon(int newStrength, int newHit);
    
    virtual string getSpecies();
    
    virtual int getDamage();
};


#endif /* Demon_h */
