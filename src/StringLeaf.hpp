#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"

#include <iostream>

class StringLeaf : public Leaf
{
public:
    StringLeaf(std::string chain)
        : _chain { chain }
    {}

    NodeKind                    kind() { return NodeKind::STRING; }
    std::string                 print() const override { return "\"" + _chain + "\""; }
    std::string                 data() { return _chain; }
    std::unique_ptr<StringLeaf> make_ptr() { return std::unique_ptr<StringLeaf>(this); }

private:
    std::string _chain;
};