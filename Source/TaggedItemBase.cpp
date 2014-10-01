
#include "TaggedItemBase.h"

TaggedItemBase::~TaggedItemBase()
{
    masterReference.clear();
}

bool TaggedItemBase::hasFile()const
{
    return this->getFile().existsAsFile();
}

void TaggedItemBase::prepare()
{
    
}
void TaggedItemBase::consume()
{
    
}

bool TaggedItemBase::operator != (const TaggedItemBase& other)
{
    return ! this->operator==(other);
}
bool TaggedItemBase::operator == (const TaggedItemBase& other)
{
    return this->getFile() == other.getFile() && this->getType() == other.getType();
}