#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 8 member(s).
class CSearchSuggestionHitHighlighter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitHighlightPropertyValue@CSearchSuggestionHitHighlighter@@UEAAJPEAUHSTRING__@@0HPEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    virtual long HitHighlightPropertyValue(HSTRING__*, HSTRING__*, int, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSuggestionHitHighlighter@@UEAA@XZ
    virtual ~CSearchSuggestionHitHighlighter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateHitHighlightedProperty@CSearchSuggestionHitHighlighter@@AEAAJPEAUHSTRING__@@0_NHPEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    long _CreateHitHighlightedProperty(HSTRING__*, HSTRING__*, bool, int, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSemanticTextQuery@CSearchSuggestionHitHighlighter@@AEAAJPEAPEAUISemanticTextQuery@Text@Data@Windows@@@Z
    long _EnsureSemanticTextQuery(::Windows::Data::Text::ISemanticTextQuery * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHitRanges@CSearchSuggestionHitHighlighter@@AEAAJPEAUHSTRING__@@PEAPEAUTextSegment@Text@Data@Windows@@PEAI@Z
    long _GetHitRanges(HSTRING__*, ::Windows::Data::Text::TextSegment * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertHitHighlightMarkers@CSearchSuggestionHitHighlighter@@AEAAJPEAUHSTRING__@@PEAPEAG@Z
    long _InsertHitHighlightMarkers(HSTRING__*, unsigned short * *);
};
