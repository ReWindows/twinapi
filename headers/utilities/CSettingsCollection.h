#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 7 member(s).
class CSettingsCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CSettingsCollection@@UEAAJPEAUISetting@@@Z
    virtual long Add(ISetting *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@CSettingsCollection@@UEAAJPEBGPEAPEAUISetting@@@Z
    virtual long Get(unsigned short const *, ISetting * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CSettingsCollection@@UEAAJKPEAPEAUISetting@@@Z
    virtual long GetAt(unsigned long, ISetting * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CSettingsCollection@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingsCollection@@EEAA@XZ
    virtual ~CSettingsCollection();
};
