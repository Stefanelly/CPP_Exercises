#pragma once
#include <iostream>
#include <string>

class Card
{
};

enum class CardType
{
    Monster,
    Spell,
    Trap
};

std::string to_string(CardType cardType)
{
    switch (cardType)
    {
    case CardType::Monster:
        return "Monster";
    case CardType::Spell:
        return "Spell";
    case CardType::Trap:
        return "Trap";
    }
}