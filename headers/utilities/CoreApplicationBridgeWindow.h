#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 80 member(s).
class CoreApplicationBridgeWindow {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreApplicationBridgeWindow@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowIsReady@CoreApplicationBridgeWindow@@UEAAJXZ
    virtual long AppWindowIsReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CoreApplicationBridgeWindow@@UEAAJXZ
    virtual long Close();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreApplicationBridgeWindow@@QEAA@XZ
    CoreApplicationBridgeWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrame@CoreApplicationBridgeWindow@@UEAAJPEBUtagRECT@@PEAUHWND__@@@Z
    virtual long CreateFrame(tagRECT const *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBridgeWindow@CoreApplicationBridgeWindow@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetBridgeWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPosition@CoreApplicationBridgeWindow@@UEAAJPEAUtagRECT@@@Z
    virtual long GetContentPosition(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameWindow@CoreApplicationBridgeWindow@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetFrameWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreApplicationBridgeWindow@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreApplicationBridgeWindow@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreApplicationBridgeWindow@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CoreApplicationBridgeWindow@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CoreApplicationBridgeWindow@@UEAAJXZ
    virtual long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideApplication@CoreApplicationBridgeWindow@@UEAAJW4APP_TRANSITION_TYPE@@@Z
    virtual long HideApplication(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeBridge@CoreApplicationBridgeWindow@@UEAAJAEBU_GUID@@@Z
    virtual long InitializeBridge(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationTerminated@CoreApplicationBridgeWindow@@UEAAHXZ
    virtual int IsApplicationTerminated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationVisible@CoreApplicationBridgeWindow@@UEAAHXZ
    virtual int IsApplicationVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepInputQueueDetached@CoreApplicationBridgeWindow@@UEAAJH@Z
    virtual long KeepInputQueueDetached(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationComplete@CoreApplicationBridgeWindow@@UEAAXJ@Z
    virtual void OnActivationComplete(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationCompleteWithSplashScreenCallback@CoreApplicationBridgeWindow@@UEAAXJPEAUISplashScreenPriv@@@Z
    virtual void OnActivationCompleteWithSplashScreenCallback(long, ISplashScreenPriv *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreApplicationBridgeWindow@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreApplicationBridgeWindow@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CoreApplicationBridgeWindow@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CoreApplicationBridgeWindow@@UEAAJPEAUIUnknown@@@Z
    virtual long SetContent(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventSink@CoreApplicationBridgeWindow@@UEAAJPEAUIWeakReference@@@Z
    virtual long SetEventSink(IWeakReference *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedApplication@CoreApplicationBridgeWindow@@UEAAJPEAUIHostedApplication@@@Z
    virtual long SetHostedApplication(IHostedApplication *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedWindow@CoreApplicationBridgeWindow@@UEAAJPEAUHWND__@@@Z
    virtual long SetHostedWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseTopLevelWindow@CoreApplicationBridgeWindow@@UEAAJH@Z
    virtual long SetUseTopLevelWindow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CoreApplicationBridgeWindow@@UEAAJXZ
    virtual long Show();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowApplication@CoreApplicationBridgeWindow@@UEAAJW4APP_TRANSITION_TYPE@@PEAUHWND__@@@Z
    virtual long ShowApplication(int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CoreApplicationBridgeWindow@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CoreApplicationBridgeWindow@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CoreApplicationBridgeWindow@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Terminated@CoreApplicationBridgeWindow@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUIApplicationTerminatedEventArgs@ApplicationHosting@Internal@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Terminated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostWindow@CoreApplicationBridgeWindow@@UEAAJPEAI@Z
    virtual long get_HostWindow(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CoreApplicationBridgeWindow@@UEAAJPEA_K@Z
    virtual long get_Id(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsClosed@CoreApplicationBridgeWindow@@UEAAJPEAE@Z
    virtual long get_IsClosed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@CoreApplicationBridgeWindow@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CoreApplicationBridgeWindow@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@CoreApplicationBridgeWindow@@UEAAJPEAK@Z
    virtual long get_ProcessId(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HostWindow@CoreApplicationBridgeWindow@@UEAAJI@Z
    virtual long put_HostWindow(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsVisible@CoreApplicationBridgeWindow@@UEAAJE@Z
    virtual long put_IsVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Position@CoreApplicationBridgeWindow@@UEAAJURect@Foundation@Windows@@@Z
    virtual long put_Position(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Terminated@CoreApplicationBridgeWindow@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Terminated(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplicationBridgeWindow@@UEAA@XZ
    virtual ~CoreApplicationBridgeWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAppIsBridged@CoreApplicationBridgeWindow@@AEAAJXZ
    long EnsureAppIsBridged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBridgeWindow@CoreApplicationBridgeWindow@@AEAAJPEAUHWND__@@@Z
    long EnsureBridgeWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostedApplication@CoreApplicationBridgeWindow@@AEAAJPEAPEAUIHostedApplication@@@Z
    long GetHostedApplication(IHostedApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaybeShowAppWindowIfReady@CoreApplicationBridgeWindow@@AEAAXXZ
    void MaybeShowAppWindowIfReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconnectBridgeWindowToHostedApplication@CoreApplicationBridgeWindow@@AEAAJK@Z
    long ReconnectBridgeWindowToHostedApplication(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendTerminationEvent@CoreApplicationBridgeWindow@@AEAAJW4ApplicationTerminationReason@ApplicationHosting@Internal@Windows@@@Z
    long SendTerminationEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownInternal@CoreApplicationBridgeWindow@@AEAAJXZ
    long ShutdownInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncVisibility@CoreApplicationBridgeWindow@@AEAAJXZ
    long SyncVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncWindowPosition@CoreApplicationBridgeWindow@@AEAAJXZ
    long SyncWindowPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferFocusToHostedApp@CoreApplicationBridgeWindow@@AEAAX_NPEAUtagMSG@@@Z
    void TransferFocusToHostedApp(bool, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHostedApplicationRect@CoreApplicationBridgeWindow@@AEAAJXZ
    long UpdateHostedApplicationRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHostedApplicationVisiblity@CoreApplicationBridgeWindow@@AEAAJ_N@Z
    long UpdateHostedApplicationVisiblity(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CoreApplicationBridgeWindow@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
