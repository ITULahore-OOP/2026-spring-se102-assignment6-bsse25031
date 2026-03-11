#ifndef KNIGHTH
#define KNIGHT_H
#include <iostream>
#include <string>
#include "Warrior.h"
using namespace std;
class Knight:public Warrior{
    int chargeBonus;
    public:
    Knight(string heroName ,int health ,int basePower ,int armorRating,int chargeBonus );
   int  getChargeBonus();
   int calculateBurstDamage();
};
#endif 