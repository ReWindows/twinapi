// Flat C exports observed in twinapi.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef TWINAPI_C_H
#define TWINAPI_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: DllGetActivationFactory (ABI unverified)
// Export: DllCanUnloadNow (ABI unverified)
// Export: DllGetClassObject (ABI unverified)
// Export: #ordinal9 (ABI unverified)
// Export: IsImmersiveWindowImpl (ABI unverified)
// Export: #ordinal1 (ABI unverified)
// Export: ImmersiveTDBN_NotifyIcon (ABI unverified)
// Export: #ordinal11 (ABI unverified)
// Export: QueryWindowService (ABI unverified)
// Export: #ordinal10 (ABI unverified)
// Export: RegisterWindowService (ABI unverified)
// Export: #ordinal13 (ABI unverified)
// Export: UnregisterWindowService (ABI unverified)
// Export: #ordinal15 (ABI unverified)
// Export: EnumWindowServices (ABI unverified)
// Export: #ordinal4 (ABI unverified)
// Export: IsApplicationServiceSupported (ABI unverified)
// Export: #ordinal12 (ABI unverified)
// Export: IsWindowServiceSupported (ABI unverified)
// Export: #ordinal3 (ABI unverified)
// Export: QueryApplicationService (ABI unverified)
// Export: #ordinal2 (ABI unverified)
// Export: RegisterApplicationService (ABI unverified)
// Export: #ordinal6 (ABI unverified)
// Export: UnregisterAllApplicationServices (ABI unverified)
// Export: #ordinal14 (ABI unverified)
// Export: UnregisterAllWindowServices (ABI unverified)
// Export: #ordinal5 (ABI unverified)
// Export: UnregisterApplicationService (ABI unverified)
// Export: #ordinal7 (ABI unverified)
// Export: CreateImmersiveWindow (ABI unverified)
// Export: GetMetroMode (ABI unverified)
// Export: #ordinal500 (ABI unverified)
// Export: RegisterMeetNowWindow (ABI unverified)
// Export: #ordinal501 (ABI unverified)
// Export: SetMeetNowIconBadge (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // TWINAPI_C_H
