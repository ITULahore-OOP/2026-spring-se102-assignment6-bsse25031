  #include "Knight.h"
  Knight::Knight(string heroName ,int health ,int basePower ,int armorRating,int chargeBonus ):
  Warrior(heroName ,health ,basePower ,armorRating ){
    this->chargeBonus=chargeBonus;                        // initialization
  }

   int  Knight:: getChargeBonus(){
    return chargeBonus;                       // get charge bonus 
   }

   int  Knight::calculateBurstDamage(){
    int BurstDamage=getPower()+chargeBonus;
    return BurstDamage;                         // add charge bonus and power
   }
