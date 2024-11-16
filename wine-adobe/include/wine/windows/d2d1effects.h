/*** Autogenerated by WIDL 9.21 from ../include/d2d1effects.idl - Do not edit ***/

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

#ifndef __d2d1effects_h__
#define __d2d1effects_h__

/* Forward declarations */

/* Headers for imported files */


#ifdef __cplusplus
extern "C" {
#endif

DEFINE_GUID(CLSID_D2D12DAffineTransform,      0x6aa97485,0x6354,0x4cfc,0x90,0x8c,0xe4,0xa7,0x4f,0x62,0xc9,0x6c);
DEFINE_GUID(CLSID_D2D13DPerspectiveTransform, 0xc2844d0b,0x3d86,0x46e7,0x85,0xba,0x52,0x6c,0x92,0x40,0xf3,0xfb);
DEFINE_GUID(CLSID_D2D13DTransform,            0xe8467b04,0xec61,0x4b8a,0xb5,0xde,0xd4,0xd7,0x3d,0xeb,0xea,0x5a);
DEFINE_GUID(CLSID_D2D1ArithmeticComposite,    0xfc151437,0x049a,0x4784,0xa2,0x4a,0xf1,0xc4,0xda,0xf2,0x09,0x87);
DEFINE_GUID(CLSID_D2D1Atlas,                  0x913e2be4,0xfdcf,0x4fe2,0xa5,0xf0,0x24,0x54,0xf1,0x4f,0xf4,0x08);
DEFINE_GUID(CLSID_D2D1BitmapSource,           0x5fb6c24d,0xc6dd,0x4231,0x94,0x04,0x50,0xf4,0xd5,0xc3,0x25,0x2d);
DEFINE_GUID(CLSID_D2D1Blend,                  0x81c5b77b,0x13f8,0x4cdd,0xad,0x20,0xc8,0x90,0x54,0x7a,0xc6,0x5d);
DEFINE_GUID(CLSID_D2D1Border,                 0x2a2d49c0,0x4acf,0x43c7,0x8c,0x6a,0x7c,0x4a,0x27,0x87,0x4d,0x27);
DEFINE_GUID(CLSID_D2D1Brightness,             0x8cea8d1e,0x77b0,0x4986,0xb3,0xb9,0x2f,0x0c,0x0e,0xae,0x78,0x87);
DEFINE_GUID(CLSID_D2D1ColorManagement,        0x1a28524c,0xfdd6,0x4aa4,0xae,0x8f,0x83,0x7e,0xb8,0x26,0x7b,0x37);
DEFINE_GUID(CLSID_D2D1ColorMatrix,            0x921f03d6,0x641c,0x47df,0x85,0x2d,0xb4,0xbb,0x61,0x53,0xae,0x11);
DEFINE_GUID(CLSID_D2D1Composite,              0x48fc9f51,0xf6ac,0x48f1,0x8b,0x58,0x3b,0x28,0xac,0x46,0xf7,0x6d);
DEFINE_GUID(CLSID_D2D1ConvolveMatrix,         0x407f8c08,0x5533,0x4331,0xa3,0x41,0x23,0xcc,0x38,0x77,0x84,0x3e);
DEFINE_GUID(CLSID_D2D1Crop,                   0xe23f7110,0x0e9a,0x4324,0xaf,0x47,0x6a,0x2c,0x0c,0x46,0xf3,0x5b);
DEFINE_GUID(CLSID_D2D1DirectionalBlur,        0x174319a6,0x58e9,0x49b2,0xbb,0x63,0xca,0xf2,0xc8,0x11,0xa3,0xdb);
DEFINE_GUID(CLSID_D2D1DiscreteTransfer,       0x90866fcd,0x488e,0x454b,0xaf,0x06,0xe5,0x04,0x1b,0x66,0xc3,0x6c);
DEFINE_GUID(CLSID_D2D1DisplacementMap,        0xedc48364,0x0417,0x4111,0x94,0x50,0x43,0x84,0x5f,0xa9,0xf8,0x90);
DEFINE_GUID(CLSID_D2D1DistantDiffuse,         0x3e7efd62,0xa32d,0x46d4,0xa8,0x3c,0x52,0x78,0x88,0x9a,0xc9,0x54);
DEFINE_GUID(CLSID_D2D1DistantSpecular,        0x428c1ee5,0x77b8,0x4450,0x8a,0xb5,0x72,0x21,0x9c,0x21,0xab,0xda);
DEFINE_GUID(CLSID_D2D1DpiCompensation,        0x6c26c5c7,0x34e0,0x46fc,0x9c,0xfd,0xe5,0x82,0x37,0x6, 0xe2,0x28);
DEFINE_GUID(CLSID_D2D1Flood,                  0x61c23c20,0xae69,0x4d8e,0x94,0xcf,0x50,0x07,0x8d,0xf6,0x38,0xf2);
DEFINE_GUID(CLSID_D2D1GammaTransfer,          0x409444c4,0xc419,0x41a0,0xb0,0xc1,0x8c,0xd0,0xc0,0xa1,0x8e,0x42);
DEFINE_GUID(CLSID_D2D1GaussianBlur,           0x1feb6d69,0x2fe6,0x4ac9,0x8c,0x58,0x1d,0x7f,0x93,0xe7,0xa6,0xa5);
DEFINE_GUID(CLSID_D2D1Scale,                  0x9daf9369,0x3846,0x4d0e,0xa4,0x4e,0xc, 0x60,0x79,0x34,0xa5,0xd7);
DEFINE_GUID(CLSID_D2D1Histogram,              0x881db7d0,0xf7ee,0x4d4d,0xa6,0xd2,0x46,0x97,0xac,0xc6,0x6e,0xe8);
DEFINE_GUID(CLSID_D2D1HueRotation,            0x0f4458ec,0x4b32,0x491b,0x9e,0x85,0xbd,0x73,0xf4,0x4d,0x3e,0xb6);
DEFINE_GUID(CLSID_D2D1LinearTransfer,         0xad47c8fd,0x63ef,0x4acc,0x9b,0x51,0x67,0x97,0x9c,0x03,0x6c,0x06);
DEFINE_GUID(CLSID_D2D1LuminanceToAlpha,       0x41251ab7,0x0beb,0x46f8,0x9d,0xa7,0x59,0xe9,0x3f,0xcc,0xe5,0xde);
DEFINE_GUID(CLSID_D2D1Morphology,             0xeae6c40d,0x626a,0x4c2d,0xbf,0xcb,0x39,0x10,0x01,0xab,0xe2,0x02);
DEFINE_GUID(CLSID_D2D1OpacityMetadata,        0x6c53006a,0x4450,0x4199,0xaa,0x5b,0xad,0x16,0x56,0xfe,0xce,0x5e);
DEFINE_GUID(CLSID_D2D1PointDiffuse,           0xb9e303c3,0xc08c,0x4f91,0x8b,0x7b,0x38,0x65,0x6b,0xc4,0x8c,0x20);
DEFINE_GUID(CLSID_D2D1PointSpecular,          0x09c3ca26,0x3ae2,0x4f09,0x9e,0xbc,0xed,0x38,0x65,0xd5,0x3f,0x22);
DEFINE_GUID(CLSID_D2D1Premultiply,            0x06eab419,0xdeed,0x4018,0x80,0xd2,0x3e,0x1d,0x47,0x1a,0xde,0xb2);
DEFINE_GUID(CLSID_D2D1Saturation,             0x5cb2d9cf,0x327d,0x459f,0xa0,0xce,0x40,0xc0,0xb2,0x08,0x6b,0xf7);
DEFINE_GUID(CLSID_D2D1Shadow,                 0xc67ea361,0x1863,0x4e69,0x89,0xdb,0x69,0x5d,0x3e,0x9a,0x5b,0x6b);
DEFINE_GUID(CLSID_D2D1SpotDiffuse,            0x818a1105,0x7932,0x44f4,0xaa,0x86,0x08,0xae,0x7b,0x2f,0x2c,0x93);
DEFINE_GUID(CLSID_D2D1SpotSpecular,           0xedae421e,0x7654,0x4a37,0x9d,0xb8,0x71,0xac,0xc1,0xbe,0xb3,0xc1);
DEFINE_GUID(CLSID_D2D1TableTransfer,          0x5bf818c3,0x5e43,0x48cb,0xb6,0x31,0x86,0x83,0x96,0xd6,0xa1,0xd4);
DEFINE_GUID(CLSID_D2D1Tile,                   0xb0784138,0x3b76,0x4bc5,0xb1,0x3b,0x0f,0xa2,0xad,0x02,0x65,0x9f);
DEFINE_GUID(CLSID_D2D1Turbulence,             0xcf2bb6ae,0x889a,0x4ad7,0xba,0x29,0xa2,0xfd,0x73,0x2c,0x9f,0xc9);
DEFINE_GUID(CLSID_D2D1UnPremultiply,          0xfb9ac489,0xad8d,0x41ed,0x99,0x99,0xbb,0x63,0x47,0xd1,0x10,0xf7);
typedef enum D2D1_BORDER_MODE {
    D2D1_BORDER_MODE_SOFT = 0x0,
    D2D1_BORDER_MODE_HARD = 0x1,
    D2D1_BORDER_MODE_FORCE_DWORD = 0xffffffff
} D2D1_BORDER_MODE;
typedef enum D2D1_2DAFFINETRANSFORM_PROP {
    D2D1_2DAFFINETRANSFORM_PROP_INTERPOLATION_MODE = 0x0,
    D2D1_2DAFFINETRANSFORM_PROP_BORDER_MODE = 0x1,
    D2D1_2DAFFINETRANSFORM_PROP_TRANSFORM_MATRIX = 0x2,
    D2D1_2DAFFINETRANSFORM_PROP_SHARPNESS = 0x3,
    D2D1_2DAFFINETRANSFORM_PROP_FORCE_DWORD = 0xffffffff
} D2D1_2DAFFINETRANSFORM_PROP;
typedef enum D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE {
    D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE_NEAREST_NEIGHBOR = 0x0,
    D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE_LINEAR = 0x1,
    D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE_CUBIC = 0x2,
    D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE_MULTI_SAMPLE_LINEAR = 0x3,
    D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE_ANISOTROPIC = 0x4,
    D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE_HIGH_QUALITY_CUBIC = 0x5,
    D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE_FORCE_DWORD = 0xffffffff
} D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE;
typedef enum D2D1_3DPERSPECTIVETRANSFORM_PROP {
    D2D1_3DPERSPECTIVETRANSFORM_PROP_INTERPOLATION_MODE = 0x0,
    D2D1_3DPERSPECTIVETRANSFORM_PROP_BORDER_MODE = 0x1,
    D2D1_3DPERSPECTIVETRANSFORM_PROP_DEPTH = 0x2,
    D2D1_3DPERSPECTIVETRANSFORM_PROP_PERSPECTIVE_ORIGIN = 0x3,
    D2D1_3DPERSPECTIVETRANSFORM_PROP_LOCAL_OFFSET = 0x4,
    D2D1_3DPERSPECTIVETRANSFORM_PROP_GLOBAL_OFFSET = 0x5,
    D2D1_3DPERSPECTIVETRANSFORM_PROP_ROTATION_ORIGIN = 0x6,
    D2D1_3DPERSPECTIVETRANSFORM_PROP_ROTATION = 0x7,
    D2D1_3DPERSPECTIVETRANSFORM_PROP_FORCE_DWORD = 0xffffffff
} D2D1_3DPERSPECTIVETRANSFORM_PROP;
typedef enum D2D1_3DPERSPECTIVETRANSFORM_INTERPOLATION_MODE {
    D2D1_3DPERSPECTIVETRANSFORM_INTERPOLATION_MODE_NEAREST_NEIGHBOR = 0x0,
    D2D1_3DPERSPECTIVETRANSFORM_INTERPOLATION_MODE_LINEAR = 0x1,
    D2D1_3DPERSPECTIVETRANSFORM_INTERPOLATION_MODE_CUBIC = 0x2,
    D2D1_3DPERSPECTIVETRANSFORM_INTERPOLATION_MODE_MULTI_SAMPLE_LINEAR = 0x3,
    D2D1_3DPERSPECTIVETRANSFORM_INTERPOLATION_MODE_ANISOTROPIC = 0x4,
    D2D1_3DPERSPECTIVETRANSFORM_INTERPOLATION_MODE_FORCE_DWORD = 0xffffffff
} D2D1_3DPERSPECTIVETRANSFORM_INTERPOLATION_MODE;
typedef enum D2D1_COMPOSITE_PROP {
    D2D1_COMPOSITE_PROP_MODE = 0x0,
    D2D1_COMPOSITE_PROP_FORCE_DWORD = 0xffffffff
} D2D1_COMPOSITE_PROP;
typedef enum D2D1_CROP_PROP {
    D2D1_CROP_PROP_RECT = 0x0,
    D2D1_CROP_PROP_BORDER_MODE = 0x1,
    D2D1_CROP_PROP_FORCE_DWORD = 0xffffffff
} D2D1_CROP_PROP;
typedef enum D2D1_BLEND_MODE {
    D2D1_BLEND_MODE_MULTIPLY = 0x0,
    D2D1_BLEND_MODE_SCREEN = 0x1,
    D2D1_BLEND_MODE_DARKEN = 0x2,
    D2D1_BLEND_MODE_LIGHTEN = 0x3,
    D2D1_BLEND_MODE_DISSOLVE = 0x4,
    D2D1_BLEND_MODE_COLOR_BURN = 0x5,
    D2D1_BLEND_MODE_LINEAR_BURN = 0x6,
    D2D1_BLEND_MODE_DARKER_COLOR = 0x7,
    D2D1_BLEND_MODE_LIGHTER_COLOR = 0x8,
    D2D1_BLEND_MODE_COLOR_DODGE = 0x9,
    D2D1_BLEND_MODE_LINEAR_DODGE = 0xa,
    D2D1_BLEND_MODE_OVERLAY = 0xb,
    D2D1_BLEND_MODE_SOFT_LIGHT = 0xc,
    D2D1_BLEND_MODE_HARD_LIGHT = 0xd,
    D2D1_BLEND_MODE_VIVID_LIGHT = 0xe,
    D2D1_BLEND_MODE_LINEAR_LIGHT = 0xf,
    D2D1_BLEND_MODE_PIN_LIGHT = 0x10,
    D2D1_BLEND_MODE_HARD_MIX = 0x11,
    D2D1_BLEND_MODE_DIFFERENCE = 0x12,
    D2D1_BLEND_MODE_EXCLUSION = 0x13,
    D2D1_BLEND_MODE_HUE = 0x14,
    D2D1_BLEND_MODE_SATURATION = 0x15,
    D2D1_BLEND_MODE_COLOR = 0x16,
    D2D1_BLEND_MODE_LUMINOSITY = 0x17,
    D2D1_BLEND_MODE_SUBTRACT = 0x18,
    D2D1_BLEND_MODE_DIVISION = 0x19,
    D2D1_BLEND_MODE_FORCE_DWORD = 0xffffffff
} D2D1_BLEND_MODE;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __d2d1effects_h__ */
