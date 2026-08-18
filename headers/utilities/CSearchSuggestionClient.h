#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 74 member(s).
class CSearchSuggestionClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchSuggestionClient@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchSuggestionClient@@QEAA@XZ
    CSearchSuggestionClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CSearchSuggestionClient@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomProperty@CSearchSuggestionClient@@UEAAJPEAUHSTRING__@@PEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    virtual long GetCustomProperty(HSTRING__*, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchSuggestionClient@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedProperty@CSearchSuggestionClient@@UEAAJPEAUHSTRING__@@UTypeName@Interop@Xaml@UI@Windows@@PEAPEAUICustomProperty@Data@567@@Z
    virtual long GetIndexedProperty(HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchSuggestionClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringRepresentation@CSearchSuggestionClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetStringRepresentation(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchSuggestionClient@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSuggestionEqual@CSearchSuggestionClient@@UEAAHPEBUSEARCH_TYPEAHEAD_ITEM@@@Z
    virtual int IsSuggestionEqual(SEARCH_TYPEAHEAD_ITEM const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUpdatable@CSearchSuggestionClient@@UEAAHXZ
    virtual int IsUpdatable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddedToVector@CSearchSuggestionClient@@UEAAXXZ
    virtual void OnAddedToVector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemovedFromVector@CSearchSuggestionClient@@UEAAXXZ
    virtual void OnRemovedFromVector();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchSuggestionClient@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchSuggestionClient@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSearchSuggestionClient@@QEAAJPEAUIPropertyValueStatics@Foundation@Windows@@PEAUISearchSuggestionHitHighlighter@@PEBUSEARCH_TYPEAHEAD_ITEM@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ISearchSuggestionHitHighlighter *, SEARCH_TYPEAHEAD_ITEM const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHitHighlighter@CSearchSuggestionClient@@UEAAJPEAUISearchSuggestionHitHighlighter@@@Z
    virtual long SetHitHighlighter(ISearchSuggestionHitHighlighter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImage@CSearchSuggestionClient@@UEAAJ_KPEAUIStream@@@Z
    virtual long SetImage(uint64_t, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@CSearchSuggestionClient@@UEAAJPEAUIPropertyChangedEventHandler@Data@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertyChanged(::Windows::UI::Xaml::Data::IPropertyChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DetailText@CSearchSuggestionClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DetailText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Image@CSearchSuggestionClient@@UEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@Windows@@@Z
    virtual long get_Image(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ImageAlternateText@CSearchSuggestionClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ImageAlternateText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@CSearchSuggestionClient@@UEAAJPEAW4SearchSuggestionKind@Core@Search@ApplicationModel@Windows@@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tag@CSearchSuggestionClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Tag(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@CSearchSuggestionClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Text(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CSearchSuggestionClient@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_Type(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@CSearchSuggestionClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertyChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AreStringsEqual@CSearchSuggestionClient@@AEAA_NPEAUHSTRING__@@PEBG@Z
    bool _AreStringsEqual(HSTRING__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BindImageStreamToProperty@CSearchSuggestionClient@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAUICustomProperty@Data@Xaml@UI@5@@Z
    long _BindImageStreamToProperty(WindissectOpaque *, ::Windows::UI::Xaml::Data::ICustomProperty *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearPropertyIfCached@CSearchSuggestionClient@@AEAAJPEAUHSTRING__@@@Z
    long _ClearPropertyIfCached(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateHitHighlightedProperty@CSearchSuggestionClient@@AEAAJPEAUHSTRING__@@0HPEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    long _CreateHitHighlightedProperty(HSTRING__*, HSTRING__*, int, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateStringProperty@CSearchSuggestionClient@@AEAAJPEAUHSTRING__@@0PEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    long _CreateStringProperty(HSTRING__*, HSTRING__*, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUInt32Property@CSearchSuggestionClient@@AEAAJPEAUHSTRING__@@IPEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    long _CreateUInt32Property(HSTRING__*, unsigned int, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FirePropertyChanged@CSearchSuggestionClient@@AEAAJPEAUHSTRING__@@@Z
    long _FirePropertyChanged(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyWaitForImageStreamReference@CSearchSuggestionClient@@AEAAJXZ
    long _NotifyWaitForImageStreamReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateProperty@CSearchSuggestionClient@@AEAAXPEAUHSTRING__@@0H@Z
    void _UpdateProperty(HSTRING__*, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AttachOptionalHString@CSearchSuggestionClient@@CAJAEAVHString@Wrappers@WRL@Microsoft@@PEBG@Z
    static long s_AttachOptionalHString(::Microsoft::WRL::Wrappers::HString &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SearchSuggestionKindFromTypeAheadItemType@CSearchSuggestionClient@@CA?AW4SearchSuggestionKind@Core@Search@ApplicationModel@Windows@@W4SEARCH_TYPEAHEAD_ITEM_TYPE@@@Z
    static int s_SearchSuggestionKindFromTypeAheadItemType(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSuggestionClient@@EEAA@XZ
    virtual ~CSearchSuggestionClient();
};
