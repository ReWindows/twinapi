#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 7 member(s).
class CSearchPaneStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CSearchPaneStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLauncherSuggestion@CSearchPaneStatics@@UEAAJPEBG00PEAUIShellItem@@PEAPEAUISearchTypeAheadSuggestion@@@Z
    virtual long CreateLauncherSuggestion(unsigned short const *, unsigned short const *, unsigned short const *, IShellItem *, ISearchTypeAheadSuggestion * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSearchPaneClient@CSearchPaneStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long CreateSearchPaneClient(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CSearchPaneStatics@@UEAAJPEAPEAUISearchPane@Search@ApplicationModel@Windows@@@Z
    virtual long GetForCurrentView(::Windows::ApplicationModel::Search::ISearchPane * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideThisApplication@CSearchPaneStatics@@UEAAJXZ
    virtual long HideThisApplication();
};
