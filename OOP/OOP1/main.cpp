#include <iostream>
#include "Character.h"
#include <string>

using namespace std;

int main(){
    Character david, goliah;
    goliah.attack(david);
    david.takeHP(20);
    goliah.attack(david);
    david.attack(goliah);
    goliah.changeWeapon("The Deaths\'s battle-axe",40);
    goliah.attack(david);
    return 0;
}