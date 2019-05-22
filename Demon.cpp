//
//  Demon.cpp
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#include "Demon.h"
#include <iostream>
using namespace std;

Demon::Demon(): Creature()
{
    //empty
}

Demon::Demon(int newStrength, int newHit):
Creature(newStrength, newHit)
{
    //empty
}

string Demon::getSpecies()
{
    return "Demon";
}

int Demon::getDamage()
{
    // Demons can inflict damage of 50 with a 5% chance
    int damage = Creature::getDamage();
    if ((rand( ) % 100) < 5)
    {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50 "
        << " additional damage points!" << endl;
    }
    return damage;
}
