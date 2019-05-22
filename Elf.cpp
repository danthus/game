//
//  Elf.cpp
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#include "Elf.h"
#include <iostream>
using namespace std;

Elf::Elf(): Creature()
{
    //empty
}

Elf::Elf(int newStrength, int newHit):
Creature(newStrength, newHit)
{
    //empty
}

string Elf::getSpecies()
{
    return "Elf";
}

int Elf::getDamage()
{
    int damage = Creature::getDamage();
    if ((rand( ) % 10)==0)
    {
        cout << "Magical attack inflicts " << damage<<
        " additional damage points!" << endl;
        damage = damage * 2;
    }
    return damage;
}

