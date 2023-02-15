#pragma once
#include <iostream>
#include <string>
#include "Card.hpp"

enum class SpellType
{
    Normal,
    Equip,
    Continuous,
    QuickPlay,
    Field,
};

const std::string to_string(SpellType type)
{
    switch (type)
    {
    case SpellType::Normal:
        return "Normal";
    case SpellType::Equip:
        return "Equip";
    case SpellType::Continuous:
        return "Continuous";
    case SpellType::QuickPlay:
        return "Quick-Play";
    case SpellType::Field:
        return "Field";
    }
}

class Spell : public Card
{
public:
    Spell(const std::string &id, const std::string &name, const SpellType &type) : Card{id, CardType::Spell}, _type{type} { set_name(name); }
    const SpellType &get_spell_type() { return _type; }

private:
    const SpellType &_type;
};