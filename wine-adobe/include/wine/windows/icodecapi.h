/*** Autogenerated by WIDL 9.21 from ../include/icodecapi.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __icodecapi_h__
#define __icodecapi_h__

/* Forward declarations */

#ifndef __ICodecAPI_FWD_DEFINED__
#define __ICodecAPI_FWD_DEFINED__
typedef interface ICodecAPI ICodecAPI;
#ifdef __cplusplus
interface ICodecAPI;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IStream_FWD_DEFINED__
#define __IStream_FWD_DEFINED__
typedef interface IStream IStream;
#ifdef __cplusplus
interface IStream;
#endif /* __cplusplus */
#endif

struct CodecAPIEventData {
    GUID guid;
    DWORD dataLength;
    DWORD reserved[3];
};
/*****************************************************************************
 * ICodecAPI interface
 */
#ifndef __ICodecAPI_INTERFACE_DEFINED__
#define __ICodecAPI_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICodecAPI, 0x901db4c7, 0x31ce, 0x41a2, 0x85,0xdc, 0x8f,0xa0,0xbf,0x41,0xb8,0xda);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("901db4c7-31ce-41a2-85dc-8fa0bf41b8da")
ICodecAPI : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE IsSupported(
        const GUID *api) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsModifiable(
        const GUID *api) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetParameterRange(
        const GUID *api,
        VARIANT *min,
        VARIANT *max,
        VARIANT *delta) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetParameterValues(
        const GUID *api,
        VARIANT **values,
        ULONG *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDefaultValue(
        const GUID *api,
        VARIANT *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetValue(
        const GUID *api,
        VARIANT *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetValue(
        const GUID *api,
        VARIANT *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE RegisterForEvent(
        const GUID *api,
        LONG_PTR userData) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnregisterForEvent(
        const GUID *api) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAllDefaults(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetValueWithNotify(
        const GUID *api,
        VARIANT *value,
        GUID **param,
        ULONG *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAllDefaultsWithNotify(
        GUID **param,
        ULONG *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAllSettings(
        IStream *stream) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAllSettings(
        IStream *stream) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAllSettingsWithNotify(
        IStream *stream,
        GUID **param,
        ULONG *count) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICodecAPI, 0x901db4c7, 0x31ce, 0x41a2, 0x85,0xdc, 0x8f,0xa0,0xbf,0x41,0xb8,0xda)
#endif
#else
typedef struct ICodecAPIVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICodecAPI *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICodecAPI *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICodecAPI *This);

    /*** ICodecAPI methods ***/
    HRESULT (STDMETHODCALLTYPE *IsSupported)(
        ICodecAPI *This,
        const GUID *api);

    HRESULT (STDMETHODCALLTYPE *IsModifiable)(
        ICodecAPI *This,
        const GUID *api);

    HRESULT (STDMETHODCALLTYPE *GetParameterRange)(
        ICodecAPI *This,
        const GUID *api,
        VARIANT *min,
        VARIANT *max,
        VARIANT *delta);

    HRESULT (STDMETHODCALLTYPE *GetParameterValues)(
        ICodecAPI *This,
        const GUID *api,
        VARIANT **values,
        ULONG *count);

    HRESULT (STDMETHODCALLTYPE *GetDefaultValue)(
        ICodecAPI *This,
        const GUID *api,
        VARIANT *value);

    HRESULT (STDMETHODCALLTYPE *GetValue)(
        ICodecAPI *This,
        const GUID *api,
        VARIANT *value);

    HRESULT (STDMETHODCALLTYPE *SetValue)(
        ICodecAPI *This,
        const GUID *api,
        VARIANT *value);

    HRESULT (STDMETHODCALLTYPE *RegisterForEvent)(
        ICodecAPI *This,
        const GUID *api,
        LONG_PTR userData);

    HRESULT (STDMETHODCALLTYPE *UnregisterForEvent)(
        ICodecAPI *This,
        const GUID *api);

    HRESULT (STDMETHODCALLTYPE *SetAllDefaults)(
        ICodecAPI *This);

    HRESULT (STDMETHODCALLTYPE *SetValueWithNotify)(
        ICodecAPI *This,
        const GUID *api,
        VARIANT *value,
        GUID **param,
        ULONG *count);

    HRESULT (STDMETHODCALLTYPE *SetAllDefaultsWithNotify)(
        ICodecAPI *This,
        GUID **param,
        ULONG *count);

    HRESULT (STDMETHODCALLTYPE *GetAllSettings)(
        ICodecAPI *This,
        IStream *stream);

    HRESULT (STDMETHODCALLTYPE *SetAllSettings)(
        ICodecAPI *This,
        IStream *stream);

    HRESULT (STDMETHODCALLTYPE *SetAllSettingsWithNotify)(
        ICodecAPI *This,
        IStream *stream,
        GUID **param,
        ULONG *count);

    END_INTERFACE
} ICodecAPIVtbl;

interface ICodecAPI {
    CONST_VTBL ICodecAPIVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICodecAPI_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICodecAPI_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICodecAPI_Release(This) (This)->lpVtbl->Release(This)
/*** ICodecAPI methods ***/
#define ICodecAPI_IsSupported(This,api) (This)->lpVtbl->IsSupported(This,api)
#define ICodecAPI_IsModifiable(This,api) (This)->lpVtbl->IsModifiable(This,api)
#define ICodecAPI_GetParameterRange(This,api,min,max,delta) (This)->lpVtbl->GetParameterRange(This,api,min,max,delta)
#define ICodecAPI_GetParameterValues(This,api,values,count) (This)->lpVtbl->GetParameterValues(This,api,values,count)
#define ICodecAPI_GetDefaultValue(This,api,value) (This)->lpVtbl->GetDefaultValue(This,api,value)
#define ICodecAPI_GetValue(This,api,value) (This)->lpVtbl->GetValue(This,api,value)
#define ICodecAPI_SetValue(This,api,value) (This)->lpVtbl->SetValue(This,api,value)
#define ICodecAPI_RegisterForEvent(This,api,userData) (This)->lpVtbl->RegisterForEvent(This,api,userData)
#define ICodecAPI_UnregisterForEvent(This,api) (This)->lpVtbl->UnregisterForEvent(This,api)
#define ICodecAPI_SetAllDefaults(This) (This)->lpVtbl->SetAllDefaults(This)
#define ICodecAPI_SetValueWithNotify(This,api,value,param,count) (This)->lpVtbl->SetValueWithNotify(This,api,value,param,count)
#define ICodecAPI_SetAllDefaultsWithNotify(This,param,count) (This)->lpVtbl->SetAllDefaultsWithNotify(This,param,count)
#define ICodecAPI_GetAllSettings(This,stream) (This)->lpVtbl->GetAllSettings(This,stream)
#define ICodecAPI_SetAllSettings(This,stream) (This)->lpVtbl->SetAllSettings(This,stream)
#define ICodecAPI_SetAllSettingsWithNotify(This,stream,param,count) (This)->lpVtbl->SetAllSettingsWithNotify(This,stream,param,count)
#else
/*** IUnknown methods ***/
static inline HRESULT ICodecAPI_QueryInterface(ICodecAPI* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static inline ULONG ICodecAPI_AddRef(ICodecAPI* This) {
    return This->lpVtbl->AddRef(This);
}
static inline ULONG ICodecAPI_Release(ICodecAPI* This) {
    return This->lpVtbl->Release(This);
}
/*** ICodecAPI methods ***/
static inline HRESULT ICodecAPI_IsSupported(ICodecAPI* This,const GUID *api) {
    return This->lpVtbl->IsSupported(This,api);
}
static inline HRESULT ICodecAPI_IsModifiable(ICodecAPI* This,const GUID *api) {
    return This->lpVtbl->IsModifiable(This,api);
}
static inline HRESULT ICodecAPI_GetParameterRange(ICodecAPI* This,const GUID *api,VARIANT *min,VARIANT *max,VARIANT *delta) {
    return This->lpVtbl->GetParameterRange(This,api,min,max,delta);
}
static inline HRESULT ICodecAPI_GetParameterValues(ICodecAPI* This,const GUID *api,VARIANT **values,ULONG *count) {
    return This->lpVtbl->GetParameterValues(This,api,values,count);
}
static inline HRESULT ICodecAPI_GetDefaultValue(ICodecAPI* This,const GUID *api,VARIANT *value) {
    return This->lpVtbl->GetDefaultValue(This,api,value);
}
static inline HRESULT ICodecAPI_GetValue(ICodecAPI* This,const GUID *api,VARIANT *value) {
    return This->lpVtbl->GetValue(This,api,value);
}
static inline HRESULT ICodecAPI_SetValue(ICodecAPI* This,const GUID *api,VARIANT *value) {
    return This->lpVtbl->SetValue(This,api,value);
}
static inline HRESULT ICodecAPI_RegisterForEvent(ICodecAPI* This,const GUID *api,LONG_PTR userData) {
    return This->lpVtbl->RegisterForEvent(This,api,userData);
}
static inline HRESULT ICodecAPI_UnregisterForEvent(ICodecAPI* This,const GUID *api) {
    return This->lpVtbl->UnregisterForEvent(This,api);
}
static inline HRESULT ICodecAPI_SetAllDefaults(ICodecAPI* This) {
    return This->lpVtbl->SetAllDefaults(This);
}
static inline HRESULT ICodecAPI_SetValueWithNotify(ICodecAPI* This,const GUID *api,VARIANT *value,GUID **param,ULONG *count) {
    return This->lpVtbl->SetValueWithNotify(This,api,value,param,count);
}
static inline HRESULT ICodecAPI_SetAllDefaultsWithNotify(ICodecAPI* This,GUID **param,ULONG *count) {
    return This->lpVtbl->SetAllDefaultsWithNotify(This,param,count);
}
static inline HRESULT ICodecAPI_GetAllSettings(ICodecAPI* This,IStream *stream) {
    return This->lpVtbl->GetAllSettings(This,stream);
}
static inline HRESULT ICodecAPI_SetAllSettings(ICodecAPI* This,IStream *stream) {
    return This->lpVtbl->SetAllSettings(This,stream);
}
static inline HRESULT ICodecAPI_SetAllSettingsWithNotify(ICodecAPI* This,IStream *stream,GUID **param,ULONG *count) {
    return This->lpVtbl->SetAllSettingsWithNotify(This,stream,param,count);
}
#endif
#endif

#endif


#endif  /* __ICodecAPI_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __icodecapi_h__ */
