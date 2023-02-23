#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"

#include <iostream>

class IntLeaf : public Leaf
{
public:
    IntLeaf(int n)
        : _n { n }
    {}

    NodeKind    kind() { return NodeKind::INT; }
    std::string print() const override { return std::to_string(_n); }
    int         data() { return _n; }

private:
    int _n;
};