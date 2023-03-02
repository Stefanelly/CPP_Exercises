#pragma once
#include "InstanceCounter.hpp"
#include "NodeKind.hpp"

#include <iostream>
#include <memory>

class Node : public InstanceCounter
{
public:
    Node() {}
    Node(NodeKind kind)
        : _kind { kind }
    {}
    virtual std::string print() const = 0;
    NodeKind            kind() { return _kind; }

private:
    NodeKind _kind;
};

using NodePtr = std::unique_ptr<Node>;