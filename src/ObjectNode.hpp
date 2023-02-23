#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"

#include <iostream>

class ObjectNode : public Node
{
public:
    ObjectNode() {}

    NodeKind    kind() { return NodeKind::OBJECT; }
    std::string print() const override { return "{}"; }

private:
};