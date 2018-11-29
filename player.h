#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <list>
//#include "room.cpp"

using std::string;
using std::list;

class Player
{
    private:
        string name;
        //Room location;
        list<string> inventory;
    public:
        Player();
        void printName();
        void setName(string n);
        void showInv();
        void addInv(string item);
        void useItem(string item);
        
};

#endif