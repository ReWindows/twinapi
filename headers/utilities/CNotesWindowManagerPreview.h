#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 48 member(s).
class CNotesWindowManagerPreview {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNotesWindowManagerPreview@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNotesWindowManagerPreview@@QEAA@XZ
    CNotesWindowManagerPreview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNotesWindowManagerPreview@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotePlacement@CNotesWindowManagerPreview@@UEAAJHPEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long GetNotePlacement(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNotesWindowManagerPreview@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNotesWindowManagerPreview@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideNote@CNotesWindowManagerPreview@@UEAAJH@Z
    virtual long HideNote(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CNotesWindowManagerPreview@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CNotesWindowManagerPreview@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyNoteVisibilityChanged@CNotesWindowManagerPreview@@UEAAJIE@Z
    virtual long NotifyNoteVisibilityChanged(unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySystemLockStateChanged@CNotesWindowManagerPreview@@UEAAJXZ
    virtual long NotifySystemLockStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWindowSpatialDataChanged@CNotesWindowManagerPreview@@UEAAJI@Z
    virtual long NotifyWindowSpatialDataChanged(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNotesWindowManagerPreview@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNotesWindowManagerPreview@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CNotesWindowManagerPreview@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusToNextView@CNotesWindowManagerPreview@@UEAAJXZ
    virtual long SetFocusToNextView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusToPreviousView@CNotesWindowManagerPreview@@UEAAJXZ
    virtual long SetFocusToPreviousView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotesThumbnailAsync@CNotesWindowManagerPreview@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long SetNotesThumbnailAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnailImageForTaskSwitcherAsync@CNotesWindowManagerPreview@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@PEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long SetThumbnailImageForTaskSwitcherAsync(::Windows::Graphics::Imaging::ISoftwareBitmap *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStickyNotesBeUsingNewApis@CNotesWindowManagerPreview@@UEAAJPEAH@Z
    virtual long ShouldStickyNotesBeUsingNewApis(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNote@CNotesWindowManagerPreview@@UEAAJH@Z
    virtual long ShowNote(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNoteRelativeTo@CNotesWindowManagerPreview@@UEAAJHH@Z
    virtual long ShowNoteRelativeTo(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNoteRelativeToWithOptions@CNotesWindowManagerPreview@@UEAAJHHPEAUINotesWindowManagerPreviewShowNoteOptions@Notes@Preview@ApplicationModel@Windows@@@Z
    virtual long ShowNoteRelativeToWithOptions(int, int, ::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNoteWithPlacement@CNotesWindowManagerPreview@@UEAAJHPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long ShowNoteWithPlacement(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNoteWithPlacementWithOptions@CNotesWindowManagerPreview@@UEAAJHPEAUIBuffer@Streams@Storage@Windows@@PEAUINotesWindowManagerPreviewShowNoteOptions@Notes@Preview@ApplicationModel@5@@Z
    virtual long ShowNoteWithPlacementWithOptions(int, WindissectOpaque *, ::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetNoteSize@CNotesWindowManagerPreview@@UEAAJHUSize@Foundation@Windows@@PEAE@Z
    virtual long TrySetNoteSize(int, WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_NotePlacementChanged@CNotesWindowManagerPreview@@UEAAJPEAU?$ITypedEventHandler@PEAVNotesWindowManagerPreview@Notes@Preview@ApplicationModel@Windows@@PEAVNotePlacementChangedPreviewEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_NotePlacementChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_NoteVisibilityChanged@CNotesWindowManagerPreview@@UEAAJPEAU?$ITypedEventHandler@PEAVNotesWindowManagerPreview@Notes@Preview@ApplicationModel@Windows@@PEAVNoteVisibilityChangedPreviewEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_NoteVisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SystemLockStateChanged@CNotesWindowManagerPreview@@UEAAJPEAU?$ITypedEventHandler@PEAVNotesWindowManagerPreview@Notes@Preview@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SystemLockStateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsScreenLocked@CNotesWindowManagerPreview@@UEAAJPEAE@Z
    virtual long get_IsScreenLocked(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_NotePlacementChanged@CNotesWindowManagerPreview@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_NotePlacementChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_NoteVisibilityChanged@CNotesWindowManagerPreview@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_NoteVisibilityChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SystemLockStateChanged@CNotesWindowManagerPreview@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SystemLockStateChanged(EventRegistrationToken);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNotesWindowManagerPreview@@EEAA@XZ
    virtual ~CNotesWindowManagerPreview();
};
