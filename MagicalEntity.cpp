 #include "MagicalEntity.h"
  MagicalEntity::MagicalEntity(int manaPool ,int spellPower) {
    this->manaPool=manaPool;           // initialize 
    this->spellPower=spellPower;
  }

  
  // get manapool
    int  MagicalEntity::getMana()const{
        return manaPool;
    }


    // get spell power
    int MagicalEntity:: getSpellPower()const{
        return spellPower;
    }