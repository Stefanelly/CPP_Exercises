#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"

#include <iostream>

class StringLeaf : public Leaf
{
public:
    StringLeaf(std::string chain)
        : Node(NodeKind::STRING)
        , _chain { chain }
    {}
    std::string                 print() const override { return "\"" + _chain + "\""; }
    std::string                 data() { return _chain; }
    std::unique_ptr<StringLeaf> make_ptr() { return std::unique_ptr<StringLeaf>(this); }

private:
    std::string _chain;
};