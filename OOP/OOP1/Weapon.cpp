#include "Weapon.h"
#include <string>
#include <iostream>
using namespace std;

Weapon::Weapon():m_name("Wooden Sword"),m_damage(10){

}
Weapon::Weapon(string name,int damage):m_name(name),m_damage(damage){

}
void Weapon::changeWeapon(string name,int damage){
    m_name=name;
    m_damage=damage;
}

void Weapon::printInfo() const{
    cout<<"Weapon: "<<m_name<<"(Damage: "<<m_damage<<")"<<endl;

}
int Weapon::getDamage() const{
    return m_damage;
}
