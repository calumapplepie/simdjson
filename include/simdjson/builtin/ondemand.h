#ifndef SIMDJSON_BUILTIN_ONDEMAND_H
#define SIMDJSON_BUILTIN_ONDEMAND_H

#include "simdjson/builtin.h"
#include "simdjson/builtin/base.h"

#include "simdjson/generic/ondemand/dependencies.h"

#define SIMDJSON_AMALGAMATED

#if SIMDJSON_BUILTIN_IMPLEMENTATION_IS(arm64)
#include "simdjson/arm64/ondemand.h"
#elif SIMDJSON_BUILTIN_IMPLEMENTATION_IS(fallback)
#include "simdjson/fallback/ondemand.h"
#elif SIMDJSON_BUILTIN_IMPLEMENTATION_IS(haswell)
#include "simdjson/haswell/ondemand.h"
#elif SIMDJSON_BUILTIN_IMPLEMENTATION_IS(icelake)
#include "simdjson/icelake/ondemand.h"
#elif SIMDJSON_BUILTIN_IMPLEMENTATION_IS(ppc64)
#include "simdjson/ppc64/ondemand.h"
#elif SIMDJSON_BUILTIN_IMPLEMENTATION_IS(westmere)
#include "simdjson/westmere/ondemand.h"
#else
#error Unknown SIMDJSON_BUILTIN_IMPLEMENTATION
#endif

#undef SIMDJSON_AMALGAMATED

namespace simdjson {
  /**
   * @copydoc simdjson::SIMDJSON_BUILTIN_IMPLEMENTATION::ondemand
   */
  namespace ondemand = SIMDJSON_BUILTIN_IMPLEMENTATION::ondemand;
} // namespace simdjson

#endif // SIMDJSON_BUILTIN_ONDEMAND_H