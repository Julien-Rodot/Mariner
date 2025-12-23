#pragma once

/**
 * @param name datamodel.hpp
 * @author jj
 * @brief the mother of everything. everything in a live game is parented to this one way or another.
 */

#include "serviceprovider/serviceprovider.hpp"
#include "mdictionary/mdictionary.hpp"
#include "MarinerTypes.hpp"

namespace Mariner {

    class DataModel : public ServiceProvider {

        public:

            static DataModel* New();

            MString GameId;
            MString JobId;
            float Version = 0.0f;

            bool DefineFastFlag(MString FlagName, bool DefaultValue);
            int DefineFastInt(MString FlagName, int DefaultValue);
            MString DefineFastString(MString FlagName, MString DefaultValue);
            bool GetFastFlag(MString FlagName);
            int GetFastInt(MString FlagName);
            MString GetFastString(MString FlagName);
            bool IsContentLoaded();
            bool IsLoaded();
            void Load();
            void Save();
            void Close();

        protected:

            DataModel() = default;
            virtual ~DataModel() = default;

        private:

            MDictionary<MString, bool> FastFlags;
            MDictionary<MString, int> FastInts;
            MDictionary<MString, MString> FastStrings;

            bool ContentLoaded = false;
            bool Loaded = false;


    };
    
} // namespace Mariner
