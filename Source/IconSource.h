#pragma once
#include "JuceHeader.h"

class IconSource
{
public:
    virtual ~IconSource();
    virtual String getIconName()const = 0;
};