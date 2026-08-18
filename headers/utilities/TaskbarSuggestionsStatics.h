#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 29 member(s).
class TaskbarSuggestionsStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@TaskbarSuggestionsStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TaskbarSuggestionsStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TaskbarSuggestionsStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinnedAppIds@TaskbarSuggestionsStatics@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long GetPinnedAppIds(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TaskbarSuggestionsStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TaskbarSuggestionsStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUiAutomationId@TaskbarSuggestionsStatics@@UEAAJPEAUHSTRING__@@PEAPEAU2@@Z
    virtual long GetUiAutomationId(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@TaskbarSuggestionsStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@TaskbarSuggestionsStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinnedToTaskBar@TaskbarSuggestionsStatics@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long IsPinnedToTaskBar(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpaceRemainingForInitialPin@TaskbarSuggestionsStatics@@UEAAJPEAE@Z
    virtual long IsSpaceRemainingForInitialPin(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpaceRemainingOnTaskBar@TaskbarSuggestionsStatics@@UEAAJPEAE@Z
    virtual long IsSpaceRemainingOnTaskBar(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinUnpinApp@TaskbarSuggestionsStatics@@UEAAJPEAUHSTRING__@@E0E@Z
    virtual long PinUnpinApp(HSTRING__*, unsigned char, HSTRING__*, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinUnpinPlaceHolder@TaskbarSuggestionsStatics@@UEAAJPEAUHSTRING__@@00E@Z
    virtual long PinUnpinPlaceHolder(HSTRING__*, HSTRING__*, HSTRING__*, unsigned char);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TaskbarSuggestionsStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TaskbarSuggestionsStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskbarSuggestionsStatics@@QEAA@XZ
    TaskbarSuggestionsStatics();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskBarSuggestionsPinHelper@TaskbarSuggestionsStatics@@AEAAJPEAPEAUITaskBarSuggestionsPinHelper@TaskBarSuggestions@UI@Internal@Windows@@@Z
    long GetTaskBarSuggestionsPinHelper(::Windows::Internal::UI::TaskBarSuggestions::ITaskBarSuggestionsPinHelper * *);
};
