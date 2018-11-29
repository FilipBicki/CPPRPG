#include <iostream>
#include <string>
#include "player.h"
//#include "room.cpp"
#include <list>

using namespace std;
using std::string;

Player::Player(){
    name = "null";
}
void Player::printName(){
        cout << "Name is : " << name << endl;
        return;
}
void Player::setName(string n){
    name = n;
    return;
}
void Player::showInv(){
    list <string> :: iterator it; 
    for(it = inventory.begin(); it != inventory.end(); ++it) 
        cout << *it <<endl; 
}
void Player::addInv(string item){
    inventory.push_front(item);
    return;
}
void Player::useItem(string item){
    inventory.remove(item);
    return;
}