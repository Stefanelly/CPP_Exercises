#pragma once
#include <iostream>
#include <string>
#include "Card.hpp"

enum class Attribute
{
    Dark,
    Divine,
    Earth,
    Fire,
    Light,
    Water,
    Wind
};

std::string to_symbol(Attribute attribute)
{
    switch (attribute)
    {
    case Attribute::Dark:
        return u8"闇";
    case Attribute::Divine:
        return u8"神";
    case Attribute::Earth:
        return u8"地";
    case Attribute::Fire:
        return u8"炎";
    case Attribute::Light:
        return u8"光";
    case Attribute::Water:
        return u8"水";
    case Attribute::Wind:
        return u8"風";
    }
}

class Monster : public Card
{
public:
    Monster(const std::string &id, const std::string &name, const Attribute &attribute, const std::string &type, const int atk, const int def)
        : Card{id, CardType::Monster}, _attribute{attribute}, _type{type}, _atk{atk}, _def{def}
    {
        set_name(name);
    }
    const Attribute &get_attribute() const { return _attribute; }
    int get_atk() const { return _atk; }
    int get_def() const { return _def; }

    std::string get_description() const
    {
        return '[' + _type + "]\n" + Card::get_description() + "\nATK/" + std::to_string(_atk) + " DEF/" + std::to_string(_def);
        // return std::format("[{}]\n{}\nATK/{} DEF/{}", _type, card.get_description(), _atk, _def);
    }

private:
    const Attribute &_attribute;
    const std::string &_type;
    const int _atk;
    const int _def;
    // const std::string &_id;
    // const std::string &_type;
    // const std::string &_name;
};