//
//  Cyberdemon.cpp
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#include "Cyberdemon.h"
#include <iostream>
#include <string>
using namespace std;

Cyberdemon::Cyberdemon(): Demon()
{
    //empty
}

Cyberdemon::Cyberdemon(int newStrength, int newHit):
Demon(newStrength, newHit)
{
    //empty
}

string Cyberdemon::getSpecies()
{
    return "Cyberdemon";
}

int Cyberdemon::getDamage()
{
    return Demon::getDamage();
}
