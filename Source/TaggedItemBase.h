#pragma once
#include "JuceHeader.h"
#include "NamedObject.h"

class TaggedItemBase:
virtual public NamedObject
{
public:
    virtual ~TaggedItemBase();
    
    virtual void prepare();
    virtual void consume();
    
   	virtual String getType()const = 0;
    virtual File getFile()const = 0;
    virtual String getData()const = 0;
    virtual TaggedItemBase* clone() const = 0;
    
    
    virtual bool operator != (const TaggedItemBase& other);
    virtual bool operator == (const TaggedItemBase& other);

    bool hasFile()const;
private:
    WeakReference<TaggedItemBase>::Master masterReference;
    friend class WeakReference<TaggedItemBase>;

};

