#pragma once

#include "Platform.h"
#include "VirtualMethod.h"

namespace csgo::pod { struct PanoramaMarshallHelper; }

class PanoramaMarshallHelper : public VirtualCallableFromPOD<PanoramaMarshallHelper, csgo::pod::PanoramaMarshallHelper> {
public:
    VIRTUAL_METHOD2(void, setResult, WIN32_LINUX(14, 11), (void* params, int result), (params, result))
};
