#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 13 member(s).
class CSettingLabel {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingLabel@@QEAA@XZ
    CSettingLabel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CSettingLabel@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetError@CSettingLabel@@UEAAJPEAPEAG@Z
    virtual long GetError(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKey@CSettingLabel@@UEAAJPEAPEAG@Z
    virtual long GetKey(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSettingLabel@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@CSettingLabel@@UEAAJPEBGPEAH@Z
    virtual long HasKey(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSettingLabel@@UEAAJPEBG00@Z
    virtual long Init(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@CSettingLabel@@UEAAJPEAH0@Z
    virtual long IsEnabled(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@CSettingLabel@@UEAAJHH@Z
    virtual long SetEnabled(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetError@CSettingLabel@@UEAAJPEBG@Z
    virtual long SetError(unsigned short const *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingLabel@@EEAA@XZ
    virtual ~CSettingLabel();
};
