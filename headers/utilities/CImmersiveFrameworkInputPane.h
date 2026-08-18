#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 14 member(s).
class CImmersiveFrameworkInputPane {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CImmersiveFrameworkInputPane@@UEAAJPEAUIUnknown@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long Advise(IUnknown *, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseWithBehaviorMode@CImmersiveFrameworkInputPane@@UEAAJPEAUIUnknown@@W4FRAMEWORK_INPUT_PANE_BEHAVIOR_MODE@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long AdviseWithBehaviorMode(IUnknown *, int, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseWithHWND@CImmersiveFrameworkInputPane@@UEAAJPEAUHWND__@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long AdviseWithHWND(HWND__*, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseWithHWNDAndBehaviorMode@CImmersiveFrameworkInputPane@@UEAAJPEAUHWND__@@W4FRAMEWORK_INPUT_PANE_BEHAVIOR_MODE@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long AdviseWithHWNDAndBehaviorMode(HWND__*, int, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseWithInputPaneCheck@CImmersiveFrameworkInputPane@@UEAAJPEAUIUnknown@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long AdviseWithInputPaneCheck(IUnknown *, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseWithInputPaneCheckForUIContext@CImmersiveFrameworkInputPane@@UEAAJPEAUIUnknown@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long AdviseWithInputPaneCheckForUIContext(IUnknown *, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveFrameworkInputPane@@QEAA@XZ
    CImmersiveFrameworkInputPane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Location@CImmersiveFrameworkInputPane@@UEAAJPEAUtagRECT@@@Z
    virtual long Location(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CImmersiveFrameworkInputPane@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdviseInternal@CImmersiveFrameworkInputPane@@AEAAJPEAUHWND__@@PEAUIUnknown@@PEAUIFrameworkInputPaneHandler@@PEAK_N@Z
    long _AdviseInternal(HWND__*, IUnknown *, IFrameworkInputPaneHandler *, unsigned long *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdviseInternalWithWindow@CImmersiveFrameworkInputPane@@AEAAJPEAUIUnknown@@PEAUIFrameworkInputPaneHandler@@PEAK_N@Z
    long _AdviseInternalWithWindow(IUnknown *, IFrameworkInputPaneHandler *, unsigned long *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveFrameworkInputPane@@EEAA@XZ
    virtual ~CImmersiveFrameworkInputPane();
};
