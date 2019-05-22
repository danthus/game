//
//  Cyberdemon.h
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#ifndef Cyberdemon_h
#define Cyberdemon_h

#include "Demon.h"
#include <iostream>
#include <string>
using namespace std;

class Cyberdemon: public Demon
{
public:
    Cyberdemon();
    Cyberdemon(int newStrength, int newHit);
    
    virtual string getSpecies();
    
    virtual int getDamage();
};


#endif /* Cyberdemon_h */
