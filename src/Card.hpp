#pragma once
#include <iostream>
#include <string>
enum class CardType
{
    Monster,
    Spell,
    Trap
};

const std::string to_string(const CardType &type)
{
    switch (type)
    {
    case CardType::Monster:
        return "Monster";
    case CardType::Spell:
        return "Spell";
    case CardType::Trap:
        return "Trap";
    }
}

class Card
{
    // get_id get_type get_name get_description set_name set_description
public:
    Card(const std::string &id, const CardType &type) : _id{id}, _type{type} {}

    const std::string &get_id() const { return _id; }
    const CardType &get_type() const { return _type; }
    const std::string &get_name() const { return _name; }
    const std::string &get_description() const { return _description; }

    void set_name(const std::string &name) { _name = name; }
    void set_description(const std::string &description) { _description = description; }

    const std::string get_symbol() const { return _symbol; }

private:
    const std::string _id;
    const CardType _type;
    std::string _name;
    std::string _description;

protected:
    std::string _symbol;
};