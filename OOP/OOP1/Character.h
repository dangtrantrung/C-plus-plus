#ifndef DEF_CHARACTER
#define DEF_CHARACTER
#include <string>
class Character{
    //methods:
    public:
    //overloading default constructor
    Character(std::string weapon,int dmgWeapon);
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