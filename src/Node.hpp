#pragma once
#include "InstanceCounter.hpp"

#include <iostream>
#include <memory>

class Node : public InstanceCounter
{
public:
    virtual std::string print() const = 0;

private:
};

using NodePtr = std::unique_ptr<Node>;