#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 20 member(s).
class CCustomProperty {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCustomProperty@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCustomProperty@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedValue@CCustomProperty@@UEAAJPEAUIInspectable@@0PEAPEAU2@@Z
    virtual long GetIndexedValue(IInspectable *, IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCustomProperty@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCustomProperty@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CCustomProperty@@UEAAJPEAUIInspectable@@PEAPEAU2@@Z
    virtual long GetValue(IInspectable *, IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCustomProperty@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCustomProperty@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndexedValue@CCustomProperty@@UEAAJPEAUIInspectable@@00@Z
    virtual long SetIndexedValue(IInspectable *, IInspectable *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CCustomProperty@@UEAAJPEAUIInspectable@@0@Z
    virtual long SetValue(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRead@CCustomProperty@@UEAAJPEAE@Z
    virtual long get_CanRead(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanWrite@CCustomProperty@@UEAAJPEAE@Z
    virtual long get_CanWrite(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CCustomProperty@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CCustomProperty@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_Type(::Windows::UI::Xaml::Interop::TypeName *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCustomProperty@@EEAA@XZ
    virtual ~CCustomProperty();
};
