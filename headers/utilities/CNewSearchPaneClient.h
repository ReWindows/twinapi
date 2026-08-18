#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 94 member(s).
class CNewSearchPaneClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNewSearchPaneClient@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSuggestions@CNewSearchPaneClient@@UEAAJPEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    virtual long AppendSuggestions(SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSuggestionsToVector@CNewSearchPaneClient@@UEAAJPEAUIUnknown@@PEAUIQueryWithLinguisticAlternatives@@PEBGPEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    virtual long AppendSuggestionsToVector(IUnknown *, IQueryWithLinguisticAlternatives *, unsigned short const *, SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTypeToSearch@CNewSearchPaneClient@@UEAAJPEAUHWND__@@@Z
    virtual long BeginTypeToSearch(HWND__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNewSearchPaneClient@@QEAA@XZ
    CNewSearchPaneClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTypeToSearch@CNewSearchPaneClient@@UEAAJXZ
    virtual long EndTypeToSearch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNewSearchPaneClient@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNewSearchPaneClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNewSearchPaneClient@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTypeToSearchMessages@CNewSearchPaneClient@@UEAAJPEBUTYPE_TO_SEARCH_MSG@@I@Z
    virtual long HandleTypeToSearchMessages(TYPE_TO_SEARCH_MSG const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImageDownloadComplete@CNewSearchPaneClient@@UEAAJ_KPEAUHBITMAP__@@@Z
    virtual long ImageDownloadComplete(uint64_t, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CNewSearchPaneClient@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CNewSearchPaneClient@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CNewSearchPaneClient@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPasteEnabled@CNewSearchPaneClient@@UEAA_NXZ
    virtual bool IsPasteEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPreventUnwantedCharactersEnabled@CNewSearchPaneClient@@UEAA_NXZ
    virtual bool IsPreventUnwantedCharactersEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppActivated@CNewSearchPaneClient@@UEAAJPEBG0@Z
    virtual long OnAppActivated(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeSuggestionWithId@CNewSearchPaneClient@@UEAAJPEBGW4SEARCH_MODIFIER_KEYS@@@Z
    virtual long OnInvokeSuggestionWithId(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchPaneHidden@CNewSearchPaneClient@@UEAAJXZ
    virtual long OnSearchPaneHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchPaneShown@CNewSearchPaneClient@@UEAAJPEBG0@Z
    virtual long OnSearchPaneShown(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchQueryChanged@CNewSearchPaneClient@@UEAAJPEBG0PEAUIQueryWithLinguisticAlternatives@@@Z
    virtual long OnSearchQueryChanged(unsigned short const *, unsigned short const *, IQueryWithLinguisticAlternatives *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSubmitSearch@CNewSearchPaneClient@@UEAAJPEBG0PEAUIQueryWithLinguisticAlternatives@@W4SEARCH_SUBMIT_TYPE@@W4SEARCH_MODIFIER_KEYS@@@Z
    virtual long OnSubmitSearch(unsigned short const *, unsigned short const *, IQueryWithLinguisticAlternatives *, int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNewSearchPaneClient@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNewSearchPaneClient@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CNewSearchPaneClient@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeLightDismiss@CNewSearchPaneClient@@UEAAJXZ
    virtual long ResumeLightDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CNewSearchPaneClient@@QEAAJPEAUHWND__@@W4SearchPaneClientInitOptions@@@Z
    long RuntimeClassInitialize(HWND__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocalContentSuggestionSettings@CNewSearchPaneClient@@UEAAJPEAUILocalContentSuggestionSettings@Search@ApplicationModel@Windows@@@Z
    virtual long SetLocalContentSuggestionSettings(::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScope@CNewSearchPaneClient@@UEAAJPEBG@Z
    virtual long SetScope(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuggestions@CNewSearchPaneClient@@UEAAJPEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    virtual long SetSuggestions(SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuggestionsForQuery@CNewSearchPaneClient@@UEAAJPEBGPEAPEAUISearchTypeAheadSuggestion@@I@Z
    virtual long SetSuggestionsForQuery(unsigned short const *, ISearchTypeAheadSuggestion * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowOverloadDefault@CNewSearchPaneClient@@UEAAJXZ
    virtual long ShowOverloadDefault();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowOverloadWithQuery@CNewSearchPaneClient@@UEAAJPEAUHSTRING__@@@Z
    virtual long ShowOverloadWithQuery(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetQueryText@CNewSearchPaneClient@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long TrySetQueryText(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThumbnailInVector@CNewSearchPaneClient@@UEAAJPEAUIUnknown@@_KPEAUHBITMAP__@@@Z
    virtual long UpdateThumbnailInVector(IUnknown *, uint64_t, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_QueryChanged@CNewSearchPaneClient@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchPane@Search@ApplicationModel@Windows@@PEAVSearchPaneQueryChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_QueryChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_QuerySubmitted@CNewSearchPaneClient@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchPane@Search@ApplicationModel@Windows@@PEAVSearchPaneQuerySubmittedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_QuerySubmitted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ResultSuggestionChosen@CNewSearchPaneClient@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchPane@Search@ApplicationModel@Windows@@PEAVSearchPaneResultSuggestionChosenEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ResultSuggestionChosen(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SuggestionsRequested@CNewSearchPaneClient@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchPane@Search@ApplicationModel@Windows@@PEAVSearchPaneSuggestionsRequestedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SuggestionsRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibilityChanged@CNewSearchPaneClient@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchPane@Search@ApplicationModel@Windows@@PEAVSearchPaneVisibilityChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Language@CNewSearchPaneClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Language(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PasteEnabled@CNewSearchPaneClient@@UEAAJPEAH@Z
    virtual long get_PasteEnabled(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaceholderText@CNewSearchPaneClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PlaceholderText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreventUnwantedCharacters@CNewSearchPaneClient@@UEAAJPEAH@Z
    virtual long get_PreventUnwantedCharacters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryText@CNewSearchPaneClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QueryText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchHistoryContext@CNewSearchPaneClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SearchHistoryContext(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchHistoryEnabled@CNewSearchPaneClient@@UEAAJPEAE@Z
    virtual long get_SearchHistoryEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchViewToActivate@CNewSearchPaneClient@@UEAAJPEAW4SearchView@@@Z
    virtual long get_SearchViewToActivate(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowOnKeyboardInput@CNewSearchPaneClient@@UEAAJPEAE@Z
    virtual long get_ShowOnKeyboardInput(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visible@CNewSearchPaneClient@@UEAAJPEAE@Z
    virtual long get_Visible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PasteEnabled@CNewSearchPaneClient@@UEAAJH@Z
    virtual long put_PasteEnabled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlaceholderText@CNewSearchPaneClient@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PlaceholderText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreventUnwantedCharacters@CNewSearchPaneClient@@UEAAJH@Z
    virtual long put_PreventUnwantedCharacters(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SearchHistoryContext@CNewSearchPaneClient@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_SearchHistoryContext(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SearchHistoryEnabled@CNewSearchPaneClient@@UEAAJE@Z
    virtual long put_SearchHistoryEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SearchViewToActivate@CNewSearchPaneClient@@UEAAJW4SearchView@@@Z
    virtual long put_SearchViewToActivate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowOnKeyboardInput@CNewSearchPaneClient@@UEAAJE@Z
    virtual long put_ShowOnKeyboardInput(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_QueryChanged@CNewSearchPaneClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_QueryChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_QuerySubmitted@CNewSearchPaneClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_QuerySubmitted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ResultSuggestionChosen@CNewSearchPaneClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ResultSuggestionChosen(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SuggestionsRequested@CNewSearchPaneClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SuggestionsRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibilityChanged@CNewSearchPaneClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibilityChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClientStateChanged@CNewSearchPaneClient@@AEAAJW4ClientStateChangedOption@@@Z
    long _ClientStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSameRequest@CNewSearchPaneClient@@AEAA_NPEBG0@Z
    bool _IsSameRequest(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPaneVisible@CNewSearchPaneClient@@AEAAJ_N@Z
    long _SetPaneVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetQueryAndLanguage@CNewSearchPaneClient@@AEAAJPEBG0@Z
    long _SetQueryAndLanguage(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TruncateHString@CNewSearchPaneClient@@CAJPEAUHSTRING__@@_KPEAPEAG@Z
    static long s_TruncateHString(HSTRING__*, uint64_t, unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNewSearchPaneClient@@EEAA@XZ
    virtual ~CNewSearchPaneClient();
};
