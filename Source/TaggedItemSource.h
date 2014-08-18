#pragma once
#include "JuceHeader.h"

class TaggedItem;

class TaggedItemSource
{
public:
    virtual ~TaggedItemSource();
    virtual String getTaggedItemData()const = 0;
    virtual String getTaggedItemType()const = 0;
    virtual String getTaggedItemName()const = 0;
    
private:
    WeakReference<TaggedItemSource>::Master masterReference;
    friend class WeakReference<TaggedItemSource>;
};