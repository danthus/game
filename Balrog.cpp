//
//  Balrog.cpp
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#include <cstdlib>
#include "Balrog.h"
#include <iostream>
#include <string>
using namespace std;

Balrog::Balrog(): Demon()
{
    //empty
}

Balrog::Balrog(int newStrength, int newHit):
Demon(newStrength, newHit)
{
    //empty
}

string Balrog::getSpecies()
{
    return "Balrog";
}

int Balrog::getDamage()
{
    int damage = Demon::getDamage();
    int damage2 = (rand() % getStrength()) + 1;
    cout << "Balrog speed attack inflicts " << damage2 <<
    " additional damage points!" << endl;
    damage = damage + damage2;
    
    return damage;
}
