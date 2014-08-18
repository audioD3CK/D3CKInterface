#pragma once
#include "JuceHeader.h"
class NamedObject
{
public:
    virtual const String getName()const = 0;
    virtual ~NamedObject(){}
};