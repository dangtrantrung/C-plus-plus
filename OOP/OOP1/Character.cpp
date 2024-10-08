#include "Character.h"
#include "Weapon.h"
#include <string>

using namespace std;

//default constructor
Character::Character():m_hp(100),m_mp(100),m_weapon(0){
    m_weapon=new Weapon();
    // m_hp = 100;
    // m_mp = 100;
    // m_weapon = "Wooden Sword";
    // m_dmgWeapon = 10;
}
//Overloading default constructor
Character::Character(string weapon, int dmgWeapon):m_hp(100),m_mp(100),m_weapon(0){
    m_weapon=new Weapon(weapon,dmgWeapon);
}
//copy constructor
Character::Character(Character const& anotherCharacter):m_hp(anotherCharacter.m_hp),m_mp(anotherCharacter.m_mp),m_weapon(0){
// m_weapon=anotherCharacter.m_weapon
// this will only copy address of pointer not value of pointer to weapon
m_weapon=new Weapon(*(anotherCharacter.m_weapon));// use default copy constructor of Weapon
}
//destructor
Character::~Character(){
/*Do nothing because we dont use new-dynamic Memory allocation in constructor
delete,..
check if SOME conditions, confirm here,..before delete for we can release memory*/
delete m_weapon;
}

void Character::takeDamage(int damage){
    m_hp-=damage;
    if(m_hp<0) m_hp=0;
}
void Character::attack(Character &target){
    target.takeDamage(m_weapon->getDamage());
}
void Character::takeHP(int healthPoint){
    m_hp+=healthPoint;
    if (m_hp>100)m_hp=100;
}
void Character::changeWeapon(string newWeapon, int dmgNewWeapon){
    m_weapon->changeWeapon(newWeapon,dmgNewWeapon);
}
bool Character::isAlive() const {
    if(m_hp>0)return true;
    else return false;
}
void Character::printStatus() const{
cout<<"HP:"<<m_hp<<endl;
cout<<"MP:"<<m_mp<<endl;
m_weapon->printInfo();
}

Character* Character::getAddress() const{
    return this;
}
Character& Character::operator=(Character const& anotherCharacter){
    if(this!=&anotherCharacter){
        m_hp=anotherCharacter.m_hp;
        m_mp=anotherCharacter.m_mp;
        delete m_weapon;
        m_weapon=new Weapon(*(anotherCharacter.m_weapon));
    }
    return *this; //return value of this character after referencing and change - assign value of anotherCharacter
}
