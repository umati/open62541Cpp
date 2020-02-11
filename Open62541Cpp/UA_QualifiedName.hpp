///
/// \file UA_QualifiedName.hpp
/// \author Christian von Arnim
/// \date 11.02.2020
///

#pragma once
#include <open62541/types.h>
#include <string>

namespace open62541Cpp {

class UA_QualifiedName {

 public:
  ~UA_QualifiedName();
  UA_QualifiedName(UA_UInt16 nsIndex, const std::string &name);

  /// \todo implement
  UA_QualifiedName(const UA_QualifiedName &other) = delete;
  ::UA_QualifiedName *QualifiedName = nullptr;
};

}
