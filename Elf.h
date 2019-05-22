//
//  Elf.h
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#ifndef Elf_h
#define Elf_h

#include "Creature.h"
#include <iostream>
#include <string>
using namespace std;

class Elf : public Creature
{
public:
    Elf();
    Elf(int newStrength, int newHit);
    
    virtual string getSpecies();
    
    virtual int getDamage();
};

#endif /* Elf_h */
