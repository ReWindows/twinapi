#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 15 member(s).
class CNotesWindowManagerPreviewShowNoteOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNotesWindowManagerPreviewShowNoteOptions@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNotesWindowManagerPreviewShowNoteOptions@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNotesWindowManagerPreviewShowNoteOptions@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNotesWindowManagerPreviewShowNoteOptions@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CNotesWindowManagerPreviewShowNoteOptions@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CNotesWindowManagerPreviewShowNoteOptions@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNotesWindowManagerPreviewShowNoteOptions@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNotesWindowManagerPreviewShowNoteOptions@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowWithFocus@CNotesWindowManagerPreviewShowNoteOptions@@UEAAJPEAE@Z
    virtual long get_ShowWithFocus(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowWithFocus@CNotesWindowManagerPreviewShowNoteOptions@@UEAAJE@Z
    virtual long put_ShowWithFocus(unsigned char);
};
