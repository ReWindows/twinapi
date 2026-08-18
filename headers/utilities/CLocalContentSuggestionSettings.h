#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 34 member(s).
class CLocalContentSuggestionSettings {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLocalContentSuggestionSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToTypeaheadSettings@CLocalContentSuggestionSettings@@UEAAJ_NPEAUTYPEAHEAD_LOCAL_SETTINGS@@@Z
    virtual long ConvertToTypeaheadSettings(bool, TYPEAHEAD_LOCAL_SETTINGS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CLocalContentSuggestionSettings@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CLocalContentSuggestionSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CLocalContentSuggestionSettings@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CLocalContentSuggestionSettings@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CLocalContentSuggestionSettings@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLocalContentSuggestionSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLocalContentSuggestionSettings@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AqsFilter@CLocalContentSuggestionSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AqsFilter(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Enabled@CLocalContentSuggestionSettings@@UEAAJPEAE@Z
    virtual long get_Enabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Locations@CLocalContentSuggestionSettings@@UEAAJPEAPEAU?$IVector@PEAVStorageFolder@Storage@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Locations(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PropertiesToMatch@CLocalContentSuggestionSettings@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long get_PropertiesToMatch(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AqsFilter@CLocalContentSuggestionSettings@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_AqsFilter(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Enabled@CLocalContentSuggestionSettings@@UEAAJE@Z
    virtual long put_Enabled(unsigned char);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PopulateScopesFromAppCapabilities@CLocalContentSuggestionSettings@@CAJ_NPEAPEAU?$IVectorView@PEAVStorageFolder@Storage@Windows@@@Collections@Foundation@Windows@@@Z
    static long s_PopulateScopesFromAppCapabilities(bool, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLocalContentSuggestionSettings@@EEAA@XZ
    virtual ~CLocalContentSuggestionSettings();
};
