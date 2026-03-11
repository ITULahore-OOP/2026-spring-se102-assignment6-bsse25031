#include "Hero.h"
#include "Guild.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
int main()
{
// GUILD . HERO
     string guildName;
     int health;
    int power;
    string name;
     cout<<"Enter guild name: \n";
     cin>>guildName;
     Guild g(guildName);
     int n;
     cout<<"Enter how many heros to add\n";
     cin>>n;
     for (int i=0;i<n;i++){
cout<<"Enter the name of the hero \n";
cin>>name;
cout<<"Enter the health \n";
cin>>health;
cout<<"Enter the power \n";
cin>>power;
 Hero* h = new Hero(name, health, power);
        g+=h;
     }
 cout<<"Total guild power is "<<g.calculateTotalGuildPower()<<"\n";
g.displayGuildStats();

// WARRIOR
int armorRating;
cout<<"Enter the armor rating \n";
cin>>armorRating;
Warrior w(name,health ,power , armorRating );
   cout<<"Armor rating " <<w.getArmor()<<" \n";
    cout<<"Effective health:"<<w.calculateEffectiveHealth()<<" \n";

// KNIGHT 
int chargeBonus ;
cout<<"Enter the charge bonus \n";
cin>> chargeBonus;
 Knight k(name ,health ,power ,armorRating,chargeBonus);
   cout<<"Charge bonus is :"<<k.getChargeBonus()<<" \n";
   cout<<"Burst damage is :"<<k.calculateBurstDamage()<<" \n";

// SPELLBLADE 
int manaPool;
cout<<"Enter the manapool value \n";
cin>>manaPool;
int spellPower;
cout<<"Enter the spell power \n";
cin>>spellPower;
SpellBlade s( name ,health,power,armorRating,manaPool,spellPower);
  s.calculateHybridDamage();


    return 0;
}