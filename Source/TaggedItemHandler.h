#pragma once
#include "JuceHeader.h"

class TaggedItemBase;

class TaggedItemHandler
{
public:
    virtual ~TaggedItemHandler();
    virtual bool canHandleTaggedItem(TaggedItemBase* item)const=0;
    virtual void handleTaggedItem(TaggedItemBase*) = 0;
    
private:
    WeakReference<TaggedItemHandler>::Master masterReference;
    friend class WeakReference<TaggedItemHandler>;
};