#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 98 member(s).
class CSearchSuggestionManagerClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchSuggestionManagerClient@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToHistory@CSearchSuggestionManagerClient@@UEAAJPEAUHSTRING__@@@Z
    virtual long AddToHistory(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToHistoryWithLanguage@CSearchSuggestionManagerClient@@UEAAJPEAUHSTRING__@@0@Z
    virtual long AddToHistoryWithLanguage(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSuggestions@CSearchSuggestionManagerClient@@UEAAJPEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    virtual long AppendSuggestions(SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSuggestionsToVector@CSearchSuggestionManagerClient@@UEAAJPEAUIUnknown@@PEAUIQueryWithLinguisticAlternatives@@PEBGPEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    virtual long AppendSuggestionsToVector(IUnknown *, IQueryWithLinguisticAlternatives *, unsigned short const *, SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTypeToSearch@CSearchSuggestionManagerClient@@UEAAJPEAUHWND__@@@Z
    virtual long BeginTypeToSearch(HWND__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchSuggestionManagerClient@@QEAA@XZ
    CSearchSuggestionManagerClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHistory@CSearchSuggestionManagerClient@@UEAAJXZ
    virtual long ClearHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CSearchSuggestionManagerClient@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTypeToSearch@CSearchSuggestionManagerClient@@UEAAJXZ
    virtual long EndTypeToSearch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchSuggestionManagerClient@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchSuggestionManagerClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchSuggestionManagerClient@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTypeToSearchMessages@CSearchSuggestionManagerClient@@UEAAJPEBUTYPE_TO_SEARCH_MSG@@I@Z
    virtual long HandleTypeToSearchMessages(TYPE_TO_SEARCH_MSG const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImageDownloadComplete@CSearchSuggestionManagerClient@@UEAAJ_KPEAUHBITMAP__@@@Z
    virtual long ImageDownloadComplete(uint64_t, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CSearchSuggestionManagerClient@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CSearchSuggestionManagerClient@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSearchSuggestionManagerClient@@UEAAJPEAUIThreadPoolTimer@Threading@System@Windows@@@Z
    virtual long Invoke(::Windows::System::Threading::IThreadPoolTimer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPasteEnabled@CSearchSuggestionManagerClient@@UEAA_NXZ
    virtual bool IsPasteEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPreventUnwantedCharactersEnabled@CSearchSuggestionManagerClient@@UEAA_NXZ
    virtual bool IsPreventUnwantedCharactersEnabled();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchSuggestionManagerClient@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CSearchSuggestionManagerClient@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchSuggestionManagerClient@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CSearchSuggestionManagerClient@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeLightDismiss@CSearchSuggestionManagerClient@@UEAAJXZ
    virtual long ResumeLightDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSearchSuggestionManagerClient@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocalContentSuggestionSettings@CSearchSuggestionManagerClient@@UEAAJPEAUILocalContentSuggestionSettings@Search@ApplicationModel@Windows@@@Z
    virtual long SetLocalContentSuggestionSettings(::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQuery@CSearchSuggestionManagerClient@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetQuery(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQueryWithLanguage@CSearchSuggestionManagerClient@@UEAAJPEAUHSTRING__@@0@Z
    virtual long SetQueryWithLanguage(HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQueryWithSearchQueryLinguisticDetails@CSearchSuggestionManagerClient@@UEAAJPEAUHSTRING__@@0PEAUISearchQueryLinguisticDetails@Search@ApplicationModel@Windows@@@Z
    virtual long SetQueryWithSearchQueryLinguisticDetails(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuggestions@CSearchSuggestionManagerClient@@UEAAJPEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    virtual long SetSuggestions(SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuggestionsForQuery@CSearchSuggestionManagerClient@@UEAAJPEBGPEAPEAUISearchTypeAheadSuggestion@@I@Z
    virtual long SetSuggestionsForQuery(unsigned short const *, ISearchTypeAheadSuggestion * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThumbnailInVector@CSearchSuggestionManagerClient@@UEAAJPEAUIUnknown@@_KPEAUHBITMAP__@@@Z
    virtual long UpdateThumbnailInVector(IUnknown *, uint64_t, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AssignImageToSuggestions@CSearchSuggestionManagerClient@@QEAAXPEAUIUnknown@@_KPEAUIStream@@@Z
    void _AssignImageToSuggestions(IUnknown *, uint64_t, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AssignImagesToSuggestions@CSearchSuggestionManagerClient@@QEAAXPEAUIUnknown@@@Z
    void _AssignImagesToSuggestions(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AssignImagesToSuggestionsWorker@CSearchSuggestionManagerClient@@QEAAXPEAUIUnknown@@AEBV?$CCoSimpleArray@UDOWNLOADED_IMAGE@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UDOWNLOADED_IMAGE@@@@@@@Z
    void _AssignImagesToSuggestionsWorker(IUnknown *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RequestingFocusOnKeyboardInput@CSearchSuggestionManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchSuggestionManager@Core@Search@ApplicationModel@Windows@@PEAVRequestingFocusOnKeyboardInputEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_RequestingFocusOnKeyboardInput(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SuggestionsRequested@CSearchSuggestionManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchSuggestionManager@Core@Search@ApplicationModel@Windows@@PEAVSearchSuggestionsRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SuggestionsRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchHistoryContext@CSearchSuggestionManagerClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SearchHistoryContext(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchHistoryEnabled@CSearchSuggestionManagerClient@@UEAAJPEAE@Z
    virtual long get_SearchHistoryEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Suggestions@CSearchSuggestionManagerClient@@UEAAJPEAPEAU?$IObservableVector@PEAVSearchSuggestion@Core@Search@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Suggestions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SearchHistoryContext@CSearchSuggestionManagerClient@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_SearchHistoryContext(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SearchHistoryEnabled@CSearchSuggestionManagerClient@@UEAAJE@Z
    virtual long put_SearchHistoryEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RequestingFocusOnKeyboardInput@CSearchSuggestionManagerClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RequestingFocusOnKeyboardInput(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SuggestionsRequested@CSearchSuggestionManagerClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SuggestionsRequested(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendSuggestionsToVector@CSearchSuggestionManagerClient@@AEAAJPEAU?$IVector@PEAVSearchSuggestion@Core@Search@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUISearchSuggestionHitHighlighter@@PEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    long _AppendSuggestionsToVector(WindissectOpaque *, ISearchSuggestionHitHighlighter *, SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelThreadPoolTimer@CSearchSuggestionManagerClient@@AEAAXXZ
    void _CancelThreadPoolTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBroker@CSearchSuggestionManagerClient@@EEAAJ_NPEAPEAUISearchControlBroker@@@Z
    virtual long _CreateBroker(bool, ISearchControlBroker * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateHitHighlighterForQuery@CSearchSuggestionManagerClient@@AEAAJPEAUIQueryWithLinguisticAlternatives@@PEBGPEAPEAUISearchSuggestionHitHighlighter@@@Z
    long _CreateHitHighlighterForQuery(IQueryWithLinguisticAlternatives *, unsigned short const *, ISearchSuggestionHitHighlighter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateThreadPoolTimer@CSearchSuggestionManagerClient@@AEAAJKPEAPEAUIThreadPoolTimer@Threading@System@Windows@@@Z
    long _CreateThreadPoolTimer(unsigned long, ::Windows::System::Threading::IThreadPoolTimer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindSuggestionInVector@CSearchSuggestionManagerClient@@AEAAJPEAU?$IVector@PEAVSearchSuggestion@Core@Search@ApplicationModel@Windows@@@Collections@Foundation@Windows@@HPEBUSEARCH_TYPEAHEAD_ITEM@@PEAH@Z
    long _FindSuggestionInVector(WindissectOpaque *, int, SEARCH_TYPEAHEAD_ITEM const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeSuggestionsToVector@CSearchSuggestionManagerClient@@AEAAJPEAU?$IVector@PEAVSearchSuggestion@Core@Search@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUISearchSuggestionHitHighlighter@@PEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    long _MergeSuggestionsToVector(WindissectOpaque *, ISearchSuggestionHitHighlighter *, SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimerTick@CSearchSuggestionManagerClient@@AEAAJPEAUHSTRING__@@0PEAUISearchQueryLinguisticDetails@Search@ApplicationModel@Windows@@@Z
    long _OnTimerTick(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PreInvoke@CSearchSuggestionManagerClient@@EEAAJXZ
    virtual long _PreInvoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetLanguageFromOptionalParameter@CSearchSuggestionManagerClient@@CAJPEAUHSTRING__@@PEAPEAG@Z
    static long s_GetLanguageFromOptionalParameter(HSTRING__*, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetLocaleFromOptionalLanguageParameter@CSearchSuggestionManagerClient@@CAJPEAUHSTRING__@@PEAPEAG@Z
    static long s_GetLocaleFromOptionalLanguageParameter(HSTRING__*, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetQueryWithLinguisticAlternativesFromOptionalParameter@CSearchSuggestionManagerClient@@CAJPEAUHSTRING__@@PEAUISearchQueryLinguisticDetails@Search@ApplicationModel@Windows@@PEAPEAUIQueryWithLinguisticAlternatives@@@Z
    static long s_GetQueryWithLinguisticAlternativesFromOptionalParameter(HSTRING__*, ::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails *, IQueryWithLinguisticAlternatives * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSuggestionManagerClient@@EEAA@XZ
    virtual ~CSearchSuggestionManagerClient();
};
