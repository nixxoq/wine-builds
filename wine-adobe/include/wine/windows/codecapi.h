/*
 * Copyright 2020 Derek Lesho
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __CODECAPI_H
#define __CODECAPI_H

enum eAVEncH264VProfile
{
    eAVEncH264VProfile_unknown  = 0,
    eAVEncH264VProfile_Simple = 66,
    eAVEncH264VProfile_Base = 66,
    eAVEncH264VProfile_Main = 77,
    eAVEncH264VProfile_High = 100,
    eAVEncH264VProfile_422 = 122,
    eAVEncH264VProfile_High10 = 110,
    eAVEncH264VProfile_444 = 244,
    eAVEncH264VProfile_Extended = 88,
    eAVEncH264VProfile_ScalableBase =  83,
    eAVEncH264VProfile_ScalableHigh =  86,
    eAVEncH264VProfile_MultiviewHigh = 118,
    eAVEncH264VProfile_StereoHigh = 128,
    eAVEncH264VProfile_ConstrainedBase = 256,
    eAVEncH264VProfile_UCConstrainedHigh = 257,
    eAVEncH264VProfile_UCScalableConstrainedBase = 258,
    eAVEncH264VProfile_UCScalableConstrainedHigh = 259
};

enum eAVEncH264VLevel
{
    eAVEncH264VLevel1 = 10,
    eAVEncH264VLevel1_b = 11,
    eAVEncH264VLevel1_1 = 11,
    eAVEncH264VLevel1_2 = 12,
    eAVEncH264VLevel1_3 = 13,
    eAVEncH264VLevel2 = 20,
    eAVEncH264VLevel2_1 = 21,
    eAVEncH264VLevel2_2 = 22,
    eAVEncH264VLevel3 = 30,
    eAVEncH264VLevel3_1 = 31,
    eAVEncH264VLevel3_2 = 32,
    eAVEncH264VLevel4 = 40,
    eAVEncH264VLevel4_1 = 41,
    eAVEncH264VLevel4_2 = 42,
    eAVEncH264VLevel5 = 50,
    eAVEncH264VLevel5_1 = 51,
    eAVEncH264VLevel5_2 = 52
};

enum eAVEncCommonRateControlMode
{
    eAVEncCommonRateControlMode_CBR = 0,
    eAVEncCommonRateControlMode_PeakConstrainedVBR = 1,
    eAVEncCommonRateControlMode_UnconstrainedVBR = 2,
    eAVEncCommonRateControlMode_Quality = 3,
    eAVEncCommonRateControlMode_LowDelayVBR = 4,
    eAVEncCommonRateControlMode_GlobalVBR = 5,
    eAVEncCommonRateControlMode_GlobalLowDelayVBR  = 6,
};

enum eAVEncCommonStreamEndHandling
{
    eAVEncCommonStreamEndHandling_DiscardPartial = 0,
    eAVEncCommonStreamEndHandling_EnsureComplete = 1,
};

enum eAVEncVideoChromaResolution
{
    eAVEncVideoChromaResolution_SameAsSource = 0,
    eAVEncVideoChromaResolution_444          = 1,
    eAVEncVideoChromaResolution_422          = 2,
    eAVEncVideoChromaResolution_420          = 3,
    eAVEncVideoChromaResolution_411          = 4,
};

enum eAVEncVideoChromaSubsampling
{
    eAVEncVideoChromaSubsamplingFormat_SameAsSource                   = 0,
    eAVEncVideoChromaSubsamplingFormat_ProgressiveChroma              = 0x8,
    eAVEncVideoChromaSubsamplingFormat_Horizontally_Cosited           = 0x4,
    eAVEncVideoChromaSubsamplingFormat_Vertically_Cosited             = 0x2,
    eAVEncVideoChromaSubsamplingFormat_Vertically_AlignedChromaPlanes = 0x1,
};

enum eAVEncVideoColorPrimaries
{
    eAVEncVideoColorPrimaries_SameAsSource  = 0,
    eAVEncVideoColorPrimaries_Reserved      = 1,
    eAVEncVideoColorPrimaries_BT709         = 2,
    eAVEncVideoColorPrimaries_BT470_2_SysM  = 3,
    eAVEncVideoColorPrimaries_BT470_2_SysBG = 4,
    eAVEncVideoColorPrimaries_SMPTE170M     = 5,
    eAVEncVideoColorPrimaries_SMPTE240M     = 6,
    eAVEncVideoColorPrimaries_EBU3231       = 7,
    eAVEncVideoColorPrimaries_SMPTE_C       = 8,
};

enum eAVEncVideoColorTransferFunction
{
    eAVEncVideoColorTransferFunction_SameAsSource = 0,
    eAVEncVideoColorTransferFunction_10           = 1,
    eAVEncVideoColorTransferFunction_18           = 2,
    eAVEncVideoColorTransferFunction_20           = 3,
    eAVEncVideoColorTransferFunction_22           = 4,
    eAVEncVideoColorTransferFunction_22_709       = 5,
    eAVEncVideoColorTransferFunction_22_240M      = 6,
    eAVEncVideoColorTransferFunction_22_8bit_sRGB = 7,
    eAVEncVideoColorTransferFunction_28           = 8,
};

enum eAVEncVideoColorTransferMatrix
{
    eAVEncVideoColorTransferMatrix_SameAsSource = 0,
    eAVEncVideoColorTransferMatrix_BT709        = 1,
    eAVEncVideoColorTransferMatrix_BT601        = 2,
    eAVEncVideoColorTransferMatrix_SMPTE240M    = 3,
};

enum eAVEncVideoColorLighting
{
    eAVEncVideoColorLighting_SameAsSource = 0,
    eAVEncVideoColorLighting_Unknown      = 1,
    eAVEncVideoColorLighting_Bright       = 2,
    eAVEncVideoColorLighting_Office       = 3,
    eAVEncVideoColorLighting_Dim          = 4,
    eAVEncVideoColorLighting_Dark         = 5,
};

enum eAVEncVideoColorNominalRange
{
    eAVEncVideoColorNominalRange_SameAsSource = 0,
    eAVEncVideoColorNominalRange_0_255        = 1,
    eAVEncVideoColorNominalRange_16_235       = 2,
    eAVEncVideoColorNominalRange_48_208       = 3,
};

enum eAVEncVideoOutputFrameRateConversion
{
    eAVEncVideoOutputFrameRateConversion_Disable = 0,
    eAVEncVideoOutputFrameRateConversion_Enable  = 1,
    eAVEncVideoOutputFrameRateConversion_Alias   = 2
};

enum eAVEncVideoFilmContent
{
    eAVEncVideoFilmContent_VideoOnly = 0,
    eAVEncVideoFilmContent_FilmOnly  = 1,
    eAVEncVideoFilmContent_Mixed     = 2,
};

enum eAVEncVideoSourceScanType
{
    eAVEncVideoSourceScan_Automatic   = 0,
    eAVEncVideoSourceScan_Interlaced  = 1,
    eAVEncVideoSourceScan_Progressive = 2,
};

enum eAVEncVideoOutputScanType
{
    eAVEncVideoOutputScan_Progressive = 0,
    eAVEncVideoOutputScan_Interlaced  = 1,
    eAVEncVideoOutputScan_SameAsInput = 2,
    eAVEncVideoOutputScan_Automatic   = 3,
};

enum eAVEncVideoContentType
{
    eAVEncVideoContentType_Unknown          = 0,
    eAVEncVideoContentType_FixedCameraAngle = 1,
};

DEFINE_GUID(CODECAPI_AVDecVideoAcceleration_H264, 0xf7db8a2f, 0x4f48, 0x4ee8, 0xae, 0x31, 0x8b, 0x6e, 0xbe, 0x55, 0x8a, 0xe2);

DEFINE_GUID(CODECAPI_AVEncCodecType,                 0x08af4ac1, 0xf3f2, 0x4c74, 0x9d, 0xcf, 0x37, 0xf2, 0xec, 0x79, 0xf8, 0x26);
DEFINE_GUID(CODECAPI_GUID_AVEncMPEG1Video,           0xc8dafefe, 0xda1e, 0x4774, 0xb2, 0x7d, 0x11, 0x83, 0x0c, 0x16, 0xb1, 0xfe);
DEFINE_GUID(CODECAPI_GUID_AVEncMPEG2Video,           0x046dc19a, 0x6677, 0x4aaa, 0xa3, 0x1d, 0xc1, 0xab, 0x71, 0x6f, 0x45, 0x60);
DEFINE_GUID(CODECAPI_GUID_AVEncMPEG1Audio,           0xd4dd1362, 0xcd4a, 0x4cd6, 0x81, 0x38, 0xb9, 0x4d, 0xb4, 0x54, 0x2b, 0x04);
DEFINE_GUID(CODECAPI_GUID_AVEncMPEG2Audio,           0xee4cbb1f, 0x9c3f, 0x4770, 0x92, 0xb5, 0xfc, 0xb7, 0xc2, 0xa8, 0xd3, 0x81);
DEFINE_GUID(CODECAPI_GUID_AVEncWMV,                  0x4e0fef9b, 0x1d43, 0x41bd, 0xb8, 0xbd, 0x4d, 0x7b, 0xf7, 0x45, 0x7a, 0x2a);
DEFINE_GUID(CODECAPI_GUID_AVEndMPEG4Video,           0xdd37b12a, 0x9503, 0x4f8b, 0xb8, 0xd0, 0x32, 0x4a, 0x00, 0xc0, 0xa1, 0xcf);
DEFINE_GUID(CODECAPI_GUID_AVEncH264Video,            0x95044eab, 0x31b3, 0x47de, 0x8e, 0x75, 0x38, 0xa4, 0x2b, 0xb0, 0x3e, 0x28);
DEFINE_GUID(CODECAPI_GUID_AVEncDV,                   0x09b769c7, 0x3329, 0x44fb, 0x89, 0x54, 0xfa, 0x30, 0x93, 0x7d, 0x3d, 0x5a);
DEFINE_GUID(CODECAPI_GUID_AVEncWMAPro,               0x1955f90c, 0x33f7, 0x4a68, 0xab, 0x81, 0x53, 0xf5, 0x65, 0x71, 0x25, 0xc4);
DEFINE_GUID(CODECAPI_GUID_AVEncWMALossless,          0x55ca7265, 0x23d8, 0x4761, 0x90, 0x31, 0xb7, 0x4f, 0xbe, 0x12, 0xf4, 0xc1);
DEFINE_GUID(CODECAPI_GUID_AVEncWMAVoice,             0x13ed18cb, 0x50e8, 0x4276, 0xa2, 0x88, 0xa6, 0xaa, 0x22, 0x83, 0x82, 0xd9);
DEFINE_GUID(CODECAPI_GUID_AVEncDolbyDigitalPro,      0xf5be76cc, 0x0ff8, 0x40eb, 0x9c, 0xb1, 0xbb, 0xa9, 0x40, 0x04, 0xd4, 0x4f);
DEFINE_GUID(CODECAPI_GUID_AVEncDolbyDigitalConsumer, 0xc1a7bf6c, 0x0059, 0x4bfa, 0x94, 0xef, 0xef, 0x74, 0x7a, 0x76, 0x8d, 0x52);
DEFINE_GUID(CODECAPI_GUID_AVEncDolbyDigitalPlus,     0x698d1b80, 0xf7dd, 0x415c, 0x97, 0x1c, 0x42, 0x49, 0x2a, 0x20, 0x56, 0xc6);
DEFINE_GUID(CODECAPI_GUID_AVEncDTSHD,                0x2052e630, 0x469d, 0x4bfb, 0x80, 0xca, 0x1d, 0x65, 0x6e, 0x7e, 0x91, 0x8f);
DEFINE_GUID(CODECAPI_GUID_AVEncDTS,                  0x45fbcaa2, 0x5e6e, 0x4ab0, 0x88, 0x93, 0x59, 0x03, 0xbe, 0xe9, 0x3a, 0xcf);
DEFINE_GUID(CODECAPI_GUID_AVEncMLP,                  0x05f73e29, 0xf0d1, 0x431e, 0xa4, 0x1c, 0xa4, 0x74, 0x32, 0xec, 0x5a, 0x66);
DEFINE_GUID(CODECAPI_GUID_AVEncPCM,                  0x844be7f4, 0x26cf, 0x4779, 0xb3, 0x86, 0xcc, 0x05, 0xd1, 0x87, 0x99, 0x0c);
DEFINE_GUID(CODECAPI_GUID_AVEncSDDS,                 0x1dc1b82f, 0x11c8, 0x4c71, 0xb7, 0xb6, 0xee, 0x3e, 0xb9, 0xbc, 0x2b, 0x94);

DEFINE_GUID(CODECAPI_AVEncCommonFormatConstraint,       0x57cbb9b8, 0x116f, 0x4951, 0xb4, 0x0c, 0xc2, 0xa0, 0x35, 0xed, 0x8f, 0x17);
DEFINE_GUID(CODECAPI_GUID_AVEncCommonFormatUnSpecified, 0xaf46a35a, 0x6024, 0x4525, 0xa4, 0x8a, 0x09, 0x4b, 0x97, 0xf5, 0xb3, 0xc2);
DEFINE_GUID(CODECAPI_GUID_AVEncCommonFormatDVD_V,       0xcc9598c4, 0xe7fe, 0x451d, 0xb1, 0xca, 0x76, 0x1b, 0xc8, 0x40, 0xb7, 0xf3);
DEFINE_GUID(CODECAPI_GUID_AVEncCommonFormatDVD_DashVR,  0xe55199d6, 0x044c, 0x4dae, 0xa4, 0x88, 0x53, 0x1e, 0xd3, 0x06, 0x23, 0x5b);
DEFINE_GUID(CODECAPI_GUID_AVEncCommonFormatDVD_PlusVR,  0xe74c6f2e, 0xec37, 0x478d, 0x9a, 0xf4, 0xa5, 0xe1, 0x35, 0xb6, 0x27, 0x1c);
DEFINE_GUID(CODECAPI_GUID_AVEncCommonFormatVCD,         0x95035bf7, 0x9d90, 0x40ff, 0xad, 0x5c, 0x5c, 0xf8, 0xcf, 0x71, 0xca, 0x1d);
DEFINE_GUID(CODECAPI_GUID_AVEncCommonFormatSVCD,        0x51d85818, 0x8220, 0x448c, 0x80, 0x66, 0xd6, 0x9b, 0xed, 0x16, 0xc9, 0xad);
DEFINE_GUID(CODECAPI_GUID_AVEncCommonFormatATSC,        0x8d7b897c, 0xa019, 0x4670, 0xaa, 0x76, 0x2e, 0xdc, 0xac, 0x7a, 0xc2, 0x96);
DEFINE_GUID(CODECAPI_GUID_AVEncCommonFormatDVB,         0x71830d8f, 0x6c33, 0x430d, 0x84, 0x4b, 0xc2, 0x70, 0x5b, 0xaa, 0xe6, 0xdb);
DEFINE_GUID(CODECAPI_GUID_AVEncCommonFormatMP3,         0x349733cd, 0xeb08, 0x4dc2, 0x81, 0x97, 0xe4, 0x98, 0x35, 0xef, 0x82, 0x8b);
DEFINE_GUID(CODECAPI_GUID_AVEncCommonFormatHighMAT,     0x1eabe760, 0xfb2b, 0x4928, 0x90, 0xd1, 0x78, 0xdb, 0x88, 0xee, 0xe8, 0x89);
DEFINE_GUID(CODECAPI_GUID_AVEncCommonFormatHighMPV,     0xa2d25db8, 0xb8f9, 0x42c2, 0x8b, 0xc7, 0x0b, 0x93, 0xcf, 0x60, 0x47, 0x88);

DEFINE_GUID(CODECAPI_AVEncCommonRateControlMode,          0x1c0608e9, 0x370c, 0x4710, 0x8a, 0x58, 0xcb, 0x61, 0x81, 0xc4, 0x24, 0x23);
DEFINE_GUID(CODECAPI_AVEncCommonLowLatency,               0x9d3ecd55, 0x89e8, 0x490a, 0x97, 0x0a, 0x0c, 0x95, 0x48, 0xd5, 0xa5, 0x6e);
DEFINE_GUID(CODECAPI_AVEncCommonMultipassMode,            0x22533d4c, 0x47e1, 0x41b5, 0x93, 0x52, 0xa2, 0xb7, 0x78, 0x0e, 0x7a, 0xc4);
DEFINE_GUID(CODECAPI_AVEncCommonPassStart,                0x6a67739f, 0x4eb5, 0x4385, 0x99, 0x28, 0xf2, 0x76, 0xa9, 0x39, 0xef, 0x95);
DEFINE_GUID(CODECAPI_AVEncCommonPassEnd,                  0x0e3d01bc, 0xc85c, 0x467d, 0x8b, 0x60, 0xc4, 0x10, 0x12, 0xee, 0x3b, 0xf6);
DEFINE_GUID(CODECAPI_AVEncCommonRealTime,                 0x143a0ff6, 0xa131, 0x43da, 0xb8, 0x1e, 0x98, 0xfb, 0xb8, 0xec, 0x37, 0x8e);
DEFINE_GUID(CODECAPI_AVEncCommonQuality,                  0xfcbf57a3, 0x7ea5, 0x4b0c, 0x96, 0x44, 0x69, 0xb4, 0x0c, 0x39, 0xc3, 0x91);
DEFINE_GUID(CODECAPI_AVEncCommonQualityVsSpeed,           0x98332df8, 0x03cd, 0x476b, 0x89, 0xfa, 0x3f, 0x9e, 0x44, 0x2d, 0xec, 0x9f);
DEFINE_GUID(CODECAPI_AVEncCommonTranscodeEncodingProfile, 0x6947787C, 0xF508, 0x4EA9, 0xB1, 0xE9, 0xA1, 0xFE, 0x3A, 0x49, 0xFB, 0xC9);
DEFINE_GUID(CODECAPI_AVEncCommonMeanBitRate,              0xf7222374, 0x2144, 0x4815, 0xb5, 0x50, 0xa3, 0x7f, 0x8e, 0x12, 0xee, 0x52);
DEFINE_GUID(CODECAPI_AVEncCommonMeanBitRateInterval,      0xbfaa2f0c, 0xcb82, 0x4bc0, 0x84, 0x74, 0xf0, 0x6a, 0x8a, 0x0d, 0x02, 0x58);
DEFINE_GUID(CODECAPI_AVEncCommonMaxBitRate,               0x9651eae4, 0x39b9, 0x4ebf, 0x85, 0xef, 0xd7, 0xf4, 0x44, 0xec, 0x74, 0x65);
DEFINE_GUID(CODECAPI_AVEncCommonMinBitRate,               0x101405b2, 0x2083, 0x4034, 0xa8, 0x06, 0xef, 0xbe, 0xdd, 0xd7, 0xc9, 0xff);
DEFINE_GUID(CODECAPI_AVEncCommonBufferSize,               0x0db96574, 0xb6a4, 0x4c8b, 0x81, 0x06, 0x37, 0x73, 0xde, 0x03, 0x10, 0xcd);
DEFINE_GUID(CODECAPI_AVEncCommonBufferInLevel,            0xd9c5c8db, 0xfc74, 0x4064, 0x94, 0xe9, 0xcd, 0x19, 0xf9, 0x47, 0xed, 0x45);
DEFINE_GUID(CODECAPI_AVEncCommonBufferOutLevel,           0xccae7f49, 0xd0bc, 0x4e3d, 0xa5, 0x7e, 0xfb, 0x57, 0x40, 0x14, 0x00, 0x69);
DEFINE_GUID(CODECAPI_AVEncCommonStreamEndHandling,        0x6aad30af, 0x6ba8, 0x4ccc, 0x8f, 0xca, 0x18, 0xd1, 0x9b, 0xea, 0xeb, 0x1c);
DEFINE_GUID(CODECAPI_AVEncStatCommonCompletedPasses,      0x3e5de533, 0x9df7, 0x438c, 0x85, 0x4f, 0x9f, 0x7d, 0xd3, 0x68, 0x3d, 0x34);

DEFINE_GUID(CODECAPI_AVEncH264CABACEnable, 0xee6cad62, 0xd305, 0x4248, 0xa5, 0xe, 0xe1, 0xb2, 0x55, 0xf7, 0xca, 0xf8);
DEFINE_GUID(CODECAPI_AVEncH264SPSID,       0x50f38f51, 0x2b79, 0x40e3, 0xb3, 0x9c, 0x7e, 0x9f, 0xa0, 0x77, 0x5, 0x1);
DEFINE_GUID(CODECAPI_AVEncH264PPSID,       0xbfe29ec2, 0x56c, 0x4d68, 0xa3, 0x8d, 0xae, 0x59, 0x44, 0xc8, 0x58, 0x2e);

DEFINE_GUID(CODECAPI_AVEncMPVGOPSize,              0x95f31b26, 0x95a4, 0x41aa, 0x93, 0x03, 0x24, 0x6a, 0x7f, 0xc6, 0xee, 0xf1);
DEFINE_GUID(CODECAPI_AVEncMPVDefaultBPictureCount, 0x8d390aac, 0xdc5c, 0x4200, 0xb5, 0x7f, 0x81, 0x4d, 0x04, 0xba, 0xba, 0xb2);

DEFINE_GUID(CODECAPI_AVEncStatVideoOutputFrameRate, 0xbe747849, 0x9ab4, 0x4a63, 0x98, 0xfe, 0xf1, 0x43, 0xf0, 0x4f, 0x8e, 0xe9);
DEFINE_GUID(CODECAPI_AVEncStatVideoCodedFrames,     0xd47f8d61, 0x6f5a, 0x4a26, 0xbb, 0x9f, 0xcd, 0x95, 0x18, 0x46, 0x2b, 0xcd);
DEFINE_GUID(CODECAPI_AVEncStatVideoTotalFrames,     0xfdaa9916, 0x119a, 0x4222, 0x9a, 0xd6, 0x3f, 0x7c, 0xab, 0x99, 0xcc, 0x8b);

DEFINE_GUID(CODECAPI_AVEncVideoHeaderDropFrame, 0x6ed9e124, 0x7925, 0x43fe, 0x97, 0x1b, 0xe0, 0x19, 0xf6, 0x22, 0x22, 0xb4);
DEFINE_GUID(CODECAPI_AVEncVideoHeaderHours,     0x2acc7702, 0xe2da, 0x4158, 0xbf, 0x9b, 0x88, 0x88, 0x01, 0x29, 0xd7, 0x40);
DEFINE_GUID(CODECAPI_AVEncVideoHeaderMinutes,   0xdc1a99ce, 0x0307, 0x408b, 0x88, 0x0b, 0xb8, 0x34, 0x8e, 0xe8, 0xca, 0x7f);
DEFINE_GUID(CODECAPI_AVEncVideoHeaderSeconds,   0x4a2e1a05, 0xa780, 0x4f58, 0x81, 0x20, 0x9a, 0x44, 0x9d, 0x69, 0x65, 0x6b);
DEFINE_GUID(CODECAPI_AVEncVideoHeaderFrames,    0xafd5f567, 0x5c1b, 0x4adc, 0xbd, 0xaf, 0x73, 0x56, 0x10, 0x38, 0x14, 0x36);

DEFINE_GUID(CODECAPI_AVEncVideoInputChromaResolution,   0xbb0cec33, 0x16f1, 0x47b0, 0x8a, 0x88, 0x37, 0x81, 0x5b, 0xee, 0x17, 0x39);
DEFINE_GUID(CODECAPI_AVEncVideoOutputChromaResolution,  0x6097b4c9, 0x7c1d, 0x4e64, 0xbf, 0xcc, 0x9e, 0x97, 0x65, 0x31, 0x8a, 0xe7);
DEFINE_GUID(CODECAPI_AVEncVideoInputChromaSubsampling,  0xa8e73a39, 0x4435, 0x4ec3, 0xa6, 0xea, 0x98, 0x30, 0x0f, 0x4b, 0x36, 0xf7);
DEFINE_GUID(CODECAPI_AVEncVideoOutputChromaSubsampling, 0xfa561c6c, 0x7d17, 0x44f0, 0x83, 0xc9, 0x32, 0xed, 0x12, 0xe9, 0x63, 0x43);

DEFINE_GUID(CODECAPI_AVEncVideoInputColorPrimaries,         0xc24d783f, 0x7ce6, 0x4278, 0x90, 0xab, 0x28, 0xa4, 0xf1, 0xe5, 0xf8, 0x6c);
DEFINE_GUID(CODECAPI_AVEncVideoOutputColorPrimaries,        0xbe95907c, 0x9d04, 0x4921, 0x89, 0x85, 0xa6, 0xd6, 0xd8, 0x7d, 0x1a, 0x6c);
DEFINE_GUID(CODECAPI_AVEncVideoInputColorTransferFunction,  0x8c056111, 0xa9c3, 0x4b08, 0xa0, 0xa0, 0xce, 0x13, 0xf8, 0xa2, 0x7c, 0x75);
DEFINE_GUID(CODECAPI_AVEncVideoOutputColorTransferFunction, 0x4a7f884a, 0xea11, 0x460d, 0xbf, 0x57, 0xb8, 0x8b, 0xc7, 0x59, 0x00, 0xde);
DEFINE_GUID(CODECAPI_AVEncVideoInputColorTransferMatrix,    0x52ed68b9, 0x72d5, 0x4089, 0x95, 0x8d, 0xf5, 0x40, 0x5d, 0x55, 0x08, 0x1c);
DEFINE_GUID(CODECAPI_AVEncVideoOutputColorTransferMatrix,   0xa9b90444, 0xaf40, 0x4310, 0x8f, 0xbe, 0xed, 0x6d, 0x93, 0x3f, 0x89, 0x2b);
DEFINE_GUID(CODECAPI_AVEncVideoInputColorLighting,          0x46a99549, 0x0015, 0x4a45, 0x9c, 0x30, 0x1d, 0x5c, 0xfa, 0x25, 0x83, 0x16);
DEFINE_GUID(CODECAPI_AVEncVideoOutputColorLighting,         0x0e5aaac6, 0xace6, 0x4c5c, 0x99, 0x8e, 0x1a, 0x8c, 0x9c, 0x6c, 0x0f, 0x89);
DEFINE_GUID(CODECAPI_AVEncVideoInputColorNominalRange,      0x16cf25c6, 0xa2a6, 0x48e9, 0xae, 0x80, 0x21, 0xae, 0xc4, 0x1d, 0x42, 0x7e);
DEFINE_GUID(CODECAPI_AVEncVideoOutputColorNominalRange,     0x972835ed, 0x87b5, 0x4e95, 0x95, 0x00, 0xc7, 0x39, 0x58, 0x56, 0x6e, 0x54);

DEFINE_GUID(CODECAPI_AVEncVideoOutputFrameRate,           0xea85e7c3, 0x9567, 0x4d99, 0x87, 0xc4, 0x02, 0xc1, 0xc2, 0x78, 0xca, 0x7c);
DEFINE_GUID(CODECAPI_AVEncVideoOutputFrameRateConversion, 0x8c068bf4, 0x369a, 0x4ba3, 0x82, 0xfd, 0xb2, 0x51, 0x8f, 0xb3, 0x39, 0x6e);

DEFINE_GUID(CODECAPI_AVEncVideoEncodeDimension,    0x1074df28, 0x7e0f, 0x47a4, 0xa4, 0x53, 0xcd, 0xd7, 0x38, 0x70, 0xf5, 0xce);
DEFINE_GUID(CODECAPI_AVEncVideoEncodeOffsetOrigin, 0x6bc098fe, 0xa71a, 0x4454, 0x85, 0x2e, 0x4d, 0x2d, 0xde, 0xb2, 0xcd, 0x24);
DEFINE_GUID(CODECAPI_AVEncVideoEncodeQP,           0x2cb5696b, 0x23fb, 0x4ce1, 0xa0, 0xf9, 0xef, 0x5b, 0x90, 0xfd, 0x55, 0xca);
DEFINE_GUID(CODECAPI_AVEncVideoEncodeFrameTypeQP,  0xaa70b610, 0xe03f, 0x450c, 0xad, 0x07, 0x07, 0x31, 0x4e, 0x63, 0x9c, 0xe7);

DEFINE_GUID(CODECAPI_AVEncVideoMaxKeyframeDistance, 0x2987123a, 0xba93, 0x4704, 0xb4, 0x89, 0xec, 0x1e, 0x5f, 0x25, 0x29, 0x2c);
DEFINE_GUID(CODECAPI_AVEncVideoMaxCTBSize,          0x822363ff, 0xcec8, 0x43e5, 0x92, 0xfd, 0xe0, 0x97, 0x48, 0x84, 0x85, 0xe9);
DEFINE_GUID(CODECAPI_AVEncVideoMaxTemporalLayers,   0x9c668cfe, 0x08e1, 0x424a, 0x93, 0x4e, 0xb7, 0x64, 0xb0, 0x64, 0x80, 0x2a);
DEFINE_GUID(CODECAPI_AVEncVideoMaxNumRefFrame,      0x964829ed, 0x94f9, 0x43b4, 0xb7, 0x4d, 0xef, 0x40, 0x94, 0x4b, 0x69, 0xa0);
DEFINE_GUID(CODECAPI_AVEncVideoMaxQP,               0x3daf6f66, 0xa6a7, 0x45e0, 0xa8, 0xe5, 0xf2, 0x74, 0x3f, 0x46, 0xa3, 0xa2);

DEFINE_GUID(CODECAPI_AVEncVideoInverseTelecineEnable,    0x2ea9098b, 0xe76d, 0x4ccd, 0xa0, 0x30, 0xd3, 0xb8, 0x89, 0xc1, 0xb6, 0x4c);
DEFINE_GUID(CODECAPI_AVEncVideoInverseTelecineThreshold, 0x40247d84, 0xe895, 0x497f, 0xb4, 0x4c, 0xb7, 0x45, 0x60, 0xac, 0xfe, 0x27);

DEFINE_GUID(CODECAPI_AVEncVideoSourceIsBW,          0x42ffc49b, 0x1812, 0x4fdc, 0x8d, 0x24, 0x70, 0x54, 0xc5, 0x21, 0xe6, 0xeb);
DEFINE_GUID(CODECAPI_AVEncVideoSourceFilmContent,   0x1791c64b, 0xccfc, 0x4827, 0xa0, 0xed, 0x25, 0x57, 0x79, 0x3b, 0x2b, 0x1c);
DEFINE_GUID(CODECAPI_AVEncVideoForceSourceScanType, 0x1ef2065f, 0x058a, 0x4765, 0xa4, 0xfc, 0x8a, 0x86, 0x4c, 0x10, 0x30, 0x12);

DEFINE_GUID(CODECAPI_AVEncVideoCBRMotionTradeoff,          0x0d49451e, 0x18d5, 0x4367, 0xa4, 0xef, 0x32, 0x40, 0xdf, 0x16, 0x93, 0xc4);
DEFINE_GUID(CODECAPI_AVEncVideoCodedVideoAccessUnitSize,   0xb4b10c15, 0x14a7, 0x4ce8, 0xb1, 0x73, 0xdc, 0x90, 0xa0, 0xb4, 0xfc, 0xdb);
DEFINE_GUID(CODECAPI_AVEncVideoContentType,                0x66117aca, 0xeb77, 0x459d, 0x93, 0x0c, 0xa4, 0x8d, 0x9d, 0x06, 0x83, 0xfc);
DEFINE_GUID(CODECAPI_AVEncVideoCTBSize,                    0xd47db8b2, 0xe73b, 0x4cb9, 0x8c, 0x3e, 0xbd, 0x87, 0x7d, 0x06, 0xd7, 0x7b);
DEFINE_GUID(CODECAPI_AVEncVideoDefaultUpperFieldDominant,  0x810167c4, 0x0bc1, 0x47ca, 0x8f, 0xc2, 0x57, 0x05, 0x5a, 0x14, 0x74, 0xa5);
DEFINE_GUID(CODECAPI_AVEncVideoDirtyRectEnabled,           0x8acb8fdd, 0x5e0c, 0x4c66, 0x87, 0x29, 0xb8, 0xf6, 0x29, 0xab, 0x04, 0xfb);
DEFINE_GUID(CODECAPI_AVEncVideoDisplayDimension,           0xde053668, 0xf4ec, 0x47a9, 0x86, 0xd0, 0x83, 0x67, 0x70, 0xf0, 0xc1, 0xd5);
DEFINE_GUID(CODECAPI_AVEncVideoFieldSwap,                  0xfefd7569, 0x4e0a, 0x49f2, 0x9f, 0x2b, 0x36, 0x0e, 0xa4, 0x8c, 0x19, 0xa2);
DEFINE_GUID(CODECAPI_AVEncVideoForceKeyFrame,              0x398c1b98, 0x8353, 0x475a, 0x9e, 0xf2, 0x8f, 0x26, 0x5d, 0x26, 0x03, 0x45);
DEFINE_GUID(CODECAPI_AVEncVideoGradualIntraRefresh,        0x8f347dee, 0xcb0d, 0x49ba, 0xb4, 0x62, 0xdb, 0x69, 0x27, 0xee, 0x21, 0x01);
DEFINE_GUID(CODECAPI_AVEncVideoIntraLayerPrediction,       0xd3af46b8, 0xbf47, 0x44bb, 0xa2, 0x83, 0x69, 0xf0, 0xb0, 0x22, 0x8f, 0xf9);
DEFINE_GUID(CODECAPI_AVEncVideoInstantTemporalUpSwitching, 0xa3308307, 0x0d96, 0x4ba4, 0xb1, 0xf0, 0xb9, 0x1a, 0x5e, 0x49, 0xdf, 0x10);
DEFINE_GUID(CODECAPI_AVEncVideoLTRBufferControl,           0xa4a0e93d, 0x4cbc, 0x444c, 0x89, 0xf4, 0x82, 0x6d, 0x31, 0x0e, 0x92, 0xa7);
DEFINE_GUID(CODECAPI_AVEncVideoMarkLTRFrame,               0xe42f4748, 0xa06d, 0x4ef9, 0x8c, 0xea, 0x3d, 0x05, 0xfd, 0xe3, 0xbd, 0x3b);
DEFINE_GUID(CODECAPI_AVEncVideoMeanAbsoluteDifference,     0xe5c0c10f, 0x81a4, 0x422d, 0x8c, 0x3f, 0xb4, 0x74, 0xa4, 0x58, 0x13, 0x36);
DEFINE_GUID(CODECAPI_AVEncVideoMinQP,                      0x0ee22c6a, 0xa37c, 0x4568, 0xb5, 0xf1, 0x9d, 0x4c, 0x2b, 0x3a, 0xb8, 0x86);
DEFINE_GUID(CODECAPI_AVEncVideoNoOfFieldsToEncode,         0x61e4bbe2, 0x4ee0, 0x40e7, 0x80, 0xab, 0x51, 0xdd, 0xee, 0xbe, 0x62, 0x91);
DEFINE_GUID(CODECAPI_AVEncVideoNoOfFieldsToSkip,           0xa97e1240, 0x1427, 0x4c16, 0xa7, 0xf7, 0x3d, 0xcf, 0xd8, 0xba, 0x4c, 0xc5);
DEFINE_GUID(CODECAPI_AVEncVideoNumGOPsPerIDR,              0x83bc5bdb, 0x5b89, 0x4521, 0x8f, 0x66, 0x33, 0x15, 0x1c, 0x37, 0x31, 0x76);
DEFINE_GUID(CODECAPI_AVEncVideoOutputScanType,             0x460b5576, 0x842e, 0x49ab, 0xa6, 0x2d, 0xb3, 0x6f, 0x73, 0x12, 0xc9, 0xdb);
DEFINE_GUID(CODECAPI_AVEncVideoPixelAspectRatio,           0x3cdc718f, 0xb3e9, 0x4eb6, 0xa5, 0x7f, 0xcf, 0x1f, 0x1b, 0x32, 0x1b, 0x87);
DEFINE_GUID(CODECAPI_AVEncVideoRateControlParams,          0x87d43767, 0x7645, 0x44ec, 0xb4, 0x38, 0xd3, 0x32, 0x2f, 0xbc, 0xa2, 0x9f);
DEFINE_GUID(CODECAPI_AVEncVideoROIEnabled,                 0xd74f7f18, 0x44dd, 0x4b85, 0xab, 0xa3, 0x05, 0xd9, 0xf4, 0x2a, 0x82, 0x80);
DEFINE_GUID(CODECAPI_AVEncVideoSelectLayer,                0xeb1084f5, 0x6aaa, 0x4914, 0xbb, 0x2f, 0x61, 0x47, 0x22, 0x7f, 0x12, 0xe7);
DEFINE_GUID(CODECAPI_AVEncVideoSupportedControls,          0xd3f40fdd, 0x77b9, 0x473d, 0x81, 0x96, 0x06, 0x12, 0x59, 0xe6, 0x9c, 0xff);
DEFINE_GUID(CODECAPI_AVEncVideoTemporalLayerCount,         0x19caebff, 0xb74d, 0x4cfd, 0x8c, 0x27, 0xc2, 0xf9, 0xd9, 0x7d, 0x5f, 0x52);
DEFINE_GUID(CODECAPI_AVEncVideoUsage,                      0x1f636849, 0x5dc1, 0x49f1, 0xb1, 0xd8, 0xce, 0x3c, 0xf6, 0x2e, 0xa3, 0x85);
DEFINE_GUID(CODECAPI_AVEncVideoUseLTRFrame,                0x00752db8, 0x55f7, 0x4f80, 0x89, 0x5b, 0x27, 0x63, 0x91, 0x95, 0xf2, 0xad);

#endif /* __CODECAPI_H */
