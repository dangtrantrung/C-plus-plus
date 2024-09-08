#ifndef DEF_WEAPON
#define DEF_WEAPON
#include <iostream>
#include <string>

class Weapon{
    public:
    Weapon();
    Weapon(std::string name,int damage);
    void changeWeapon(std::string name,int damage);
    void printInfo() const;
    int getDamage() const;

    private:
    std::string m_name;
    int m_damage;

};
#endif