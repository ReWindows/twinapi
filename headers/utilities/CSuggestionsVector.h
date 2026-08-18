#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 14 member(s).
class CSuggestionsVector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CSuggestionsVector@@UEAAJPEAUISearchSuggestion@Core@Search@ApplicationModel@Windows@@@Z
    virtual long Append(::Windows::ApplicationModel::Search::Core::ISearchSuggestion *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CSuggestionsVector@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@CSuggestionsVector@@UEAAJIPEAUISearchSuggestion@Core@Search@ApplicationModel@Windows@@@Z
    virtual long InsertAt(unsigned int, ::Windows::ApplicationModel::Search::Core::ISearchSuggestion *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CSuggestionsVector@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@CSuggestionsVector@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceAll@CSuggestionsVector@@UEAAJIPEAPEAUISearchSuggestion@Core@Search@ApplicationModel@Windows@@@Z
    virtual long ReplaceAll(unsigned int, ::Windows::ApplicationModel::Search::Core::ISearchSuggestion * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@CSuggestionsVector@@UEAAJIPEAUISearchSuggestion@Core@Search@ApplicationModel@Windows@@@Z
    virtual long SetAt(unsigned int, ::Windows::ApplicationModel::Search::Core::ISearchSuggestion *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSnapshot@CSuggestionsVector@@AEAAJPEAPEAU?$IVector@PEAVSearchSuggestion@Core@Search@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    long _CreateSnapshot(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveMissingItemsFromVector@CSuggestionsVector@@AEAAJPEAU?$IVector@PEAVSearchSuggestion@Core@Search@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    long _RemoveMissingItemsFromVector(WindissectOpaque *);
};
