/**
*  MediaFormats.h
*  Copyright (C) 2004-2006 bear
*
*  This file is part of TSFileSource, a directshow push source filter that
*  provides an MPEG transport stream output.
*
*  TSFileSource is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation; either version 2 of the License, or
*  (at your option) any later version.
*
*  TSFileSource is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with TSFileSource; if not, write to the Free Software
*  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
*  bear can be reached on the forums at
*    http://forums.dvbowners.com/
*/
//#include <dvdmedia.h>
//MPEG2VIDEOINFO;
//WAVEFORMATEX;

// MPEG2VIDEOINFO
static BYTE Mpeg2ProgramVideo [] = {
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcSource.left              = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcSource.top               = 0x00000000
	0xD0, 0x02, 0x00, 0x00,                         //  .hdr.rcSource.right             = 0x000002d0
	0xE0, 0x01, 0x00, 0x00,                         //  .hdr.rcSource.bottom            = 0x000001e0
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcTarget.left              = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcTarget.top               = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcTarget.right             = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcTarget.bottom            = 0x00000000
	0x00, 0x09, 0x3D, 0x00,                         //  .hdr.dwBitRate                  = 0x003d0900
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.dwBitErrorRate             = 0x00000000
	0x63, 0x17, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, //  .hdr.AvgTimePerFrame            = 0x0000000000051763
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.dwInterlaceFlags           = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.dwCopyProtectFlags         = 0x00000000
	0x04, 0x00, 0x00, 0x00,                         //  .hdr.dwPictAspectRatioX         = 0x00000004
	0x03, 0x00, 0x00, 0x00,                         //  .hdr.dwPictAspectRatioY         = 0x00000003
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.dwReserved1                = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.dwReserved2                = 0x00000000
	0x28, 0x00, 0x00, 0x00,                         //  .hdr.bmiHeader.biSize           = 0x00000028
	0xD0, 0x02, 0x00, 0x00,                         //  .hdr.bmiHeader.biWidth          = 0x000002d0
	0xE0, 0x01, 0x00, 0x00,                         //  .hdr.bmiHeader.biHeight         = 0x00000000
	0x00, 0x00,                                     //  .hdr.bmiHeader.biPlanes         = 0x0000
	0x00, 0x00,                                     //  .hdr.bmiHeader.biBitCount       = 0x0000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.bmiHeader.biCompression    = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.bmiHeader.biSizeImage      = 0x00000000
	0xD0, 0x07, 0x00, 0x00,                         //  .hdr.bmiHeader.biXPelsPerMeter  = 0x000007d0
	0x27, 0xCF, 0x00, 0x00,                         //  .hdr.bmiHeader.biYPelsPerMeter  = 0x0000cf27
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.bmiHeader.biClrUsed        = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.bmiHeader.biClrImportant   = 0x00000000
	0x98, 0xF4, 0x06, 0x00,                         //  .dwStartTimeCode                = 0x0006f498
	0x56, 0x00, 0x00, 0x00,                         //  .cbSequenceHeader               = 0x00000056
	0x02, 0x00, 0x00, 0x00,                         //  .dwProfile                      = 0x00000002
	0x02, 0x00, 0x00, 0x00,                         //  .dwLevel                        = 0x00000002
	0x00, 0x00, 0x00, 0x00,                         //  .Flags                          = 0x00000000
													//  .dwSequenceHeader [1]
	0x00, 0x00, 0x01, 0xB3, 0x2D, 0x01, 0xE0, 0x24,
	0x09, 0xC4, 0x23, 0x81, 0x10, 0x11, 0x11, 0x12,
	0x12, 0x12, 0x13, 0x13, 0x13, 0x13, 0x14, 0x14,
	0x14, 0x14, 0x14, 0x15, 0x15, 0x15, 0x15, 0x15,
	0x15, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16,
	0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17,
	0x18, 0x18, 0x18, 0x19, 0x18, 0x18, 0x18, 0x19,
	0x1A, 0x1A, 0x1A, 0x1A, 0x19, 0x1B, 0x1B, 0x1B,
	0x1B, 0x1B, 0x1C, 0x1C, 0x1C, 0x1C, 0x1E, 0x1E,
	0x1E, 0x1F, 0x1F, 0x21, 0x00, 0x00, 0x01, 0xB5,
	0x14, 0x82, 0x00, 0x01, 0x00, 0x00
};

static 
BYTE
g_Mpeg2ProgramVideo [] = {
	0x00, 0x00, 0x00, 0x00,							//  .hdr.rcSource.left
	0x00, 0x00, 0x00, 0x00,							//  .hdr.rcSource.top
	0xd0, 0x02, 0x00, 0x00,							//  .hdr.rcSource.right
	0x40, 0x02, 0x00, 0x00,							//  .hdr.rcSource.bottom
	0x00, 0x00, 0x00, 0x00,							//  .hdr.rcTarget.left
	0x00, 0x00, 0x00, 0x00,							//  .hdr.rcTarget.top
	0x00, 0x00, 0x00, 0x00,							//  .hdr.rcTarget.right
	0x00, 0x00, 0x00, 0x00,							//  .hdr.rcTarget.bottom
	0xc0, 0xe1, 0xe4, 0x00,							//  .hdr.dwBitRate
	0x00, 0x00, 0x00, 0x00,							//  .hdr.dwBitErrorRate
	0x80, 0x1a, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, //  .hdr.AvgTimePerFrame
	0x00, 0x00, 0x00, 0x00,							//  .hdr.dwInterlaceFlags
	0x00, 0x00, 0x00, 0x00,							//  .hdr.dwCopyProtectFlags
	0x00, 0x00, 0x00, 0x00,							//  .hdr.dwPictAspectRatioX
	0x00, 0x00, 0x00, 0x00,							//  .hdr.dwPictAspectRatioY
	0x00, 0x00, 0x00, 0x00,							//  .hdr.dwReserved1
	0x00, 0x00, 0x00, 0x00,							//  .hdr.dwReserved2
	0x28, 0x00, 0x00, 0x00,							//  .hdr.bmiHeader.biSize
	0xd0, 0x02, 0x00, 0x00,							//  .hdr.bmiHeader.biWidth
	0x40, 0x02, 0x00, 0x00,							//  .hdr.bmiHeader.biHeight
	0x00, 0x00,										//  .hdr.bmiHeader.biPlanes
	0x00, 0x00,										//  .hdr.bmiHeader.biBitCount
	0x00, 0x00, 0x00, 0x00,							//  .hdr.bmiHeader.biCompression
	0x00, 0x00, 0x00, 0x00,							//  .hdr.bmiHeader.biSizeImage
	0xd0, 0x07, 0x00, 0x00,							//  .hdr.bmiHeader.biXPelsPerMeter
	0x42, 0xd8, 0x00, 0x00,							//  .hdr.bmiHeader.biYPelsPerMeter
	0x00, 0x00, 0x00, 0x00,							//  .hdr.bmiHeader.biClrUsed
	0x00, 0x00, 0x00, 0x00,							//  .hdr.bmiHeader.biClrImportant
	0x00, 0x00, 0x00, 0x00,							//  .dwStartTimeCode
	0x4c, 0x00, 0x00, 0x00,							//  .cbSequenceHeader
	0x00, 0x00, 0x00, 0x00,							//  .dwProfile
	0x00, 0x00, 0x00, 0x00,							//  .dwLevel
	0x00, 0x00, 0x00, 0x00,							//  .Flags
													//  .dwSequenceHeader [1]
	0x00, 0x00, 0x01, 0xb3, 0x2d, 0x02, 0x40, 0x33, 
	0x24, 0x9f, 0x23, 0x81, 0x10, 0x11, 0x11, 0x12, 
	0x12, 0x12, 0x13, 0x13, 0x13, 0x13, 0x14, 0x14, 
	0x14, 0x14, 0x14, 0x15, 0x15, 0x15, 0x15, 0x15, 
	0x15, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 
	0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 
	0x18, 0x18, 0x18, 0x19, 0x18, 0x18, 0x18, 0x19, 
	0x1a, 0x1a, 0x1a, 0x1a, 0x19, 0x1b, 0x1b, 0x1b, 
	0x1b, 0x1b, 0x1c, 0x1c, 0x1c, 0x1c, 0x1e, 0x1e, 
	0x1e, 0x1f, 0x1f, 0x21, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// VIDEOINFOHEADER
static BYTE H264VideoFormat [] = {
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcSource.left              = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcSource.top               = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcSource.right             = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcSource.bottom            = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcTarget.left              = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcTarget.top               = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcTarget.right             = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.rcTarget.bottom            = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.dwBitRate                  = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.dwBitErrorRate             = 0x00000000
//	0x80, 0x1a, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, //  .hdr.AvgTimePerFrame            = 0x0000000000061a80
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  .hdr.AvgTimePerFrame            = 0x0000000000061a80
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.bmiHeader.biSize           = 0x00000028
	0xD0, 0x02, 0x00, 0x00,                         //  .hdr.bmiHeader.biWidth          = 0x000002d0
	0x40, 0x02, 0x00, 0x00,                         //  .hdr.bmiHeader.biHeight         = 0x00000240
	0x00, 0x00,                                     //  .hdr.bmiHeader.biPlanes         = 0x0001
	0x00, 0x00,                                     //  .hdr.bmiHeader.biBitCount       = 0x0018
	0x68, 0x32, 0x36, 0x34,                         //  .hdr.bmiHeader.biCompression    = "h264"
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.bmiHeader.biSizeImage      = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.bmiHeader.biXPelsPerMeter  = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.bmiHeader.biYPelsPerMeter  = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.bmiHeader.biClrUsed        = 0x00000000
	0x00, 0x00, 0x00, 0x00,                         //  .hdr.bmiHeader.biClrImportant   = 0x00000000
};

static BYTE MPEG1AudioFormat [] = {
	0x50, 0x00,				//wFormatTag
	0x02, 0x00,				//nChannels
	0x80, 0xBB,	0x00, 0x00, //nSamplesPerSec
	0x00, 0x7D,	0x00, 0x00, //nAvgBytesPerSec
	0x00, 0x03,				//nBlockAlign
	0x00, 0x00,				//wBitsPerSample
	0x16, 0x00,				//cbSize
	0x02, 0x00,				//wValidBitsPerSample
	0x00, 0xE8,				//wSamplesPerBlock
	0x03, 0x00,				//wReserved
	0x01, 0x00,	0x01,0x00,  //dwChannelMask
	0x01, 0x00,	0x1C, 0x00, 0x00, 0x00,	0x00, 0x00, 0x00, 0x00, 0x00, 0x00
} ;

static BYTE MPEG2AudioFormat [] = {
	0x50, 0x00,				//wFormatTag
	0x02, 0x00,				//nChannels
	0x80, 0xbb, 0x00, 0x00, //nSamplesPerSec
	0x00, 0x7d, 0x00, 0x00, //nAvgBytesPerSec
	0x01, 0x00,				//nBlockAlign
	0x00, 0x00,				//wBitsPerSample
	0x16, 0x00,				//cbSize
	0x02, 0x00,				//wValidBitsPerSample
	0x00, 0xe8,				//wSamplesPerBlock
	0x03, 0x00,				//wReserved
	0x01, 0x00, 0x01, 0x00, //dwChannelMask
	0x01, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static BYTE AC3AudioFormat [] = {
	0x00, 0x20,				//wFormatTag
	0x06, 0x00,				//nChannels
	0x80, 0xBB, 0x00, 0x00, //nSamplesPerSec
	0xC0, 0x5D, 0x00, 0x00, //nAvgBytesPerSec
	0x00, 0x03,				//nBlockAlign
	0x00, 0x00,				//wBitsPerSample
	0x00, 0x00				//cbSize
};

static BYTE AACAudioFormat [] = {
	0xFF, 0x00,				//wFormatTag
	0x02, 0x00,				//nChannels
	0x80, 0xBB, 0x00, 0x00, //nSamplesPerSec
	0xCE, 0x3E, 0x00, 0x00, //nAvgBytesPerSec
	0xAE, 0x02,				//nBlockAlign
	0x00, 0x00,				//wBitsPerSample
	0x02, 0x00,				//cbSize
	0x11, 0x90
};

static BYTE AACAudioFormat2 [] = {
	0xFF, 0x00,				//wFormatTag
	0x02, 0x00,				//nChannels
	0x80, 0xBB, 0x00, 0x00, //nSamplesPerSec
	0x9F, 0x24, 0x00, 0x00, //nAvgBytesPerSec
	0x90, 0x01,				//nBlockAlign
	0x00, 0x00,				//wBitsPerSample
	0x02, 0x00,				//cbSize
	0x11, 0x90
};

static BYTE DTSAudioFormat [] = {
	0x01, 0x02,				//wFormatTag
	0x05, 0x00,				//nChannels
	0x80, 0xBB, 0x00, 0x00, //nSamplesPerSec
	0x34, 0x18, 0x00, 0x00, //nAvgBytesPerSec
	0xEE, 0x03,				//nBlockAlign
	0x00, 0x00,				//wBitsPerSample
	0x00, 0x00,				//cbSize
	0x00, 0x00
};
// {000000FF-0000-0010-8000-00AA00389B71}
static GUID MEDIASUBTYPE_AAC = {0x00000ff, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71};
static GUID MEDIASUBTYPE_LATM_AAC = {0x000001ff, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71};
static GUID H264_SubType = {0x8D2D71CB, 0x243F, 0x45E3, {0xB2, 0xD8, 0x5F, 0xD7, 0x96, 0x7E, 0xC0, 0x9B}};
static GUID MPG4_SubType = FOURCCMap(MAKEFOURCC('A','V','C','1')) ;
