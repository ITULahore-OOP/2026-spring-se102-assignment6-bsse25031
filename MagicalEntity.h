#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include <iostream>
#include <string>
using namespace std;
class MagicalEntity{
    int manaPool;
    int spellPower;      // attributes 
    public:
    MagicalEntity(int manaPool ,int spellPower) ;
    int getMana()const;
    int getSpellPower()const;
};
#endif