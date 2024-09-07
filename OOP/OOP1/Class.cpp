#include <iostream>
#include <string>
using namespace std;

class Character{
    //methods:
    public:
    void takeDamage(int damage){

    }
    void attack(Character &target){

    }
    void takeHP(int healthPoint){

    }
    void changeWeapon(string newWeapon,int dmgNewWeapon){

    }
    bool isAlive(){

    }
    //properties:
    private:
    int m_hp;
    int m_mp;
    string m_weapon;
    int m_dmgWeaponl;
};

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