#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 10 member(s).
class CImageDownloader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAll@CImageDownloader@@UEAAJXZ
    virtual long CancelAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadImages@CImageDownloader@@UEAAJPEAPEAUISearchTypeAheadSuggestion@@PEBUSEARCH_TYPEAHEAD_ITEM@@_KPEAUHMONITOR__@@PEAUISearchControlClient@@@Z
    virtual long DownloadImages(ISearchTypeAheadSuggestion * *, SEARCH_TYPEAHEAD_ITEM const *, uint64_t, HMONITOR__*, ISearchControlClient *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateStreamReferenceWithCaching@CImageDownloader@@AEAAJPEAUIStreamReferencePrivate@@PEAPEAU2@@Z
    long _CreateStreamReferenceWithCaching(IStreamReferencePrivate *, IStreamReferencePrivate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DownloadImage@CImageDownloader@@AEAAJ_KPEAUIStreamReferencePrivate@@PEAUHMONITOR__@@PEAUISearchControlClient@@@Z
    long _DownloadImage(uint64_t, IStreamReferencePrivate *, HMONITOR__*, ISearchControlClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureShellTaskScheduler@CImageDownloader@@AEAAJPEAPEAUIShellTaskScheduler@@@Z
    long _EnsureShellTaskScheduler(IShellTaskScheduler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureStreamReferenceStatics@CImageDownloader@@AEAAJPEAPEAUIRandomAccessStreamReferenceStaticsPrivate@Streams@Storage@Windows@@@Z
    long _EnsureStreamReferenceStatics(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageSourceFromSearchTypeAheadSuggestion@CImageDownloader@@AEAAJPEAUISearchTypeAheadSuggestion@@PEAPEAUIStreamReferencePrivate@@@Z
    long _GetImageSourceFromSearchTypeAheadSuggestion(ISearchTypeAheadSuggestion *, IStreamReferencePrivate * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageDownloader@@EEAA@XZ
    virtual ~CImageDownloader();
};
