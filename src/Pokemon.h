#pragma once

#include <iostream>
#include <string>
#include <memory>

// A creature that is cute and can fight other ones.
class Pokemon
{
public:
    Pokemon(std::string name) : _name{name}, _id{_count++} {}
    Pokemon(const Pokemon &other) : _name{other._name}, _id{_count++} {}
    std::string name() const
    {
        return _name;
    }
    int id() const
    {
        return _id;
    }
    Pokemon &operator=(const Pokemon &other)
    {
        if (this == &other)
        {
            _name = other._name;
        }
        return *this;
    }

private:
    std::string _name;
    const int _id;
    static inline int _count = 0;
};

// using PokemonPtr = Pokemon *;
using PokemonPtr = std::unique_ptr<Pokemon>;