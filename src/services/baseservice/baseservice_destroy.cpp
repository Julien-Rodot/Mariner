#include "baseservice.hpp"
#include <exception>

// This file was specifically designed to make it so you cannot destory a service. otherwise why the fuck would services
// even exist in the first place. 

// TODO: Disable this with a macro.

void Mariner::BaseService::Destroy() {

    throw std::runtime_error("Cannot destory a service!");

}