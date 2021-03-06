
#pragma once
#ifndef KIWI_CORE_NODEUPDATER_HPP
#define KIWI_CORE_NODEUPDATER_HPP


namespace kiwi{
namespace core{

class Node;

/**
 * Mother class for node update strategies.
 *
 * @see DynamicNodeUpdater
 */ 
class NodeUpdater
{
public:
    virtual bool update(const Node& n) = 0;
    virtual ~NodeUpdater(){};
};
    

}//namespace
}//namespace


#endif
