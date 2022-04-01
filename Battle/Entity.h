#pragma once
#include <iostream>

class Entity
{
private:
    std::string name;
    int hp;
    int attackDamage;
public:
    std::string GetName();
    Entity();
    Entity(const char* name, int hp);
    int GetHp();
    void SetHp(int value);
    void DealDamageTo(Entity* entity, int damage);
    int AssignAttackDamage(int max);
};