#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 10 member(s).
class CSearchPaneTypeToSearchHook {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSearchPaneTypeToSearchHook@@SAJPEAPEAUISearchPaneTypeToSearchHook@@@Z
    static long CreateInstance(ISearchPaneTypeToSearchHook * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSearchPaneTypeToSearchHook@@UEAAJW4TypeToSearchHandlerOptions@@PEAUITypeToSearchHandler@@@Z
    virtual long Initialize(int, ITypeToSearchHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@CSearchPaneTypeToSearchHook@@UEAAJXZ
    virtual long Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetMessageHookProc@CSearchPaneTypeToSearchHook@@SA_JH_K_J@Z
    static int64_t s_GetMessageHookProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Uninitialize@CSearchPaneTypeToSearchHook@@SAJXZ
    static long s_Uninitialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TranslateVKPacketMessage@CSearchPaneTypeToSearchHook@@CAXPEAUtagMSG@@@Z
    static void _TranslateVKPacketMessage(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsPasteMessage@CSearchPaneTypeToSearchHook@@CA_NPEBUtagMSG@@@Z
    static bool s_IsPasteMessage(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ShouldHandleMessage@CSearchPaneTypeToSearchHook@@CA_NPEBUtagMSG@@@Z
    static bool s_ShouldHandleMessage(tagMSG const *);
};
