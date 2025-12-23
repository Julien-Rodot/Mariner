#pragma once

/**
 * @param name Mariner.hpp
 * @author jj
 * @brief the entire engine!
 */


// Objects
#include "object/object.hpp"
#include "serviceprovider/serviceprovider.hpp"
#include "datamodel/datamodel.hpp"

// Service
#include "baseservice/baseservice.hpp"
#include "logservice/logservice.hpp"

// Types
#include "MarinerTypes.hpp"

// Globals
inline Mariner::DataModel* game = Mariner::DataModel::New();
