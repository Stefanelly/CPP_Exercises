#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"

#include <iostream>

class ObjectNode : public Node
{
public:
    ObjectNode()
        : Node(NodeKind::OBJECT)
    {}
    std::string                 print() const override { return "{}"; }
    std::unique_ptr<ObjectNode> make_ptr() { return std::unique_ptr<ObjectNode>(this); }

private:
    // NodeKind _kind;
};