#include "Character.h"
#include "Weapon.h"
#include <string>

using namespace std;

//default constructor
Character::Character():m_hp(100),m_mp(100){
    // m_hp = 100;
    // m_mp = 100;
    // m_weapon = "Wooden Sword";
    // m_dmgWeapon = 10;
}
//Overloading default constructor
Character::Character(string weapon, int dmgWeapon):m_hp(100),m_mp(100),m_weapon(weapon,dmgWeapon){

}
//copy constructor
Character::Character(Character const& anotherCharacter):m_hp(anotherCharacter.m_hp),m_mp(anotherCharacter.m_mp),m_weapon(anotherCharacter.m_weapon){

}
//destructor
//Character::~Character(){
/*Do nothing because we dont use new-dynamic Memory allocation in constructor
delete,..
check if SOME conditions, confirm here,..before delete for we can release memory*/

//}

void Character::takeDamage(int damage){
    m_hp-=damage;
    if(m_hp<0) m_hp=0;
}
void Character::attack(Character &target){
    target.takeDamage(m_weapon.getDamage());
}
void Character::takeHP(int healthPoint){
    m_hp+=healthPoint;
    if (m_hp>100)m_hp=100;
}
void Character::changeWeapon(string newWeapon, int dmgNewWeapon){
    m_weapon.changeWeapon(newWeapon,dmgNewWeapon);
}
bool Character::isAlive() const {
    if(m_hp>0)return true;
    else return false;
}
void Character::printStatus() const{
cout<<"HP:"<<m_hp<<endl;
cout<<"MP:"<<m_mp<<endl;
m_weapon.printInfo();
}

