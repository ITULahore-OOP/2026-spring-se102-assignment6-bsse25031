 #include "Guild.h"
 Guild::Guild(string guildName){
    this->guildName=guildName;    // initialize 
    
     memberCount=0;           
 }
   Guild:: ~Guild(){
   cout<<"The guild "<< guildName <<" has been disbanded!\n";
//"The guild Gondor has been disbanded!\n"
   }
    int  Guild::calculateTotalGuildPower(){
       int  totalPower=0;
        for (int i=0;i<memberCount;i++){
            totalPower+=roster[i]->getPower(); 
                     }             // calculate total power
            return totalPower;
        }

    
    void Guild:: displayGuildStats(){
        cout<<"Guild Name: "<<guildName<<"\n";
        cout<<"Total Members: "<<memberCount<<"/15"<<"\n";                          // display output
        cout<<"Total Guild Power: "<<calculateTotalGuildPower()<<"\n";

    }
    void  Guild::operator +=(Hero *heroName){
        if(memberCount<15){
                roster[memberCount]=heroName;     // add hero
                memberCount++;                    // increase count 
            }                        
        
        else 
        cout<<"Guild is at full capacity!\n";
    }
   ostream& operator << (ostream& out, const Guild& g){
    out<<"Guild: " <<g.guildName<< "\n";
    out<<"Members: " <<g.memberCount<< "\n";
    for(int i=0;i<g.memberCount;i++){
        out<< "- " <<g.roster[i]->getName()<<" (Power: "<<g.roster[i]->getPower()<<")"<<" \n";
    }
    return out;

   }