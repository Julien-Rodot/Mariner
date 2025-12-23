#pragma once

/**
 * @param name logservice.hpp
 * @author jj
 * @brief used to log shit
 */

#include "mstring/mstring.hpp"
#include "mtable/mtable.hpp"
#include "baseservice/baseservice.hpp"
#include "logtype.hpp"
#include "logmethod.hpp"

namespace Mariner {

    class LogService: public BaseService {

        public:

            static LogService* New();

            LogMethod LogMethod = LogMethod::STD_PRINT;

            void PrintOut(LogType Logtype, MString Message);


        protected:

            LogService() = default;
            virtual ~LogService() = default;

        private:

            MTable<MString> LogQueue = {};

    };

} // namespace Mariner