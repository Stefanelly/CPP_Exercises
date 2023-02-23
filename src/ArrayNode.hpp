#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"

#include <iostream>

class ArrayNode : public Node
{
public:
    ArrayNode() {}
    ArrayNode(int n)
        : _n { n }
    {}

    NodeKind                   kind() { return NodeKind::ARRAY; }
    std::string                print() const override { return "[]"; }
    int                        data() { return _n; }
    std::unique_ptr<ArrayNode> make_ptr() { return std::unique_ptr<ArrayNode>(this); }

private:
    int _n;
};