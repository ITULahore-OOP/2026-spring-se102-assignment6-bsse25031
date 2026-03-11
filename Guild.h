#ifndef GUILD_H
#define GUILD_H
#include <iostream>
#include <string>
#include "Hero.h"
using namespace std;
class Guild {
    string guildName;
    Hero*roster[15];
    int memberCount;
    public:
    Guild(string guild);
    ~Guild();
    int calculateTotalGuildPower();
    void displayGuildStats();
    void operator +=(Hero *newHero);
friend  ostream& operator << (ostream& out, const Guild& g);

};
#endif