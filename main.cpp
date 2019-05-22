//
//  main.cpp
//  assignment2 Q1
//
//  Created by Amos Zhou on 24/7/2018.
//  Copyright © 2018 Amos Zhou. All rights reserved.
//

#include "Creature.h"
#include "Demon.h"
#include "Elf.h"
#include "Human.h"
#include "Cyberdemon.h"
#include "Balrog.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

void battleArena(Creature& creature1, Creature& creature2)
{
    while(creature1.getHitpoints() > 0 &&
          creature2.getHitpoints() > 0)
    {
        creature2.setHitpoints(creature2.getHitpoints() - creature1.getDamage());
        
        creature1.setHitpoints(creature1.getHitpoints() - creature2.getDamage());
    }
    
    if(creature1.getHitpoints()<= 0 && creature2.getHitpoints() <= 0)
        cout<<"tie !"<<endl;
    else if(creature1.getHitpoints() <=0 && creature2.getHitpoints() >0)
        cout<<"creature 2 wins"<<endl;
    else
        cout<<"creature 1 wins"<<endl;
}

int main()
{
    srand(time(0));
    Balrog B1 (40,1000);
    Human H1 (80,1000);
    
    battleArena(B1, H1);
    return 0;
}
