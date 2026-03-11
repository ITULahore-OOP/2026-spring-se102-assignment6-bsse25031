#include "Spellblade.h"

SpellBlade::SpellBlade(string heroName,int health,int basePower,int armorRating,int manaPool,int spellPower)
:Warrior(heroName ,health ,basePower ,armorRating ),MagicalEntity(manaPool,spellPower)
{

}


int SpellBlade:: calculateHybridDamage(){
    //add power and spell power

int HybridDamage=Hero::getPower()+getSpellPower();
return HybridDamage;   

}
