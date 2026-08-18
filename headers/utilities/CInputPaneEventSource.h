#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 62 member(s).
class CInputPaneEventSource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInputPaneEventSource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CInputPaneEventSource@@UEAAJPEAUIUnknown@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long Advise(IUnknown *, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseWithBehaviorMode@CInputPaneEventSource@@UEAAJPEAUIUnknown@@W4FRAMEWORK_INPUT_PANE_BEHAVIOR_MODE@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long AdviseWithBehaviorMode(IUnknown *, int, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseWithHWND@CInputPaneEventSource@@UEAAJPEAUHWND__@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long AdviseWithHWND(HWND__*, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseWithHWNDAndBehaviorMode@CInputPaneEventSource@@UEAAJPEAUHWND__@@W4FRAMEWORK_INPUT_PANE_BEHAVIOR_MODE@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long AdviseWithHWNDAndBehaviorMode(HWND__*, int, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseWithInputPaneCheck@CInputPaneEventSource@@UEAAJPEAUIUnknown@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long AdviseWithInputPaneCheck(IUnknown *, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseWithInputPaneCheckForUIContext@CInputPaneEventSource@@UEAAJPEAUIUnknown@@PEAUIFrameworkInputPaneHandler@@PEAK@Z
    virtual long AdviseWithInputPaneCheckForUIContext(IUnknown *, IFrameworkInputPaneHandler *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputPaneEventSource@@QEAA@PEAUHWND__@@@Z
    CInputPaneEventSource(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInputPaneEventSource@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInputPaneEventSource@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInputPaneEventSource@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hiding@CInputPaneEventSource@@UEAAJW4IHM_DISPLAY_MODE@@@Z
    virtual long Hiding(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CInputPaneEventSource@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CInputPaneEventSource@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Location@CInputPaneEventSource@@UEAAJPEAUtagRECT@@@Z
    virtual long Location(tagRECT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInputPaneEventSource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInputPaneEventSource@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Showing@CInputPaneEventSource@@UEAAJPEBUtagRECT@@000W4IHM_DISPLAY_MODE@@@Z
    virtual long Showing(tagRECT const *, tagRECT const *, tagRECT const *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryHide@CInputPaneEventSource@@UEAAJPEAE@Z
    virtual long TryHide(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShow@CInputPaneEventSource@@UEAAJPEAE@Z
    virtual long TryShow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CInputPaneEventSource@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Hiding@CInputPaneEventSource@@UEAAJPEAU?$ITypedEventHandler@PEAVInputPane@ViewManagement@UI@Windows@@PEAVInputPaneVisibilityEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Hiding(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Showing@CInputPaneEventSource@@UEAAJPEAU?$ITypedEventHandler@PEAVInputPane@ViewManagement@UI@Windows@@PEAVInputPaneVisibilityEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Showing(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OccludedRect@CInputPaneEventSource@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_OccludedRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visible@CInputPaneEventSource@@UEAAJPEAE@Z
    virtual long get_Visible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Visible@CInputPaneEventSource@@UEAAJE@Z
    virtual long put_Visible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Hiding@CInputPaneEventSource@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Hiding(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Showing@CInputPaneEventSource@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Showing(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputPaneEventSource@@UEAA@XZ
    virtual ~CInputPaneEventSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdviseInternal@CInputPaneEventSource@@AEAAJW4FRAMEWORK_INPUT_PANE_BEHAVIOR_MODE@@PEAUIFrameworkInputPaneHandler@@PEAK_N@Z
    long _AdviseInternal(int, IFrameworkInputPaneHandler *, unsigned long *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateClientAndScreenRects@CInputPaneEventSource@@AEAAJPEAURect@Foundation@Windows@@PEAUtagRECT@@@Z
    long _CalculateClientAndScreenRects(WindissectOpaque *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateFrameworkScreenRect@CInputPaneEventSource@@AEAAJPEBUtagRECT@@0_NW4IHM_DISPLAY_MODE@@PEAU2@@Z
    long _CalculateFrameworkScreenRect(tagRECT const *, tagRECT const *, bool, int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateOccludedClientRectInDips@CInputPaneEventSource@@AEAAJPEBUtagRECT@@00W4IHM_DISPLAY_MODE@@PEAURect@Foundation@Windows@@@Z
    long _CalculateOccludedClientRectInDips(tagRECT const *, tagRECT const *, tagRECT const *, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureWindowService@CInputPaneEventSource@@AEAAJXZ
    long _EnsureWindowService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCallingThreadInForeground@CInputPaneEventSource@@AEAA_NXZ
    bool _IsCallingThreadInForeground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEventUnregister@CInputPaneEventSource@@AEAAXXZ
    void _OnEventUnregister();
};
