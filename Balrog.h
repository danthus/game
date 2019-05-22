//
//  Balrog.h
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#ifndef Balrog_h
#define Balrog_h

#include "Demon.h"
#include <iostream>
#include <string>
using namespace std;

class Balrog: public Demon
{
public:
    Balrog();
    Balrog(int newStrength, int newHit);
    
    virtual string getSpecies();
    
    virtual int getDamage();
};


#endif /* Balrog_h */
