#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 5 member(s).
namespace Microsoft::WRL::Wrappers {
class HStringReference {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@HStringReference@Wrappers@WRL@Microsoft@@QEBAPEAUHSTRING__@@XZ
    HSTRING__* Get() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ
    ~HStringReference();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z
    void CreateReference(unsigned short const *, unsigned int, unsigned int);
};
} // namespace Microsoft::WRL::Wrappers
