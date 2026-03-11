#include "Warrior.h"
Warrior::Warrior(string heroName ,int health ,int basePower ,int armorRating ):Hero(heroName,health,basePower){
    this->armorRating=armorRating;                   // initialize
}
    int Warrior:: getArmor(){
        return armorRating;          // get armor rating
    }
    int  Warrior::calculateEffectiveHealth(){
        int EffectiveHealth = getHealth()+(armorRating*2);  // calculate effective health
        return EffectiveHealth;
    }
