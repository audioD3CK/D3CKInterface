#pragma once
#include "JuceHeader.h"

class TaggedItemBase;

class TaggedItemSource
{
public:
    virtual ~TaggedItemSource();
//    virtual String getTaggedItemFile()const = 0;
//    virtual String getTaggedItemType()const = 0;
//    virtual String getTaggedItemName()const = 0;
    virtual TaggedItemBase* createTaggedItem()  = 0;
    
private:
    WeakReference<TaggedItemSource>::Master masterReference;
    friend class WeakReference<TaggedItemSource>;
};