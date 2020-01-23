/**
 * Copyright Soramitsu Co., Ltd. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef IROHA_SHARED_MODEL_ENGINE_CALL_HPP
#define IROHA_SHARED_MODEL_ENGINE_CALL_HPP

#include "interfaces/base/model_primitive.hpp"
#include "interfaces/common_objects/types.hpp"

namespace shared_model {
  namespace interface {
    
    /**
     * Call EVM
     */
    class EngineCall : public ModelPrimitive<EngineCall> {
      public:
        /**
         * @return Callee's address
         */
        virtual const types::AccountIdType &callee() const = 0;

        /**
         * @return EVM call data (contract code or a method params) as hex bytecode
         */
        virtual const types::SmartContractCodeType &input() const = 0;

        std::string toString() const override;

        bool operator==(const ModelType &rhs) const override;
    };
  } // namespace interface
} // namespace shared_model

#endif  // IROHA_SHARED_MODEL_ENGINE_CALL_HPP
