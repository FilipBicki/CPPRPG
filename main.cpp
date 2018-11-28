#include <iostream>
#include "player.cpp"
#include <string>
#include <list>

using std::string;

int main(){
    string n = "hello";
    Player me = Player();
    me.setName(n);
    me.showInv();
    me.addInv("something");
    me.addInv("something else");
    me.addInv("another thing");
    me.printName();
    me.showInv();
    me.useItem("somethings");
    me.showInv();
    return 0;
}