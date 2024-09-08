#include <iostream>
#include "Character.h"
#include <string>

using namespace std;

int main(){
    Character david, goliath("Iron Sword",20);
    Character david1(goliath);//copy constructor
    goliath.attack(david);
    david.takeHP(20);
    goliath.attack(david);
    david.attack(goliath);
    goliath.changeWeapon("The Deaths\'s battle-axe",40);
    goliath.attack(david);
    // Status of Character
    cout<<"David"<<endl;
    david.printStatus();
    cout<<endl<<"Goliath"<<endl;
    goliath.printStatus();

    return 0;
}