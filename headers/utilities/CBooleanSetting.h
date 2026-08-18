#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 23 member(s).
class CBooleanSetting {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CBooleanSetting@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetError@CBooleanSetting@@UEAAJPEAPEAG@Z
    virtual long GetError(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKey@CBooleanSetting@@UEAAJPEAPEAG@Z
    virtual long GetKey(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CBooleanSetting@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CBooleanSetting@@UEAAJPEAH@Z
    virtual long GetValue(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@CBooleanSetting@@UEAAJPEBGPEAH@Z
    virtual long HasKey(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CBooleanSetting@@UEAAJPEBG00@Z
    virtual long Init(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@CBooleanSetting@@UEAAJPEAH0@Z
    virtual long IsEnabled(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@CBooleanSetting@@UEAAJHH@Z
    virtual long SetEnabled(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetError@CBooleanSetting@@UEAAJPEBG@Z
    virtual long SetError(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CBooleanSetting@@UEAAJH@Z
    virtual long SetValue(int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBooleanSetting@@EEAA@XZ
    virtual ~CBooleanSetting();
};
