#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <string>
#include "Hero.h"
using namespace std;
class Hero{
    string heroName;
    int health;
    int basePower;
    public:
    Hero(string heroName,int health,int basePower);
    ~Hero();
    string getName() const;
    int getHealth()const;
    int getPower() ;
    void takeDamage(int);
    bool  operator > ( const Hero &h);
    int operator + ( const Hero &h);
};
#endif 