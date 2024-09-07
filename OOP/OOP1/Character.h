#ifndef DEF_CHARACTER
#define DEF_CHARACTER
#include <string>
class Character{

    public:
    //overloading default constructor
    Character(std::string weapon,int dmgWeapon);
    //copy constructor
    Character(Character const& anotherCharacter);
    //methods:
    void takeDamage(int damage){

    }
    void attack(Character &target){

    }
    void takeHP(int healthpoint){

    }
    void changeWeapon(std::string newWeapon,int dmgNewWeapon){

    }
    bool isAlive();

    //properties:
    private:
    int m_hp;
    int m_mp;
    std::string m_weapon;
    int m_dmgWeaponl;
};
#endif