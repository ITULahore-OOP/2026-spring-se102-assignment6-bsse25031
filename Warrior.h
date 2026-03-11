#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
#include "Hero.h"
using namespace std;
class Warrior :public Hero{
    int armorRating;
    public:
    Warrior(string heroName ,int health ,int basePower ,int armorRating );
    int getArmor();
    int calculateEffectiveHealth();

};
#endif 