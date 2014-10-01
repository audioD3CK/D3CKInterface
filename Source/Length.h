#pragma once
#include "JuceHeader.h"

class Length
{
    public:
    virtual ~Length();
    virtual double getLength() const = 0;

    private:
    WeakReference<Length>::Master masterReference;
    friend class WeakReference<Length>;
};