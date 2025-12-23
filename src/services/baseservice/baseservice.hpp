#pragma once

/**
 * @param name baseservice.hpp
 * @author jj
 * @brief father all all services, services come from here
 */

#include "mstring/mstring.hpp"
#include "mtable/mtable.hpp"
#include "object/object.hpp"

namespace Mariner {

    class BaseService: public Object {

        public:

            static BaseService* New();
            virtual void Destroy() override;

        protected:

            BaseService() = default;
            virtual ~BaseService() = default;

        private:

    };

} // namespace Mariner