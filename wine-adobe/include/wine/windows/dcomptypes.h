/*** Autogenerated by WIDL 9.21 from ../include/dcomptypes.idl - Do not edit ***/

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

#ifndef __dcomptypes_h__
#define __dcomptypes_h__

/* Forward declarations */

/* Headers for imported files */

#include <dxgitype.h>
#include <dxgi1_5.h>

#ifdef __cplusplus
extern "C" {
#endif

enum DCOMPOSITION_BITMAP_INTERPOLATION_MODE {
    DCOMPOSITION_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR = 0,
    DCOMPOSITION_BITMAP_INTERPOLATION_MODE_LINEAR = 1,
    DCOMPOSITION_BITMAP_INTERPOLATION_MODE_INHERIT = 0xffffffff
};
enum DCOMPOSITION_BORDER_MODE {
    DCOMPOSITION_BORDER_MODE_SOFT = 0,
    DCOMPOSITION_BORDER_MODE_HARD = 1,
    DCOMPOSITION_BORDER_MODE_INHERIT = 0xffffffff
};
enum DCOMPOSITION_COMPOSITE_MODE {
    DCOMPOSITION_COMPOSITE_MODE_SOURCE_OVER = 0,
    DCOMPOSITION_COMPOSITE_MODE_DESTINATION_INVERT = 1,
    DCOMPOSITION_COMPOSITE_MODE_MIN_BLEND = 2,
    DCOMPOSITION_COMPOSITE_MODE_INHERIT = 0xffffffff
};
enum DCOMPOSITION_BACKFACE_VISIBILITY {
    DCOMPOSITION_BACKFACE_VISIBILITY_VISIBLE = 0,
    DCOMPOSITION_BACKFACE_VISIBILITY_HIDDEN = 1,
    DCOMPOSITION_BACKFACE_VISIBILITY_INHERIT = 0xffffffff
};
enum DCOMPOSITION_OPACITY_MODE {
    DCOMPOSITION_OPACITY_MODE_LAYER = 0,
    DCOMPOSITION_OPACITY_MODE_MULTIPLY = 1,
    DCOMPOSITION_OPACITY_MODE_INHERIT = 0xffffffff
};
enum DCOMPOSITION_DEPTH_MODE {
    DCOMPOSITION_DEPTH_MODE_TREE = 0,
    DCOMPOSITION_DEPTH_MODE_SPATIAL = 1,
    DCOMPOSITION_DEPTH_MODE_SORTED = 3,
    DCOMPOSITION_DEPTH_MODE_INHERIT = 0xffffffff
};
typedef struct __WIDL_dcomptypes_generated_name_0000001E {
    LARGE_INTEGER lastFrameTime;
    DXGI_RATIONAL currentCompositionRate;
    LARGE_INTEGER currentTime;
    LARGE_INTEGER timeFrequency;
    LARGE_INTEGER nextEstimatedFrameTime;
} DCOMPOSITION_FRAME_STATISTICS;
#define COMPOSITIONOBJECT_READ       0x0001L
#define COMPOSITIONOBJECT_WRITE      0x0002L
#define COMPOSITIONOBJECT_ALL_ACCESS (COMPOSITIONOBJECT_READ | COMPOSITIONOBJECT_WRITE)
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __dcomptypes_h__ */
