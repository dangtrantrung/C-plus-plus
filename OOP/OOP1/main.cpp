#include <iostream>
#include "Character.h"
#include "Weapon.h"
// #include <string>

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
    goliath.attack(david);

    // Status of Character
    string alive;
    cout<<"David"<<endl;
    david.printStatus();
    alive=david.isAlive()?"YES":"NO";
    cout<<"Alive:"<<alive<<endl;
    cout<<endl<<"Goliath"<<endl;
    goliath.printStatus();
    alive=goliath.isAlive()?"YES":"NO";
    cout<<"Alive:"<<alive<<endl;

    return 0;
}
