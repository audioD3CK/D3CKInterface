#pragma once
#include "JuceHeader.h"

class HelpCompSource
{
public:
    virtual Component* createHelpComp() = 0;
    virtual ~HelpCompSource();
};