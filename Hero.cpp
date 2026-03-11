 
 #include "Hero.h"

 // parametrized constructor
 Hero::Hero(string heroName,int health,int basePower){
    this->heroName=heroName;
    this->health=health;                    // initialization 
    this->basePower=basePower;
 }
    Hero::~Hero(){
        cout<<"It ended \n";

    }
    // getters
     string Hero:: getName() const{
        return heroName;
     }

    int  Hero::getHealth() const{
        return health;
    }
    int  Hero::getPower(){
        return basePower;
    }
    void Hero:: takeDamage(int){
        if (health<0){                                          // if health drops below 0 
            health=0;                                           // set health to 0
            cout<<"Health cannot drop below zero 0\n";
            int damageValue;
            cout<<"Enter the damage value \n";
            cin>>damageValue;
            health-=damageValue;

        }
    }
bool  Hero::operator > ( const Hero &h){
    if ( basePower>h.basePower){
    return true ;                         // operator overlaoding 
}                                         // checking if base power is greater than the other base power 
    else 
    return false;
}

   int Hero ::operator + ( const Hero &h){
    return health+h.health ;                     // operator overlaoding  
                                                 // adding 
   }
  