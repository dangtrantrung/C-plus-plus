
#ifndef DEF_CHARACTER
#define DEF_CHARACTER
#include <string>
#include "Weapon.h"
class Character{

    public:
    //default constructor:
    Character();
    //overloading default constructor
    Character(std::string weapon,int dmgWeapon);
    //copy constructor
    Character(Character const& anotherCharacter);
    //destructor - no need to create destructor
    //because we did not use new - dynamic memory allocation
    // ~Character();
    //methods:
    void takeDamage(int damage);
    void attack(Character &target);
    void takeHP(int healthpoint);
    void changeWeapon(std::string newWeapon,int dmgNewWeapon);
    bool isAlive() const;
    void printStatus() const;

    //properties:
    private:
    int m_hp;
    int m_mp;
    Weapon m_weapon;
};
#endif
