//
//  Creature.h
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#ifndef Creature_h
#define Creature_h

#include <iostream>
using namespace std;

class Creature // this is an abstract class because it has a pure virtual function getSpecies
{
private:
    int strength; // How much damage this creature can inflict
    int hitpoints; // How much damage this creature can sustain
public:
    Creature( );
    Creature(int newStrength, int newHit);
    // … Also add appropriate accessor and mutator functions for the private member fields
    
    int getStrength();
    int getHitpoints();
    
    void setStrength(int newStrength);
    void setHitpoints(int newHit);
    
    virtual string getSpecies() = 0; // this is a pure virtual function
    virtual int getDamage(); // Returns amount of damage this creature inflicts in one round of
    // combat
};

#endif /* Creature_h */
