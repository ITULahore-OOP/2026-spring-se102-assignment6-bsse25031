#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include <iostream>
#include <string>
#include "MagicalEntity.h"
#include "Warrior.h"
using namespace std;
class SpellBlade :public  Warrior,public MagicalEntity{
    public:
    SpellBlade(string heroName,int health,int basePower,int armorRating,int manaPool,int spellPower);
    
    int calculateHybridDamage();

};
#endif