#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 74 member(s).
class CoreApplicationBridge {
public:
    class INIT_THREAD_DATA;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplication@CoreApplicationBridge@@QEAAJURect@Foundation@Windows@@PEBG1PEAUIInspectable@@@Z
    long ActivateApplication(WindissectOpaque, unsigned short const *, unsigned short const *, IInspectable *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreApplicationBridge@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowReadyForPresentation@CoreApplicationBridge@@UEAAJXZ
    virtual long AppWindowReadyForPresentation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssociateActivationContext@CoreApplicationBridge@@UEAAJI@Z
    virtual long AssociateActivationContext(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssociateHostIdFromActivation@CoreApplicationBridge@@UEAAJ_K@Z
    virtual long AssociateHostIdFromActivation(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CoreApplicationBridge@@UEAAJXZ
    virtual long Close();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreApplicationBridge@@QEAA@XZ
    CoreApplicationBridge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSplashScreenEvents@CoreApplicationBridge@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long CreateSplashScreenEvents(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreApplicationBridge@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreApplicationBridge@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreApplicationBridge@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CoreApplicationBridge@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CoreApplicationBridge@@UEAAJPEBGPEBUtagRECT@@@Z
    virtual long Initialize(unsigned short const *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellExperience@CoreApplicationBridge@@UEAAJPEAH@Z
    virtual long IsShellExperience(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationBegin@CoreApplicationBridge@@UEAAJPEBGW4SPLASHSCREEN_FLAGS@@PEAPEAUHWND__@@@Z
    virtual long OnActivationBegin(unsigned short const *, int, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationEnd@CoreApplicationBridge@@UEAAJJ_K@Z
    virtual long OnActivationEnd(long, uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreApplicationBridge@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreApplicationBridge@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindow@CoreApplicationBridge@@UEAAJJ@Z
    virtual long SetAppWindow(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindowAndGetHostProcess@CoreApplicationBridge@@UEAAJJPEA_K@Z
    virtual long SetAppWindowAndGetHostProcess(long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedApp@CoreApplicationBridge@@UEAAJPEAUIHostedApplication@@@Z
    virtual long SetHostedApp(IHostedApplication *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedAppWindow@CoreApplicationBridge@@UEAAJPEAUHWND__@@@Z
    virtual long SetHostedAppWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldActivateWithTimeoutsDisabled@CoreApplicationBridge@@UEAAJPEAH@Z
    virtual long ShouldActivateWithTimeoutsDisabled(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSplashScreen@CoreApplicationBridge@@UEAAJXZ
    virtual long ShowSplashScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToApp@CoreApplicationBridge@@UEAAJXZ
    virtual long TransitionToApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CoreApplicationBridge@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CoreApplicationBridge@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Terminated@CoreApplicationBridge@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUIApplicationTerminatedEventArgs@ApplicationHosting@Internal@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Terminated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BridgeWindow@CoreApplicationBridge@@UEAAJPEAPEAUICoreApplicationBridgeWindow@ApplicationHosting@Internal@Windows@@@Z
    virtual long get_BridgeWindow(::Windows::Internal::ApplicationHosting::ICoreApplicationBridgeWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostWindow@CoreApplicationBridge@@UEAAJPEAI@Z
    virtual long get_HostWindow(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CoreApplicationBridge@@UEAAJPEA_K@Z
    virtual long get_Id(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@CoreApplicationBridge@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CoreApplicationBridge@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@CoreApplicationBridge@@UEAAJPEAK@Z
    virtual long get_ProcessId(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BridgeWindow@CoreApplicationBridge@@UEAAJPEAUICoreApplicationBridgeWindow@ApplicationHosting@Internal@Windows@@@Z
    virtual long put_BridgeWindow(::Windows::Internal::ApplicationHosting::ICoreApplicationBridgeWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HostWindow@CoreApplicationBridge@@UEAAJI@Z
    virtual long put_HostWindow(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsVisible@CoreApplicationBridge@@UEAAJE@Z
    virtual long put_IsVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Position@CoreApplicationBridge@@UEAAJURect@Foundation@Windows@@@Z
    virtual long put_Position(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Terminated@CoreApplicationBridge@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Terminated(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplicationBridge@@UEAA@XZ
    virtual ~CoreApplicationBridge();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreApplicationBridgeFromBridgeWindow@CoreApplicationBridge@@AEAAJPEAPEAUICoreApplicationBridge@ApplicationHosting@Internal@Windows@@@Z
    long GetCoreApplicationBridgeFromBridgeWindow(::Windows::Internal::ApplicationHosting::ICoreApplicationBridge * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostedApplicationBridgeFromBridgeWindow@CoreApplicationBridge@@AEAAJPEAPEAUIHostedApplicationBridgeWindow@@@Z
    long GetHostedApplicationBridgeFromBridgeWindow(IHostedApplicationBridgeWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputObjectFromBridgeWindow@CoreApplicationBridge@@AEAAJPEAPEAUIInputObject@@@Z
    long GetInputObjectFromBridgeWindow(IInputObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CoreApplicationBridge@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBridgeWindowThread@CoreApplicationBridge@@AEAAJXZ
    long StartBridgeWindowThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopBridgeWindowThread@CoreApplicationBridge@@AEAAJXZ
    long StopBridgeWindowThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RunBridgeWindowMessageLoop@CoreApplicationBridge@@CAXPEAX@Z
    static void s_RunBridgeWindowMessageLoop(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RunBridgeWindowThread@CoreApplicationBridge@@CAKPEAX@Z
    static unsigned long s_RunBridgeWindowThread(void *);
};
