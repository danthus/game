//
//  Human.cpp
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#include "Human.h"
#include <iostream>
using namespace std;

Human::Human(): Creature()
{
    //empty
}

Human::Human(int newStrength, int newHit):
Creature(newStrength, newHit)
{
    //empty
}

string Human::getSpecies()
{
    return "Human";
}

int Human::getDamage()
{
    return Creature::getDamage();
}
