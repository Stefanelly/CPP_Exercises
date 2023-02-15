#pragma once
#include <iostream>
#include <string>
#include "Card.hpp"

enum class TrapType
{
    Normal,
    Continuous,
    Counter
};

std::string to_string(TrapType type)
{
    switch (type)
    {
    case TrapType::Normal:
        return "Normal";
    case TrapType::Continuous:
        return "Continuous";
    case TrapType::Counter:
        return "Counter";
    }
}

class Trap : public Card
{
public:
    Trap(const std::string &id, const std::string &name, const TrapType &type) : Card{id, CardType::Trap}, _type{type} { set_name(name); }

    const TrapType &get_trap_type() { return _type; }

private:
    const TrapType &_type;
};