//
//  Creature.cpp
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#include "Creature.h"
#include <iostream>
using namespace std;

Creature::Creature()
{
    strength = 10;
    hitpoints = 10;
}

Creature::Creature(int newStrength, int newHit)
{
    strength = newStrength;
    hitpoints = newHit;
}

int Creature::getStrength()
{
    return strength;
}

int Creature::getHitpoints()
{
    return hitpoints;
}

void Creature::setStrength(int newStrength)
{
    strength = newStrength;
}

void Creature::setHitpoints(int newHit)
{
    hitpoints = newHit;
}


int Creature::getDamage( )
{
    int damage;
    // All creatures inflict damage, which is a
    // random number up to their strength
    damage = (rand( ) % strength) + 1;
    cout << getSpecies( ) << " attacks for " <<
    damage << " points!" << endl;
    
    return damage;
}


