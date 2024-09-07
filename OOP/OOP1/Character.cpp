#include "Character.h"
#include <string>

using namespace std;
//default constructor
Character::Character():m_hp(100),m_mp(100),m_weapon("Wooden Sword"),m_dmgWeapon(10){
    // m_hp = 100;
    // m_mp = 100;
    // m_weapon = "Wooden Sword";
    // m_dmgWeapon = 10;
}
//Overloading default constructor
Character::Character(string weapon, int dmgWeapon):m_hp(100),m_mp(100),m_weapon(weapon),m_dmgWeapon(dmgWeapon){



void Character::takeDamage(int damage){
    m_hp-=damage;
    if(m_hp<0) m_hp=0;
}
void Character::attack(Character &target){
    target.takeDamage(m_dmgWeapon)
}
void Character::takeHP(int healthPoint){
    m_hp+=healthPoint;
    if (m_hp>100)m_hp=100;
}
void Character::changeWeapon(string newWeapon, int dmgNewWeapon){
    m_weapon=newWeapon;
    m_dmgWeapon=dmgNewWeapon;
}
bool Character::isAlive(){
    if(m_hp>0)return true;
    else return false;
}
