#region Copyright (C) 2005-2008 Team MediaPortal

/* 
 *	Copyright (C) 2005-2008 Team MediaPortal
 *	http://www.team-mediaportal.com
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *   
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *   
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. 
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#endregion

#region license

/*
DirectShowLib - Provide access to DirectShow interfaces via .NET
Copyright (C) 2006
http://sourceforge.net/projects/directshownet/

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#endregion

using System;
using System.Runtime.InteropServices;
#pragma warning disable 618
namespace DirectShowLib.BDA
{
    #region Declarations

#if ALLOW_UNTESTED_INTERFACES

    /// <summary>
    /// From BDA_EVENT_ID
    /// </summary>
    public enum BDAEventID
    {
        SignalLoss = 0,
        SignalLock,
        DataStart,
        DataStop,
        ChannelAcquired,
        ChannelLost,
        ChannelSourceChanged,
        ChannelActivated,
        ChannelDeactivated,
        SubChannelAcquired,
        SubChannelLost,
        SubChannelSourceChanged,
        SubChannelActivated,
        SubChannelDeactivated,
        AccessGranted,
        AccessDenied,
        OfferExtended,
        PurchaseCompleted,
        SmartCardInserted,
        SmartCardRemoved
    }

    /// <summary>
    /// From BDA_TEMPLATE_PIN_JOINT
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    public struct BDATemplatePinJoint
    {
        public int uliTemplateConnection;
        public int ulcInstancesMax;
    }

    /// <summary>
    /// From KS_BDA_FRAME_INFO
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    public struct KSBDAFrameInfo
    {
        public int ExtendedHeaderSize; // Size of this extended header
        public int dwFrameFlags; //
        public int ulEvent; //
        public int ulChannelNumber; //
        public int ulSubchannelNumber; //
        public int ulReason; //
    }

    /// <summary>
    /// From MPEG2_TRANSPORT_STRIDE
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    public struct MPEG2TransportStride
    {
        public int dwOffset;
        public int dwPacketLength;
        public int dwStride;
    }

#endif

    /// <summary>
    /// From FECMethod
    /// </summary>
    public enum FECMethod
    {
        MethodNotSet = -1,
        MethodNotDefined = 0,
        Viterbi = 1, // FEC is a Viterbi Binary Convolution.
        RS204_188, // The FEC is Reed-Solomon 204/188 (outer FEC)
        Max,
    }

    /// <summary>
    /// From BinaryConvolutionCodeRate
    /// </summary>
    public enum BinaryConvolutionCodeRate
    {
        RateNotSet = -1,
        RateNotDefined = 0,
        Rate1_2 = 1, // 1/2
        Rate2_3, // 2/3
        Rate3_4, // 3/4
        Rate3_5, // 3/5
        Rate4_5, // 4/5
        Rate5_6, // 5/6
        Rate5_11, // 5/11
        Rate7_8, // 7/8
        Rate1_4, // 1/4
        Rate1_3, // 1/3
        Rate2_5, // 2/5
        Rate6_7, // 6/7
        Rate8_9, // 8/9
        Rate9_10, // 9/10
        RateMax
    }

    /// <summary>
    /// From Polarisation
    /// </summary>
    public enum Polarisation
    {
        NotSet = -1,
        NotDefined = 0,
        LinearH = 1, // Linear horizontal polarisation
        LinearV, // Linear vertical polarisation
        CircularL, // Circular left polarisation
        CircularR, // Circular right polarisation
        Max,
    }

    /// <summary>
    /// From SpectralInversion
    /// </summary>
    public enum SpectralInversion
    {
        NotSet = -1,
        NotDefined = 0,
        Automatic = 1,
        Normal,
        Inverted,
        Max
    }

    /// <summary>
    /// From ModulationType
    /// </summary>
    public enum ModulationType
    {
        ModNotSet = -1,
        ModNotDefined = 0,
        Mod16Qam = 1,
        Mod32Qam,
        Mod64Qam,
        Mod80Qam,
        Mod96Qam,
        Mod112Qam,
        Mod128Qam,
        Mod160Qam,
        Mod192Qam,
        Mod224Qam,
        Mod256Qam,
        Mod320Qam,
        Mod384Qam,
        Mod448Qam,
        Mod512Qam,
        Mod640Qam,
        Mod768Qam,
        Mod896Qam,
        Mod1024Qam,
        ModQpsk, // Quadrature Phase Shift Keying (including backwards compatible mode)
        ModBpsk, // Binary Phase Shift Keying
        ModOqpsk, // Offset QPSK
        Mod8Vsb, // 8-Level Vestigial Sideband
        Mod16Vsb, // 16-Level Vestigial Sideband
        ModAnalogAmplitude, // std am
        ModAnalogFrequency, // std fm
        Mod8psk, // 8 Phase Shift Keying (including backwards compatible mode)
        ModRf, // analog TV (Video standards such as NTSC/PAL/SECAM specified in IAnalogLocator VideoStandard property)
        Mod16Apsk, // DVB-S2 modulation 16-Level APSK
        Mod32Apsk, // DVB-S2 modulation 32-Level APSK
        ModQpsk2, // Non-Backwards Compatible Quadrature Phase Shift Keying
        Mod8psk2, // Non-Backwards Compatible 8 Phase Shift Keying
        ModDirectTV,  // DIRECTV DSS
        ModMax
    } 

    /// <summary>
    /// From DVBSystemType
    /// </summary>
    public enum DVBSystemType
    {
        Cable,
        Terrestrial,
        Satellite,
    }

    /// <summary>
    /// From HierarchyAlpha
    /// </summary>
    public enum HierarchyAlpha
    {
        HAlphaNotSet = -1,
        HAlphaNotDefined = 0,
        HAlpha1 = 1, // Hierarchy alpha is 1.
        HAlpha2, // Hierarchy alpha is 2.
        HAlpha4, // Hierarchy alpha is 4.
        HAlphaMax,
    }

    /// <summary>
    /// From GuardInterval
    /// </summary>
    public enum GuardInterval
    {
        GuardNotSet = -1,
        GuardNotDefined = 0,
        Guard1_32 = 1, // Guard interval is 1/32
        Guard1_16, // Guard interval is 1/16
        Guard1_8, // Guard interval is 1/8
        Guard1_4, // Guard interval is 1/4
        GuardMax,
    }

    /// <summary>
    /// From TransmissionMode
    /// </summary>
    public enum TransmissionMode
    {
        ModeNotSet = -1,
        ModeNotDefined = 0,
        Mode2K = 1, // Transmission uses 1705 carriers (use a 2K FFT)
        Mode8K, // Transmission uses 6817 carriers (use an 8K FFT)
        ModeMax,
    }

    /// <summary>
    /// From Roll-Off
    /// </summary>
    public enum Rolloff
    {
      NotSet = -1,
      NotDefined = 0,
      RollOff_20 = 1, // .20 Roll Off (DVB-S2 Only)
      RollOff_25, // .25 Roll Off (DVB-S2 Only)
      RollOff_35, // .35 Roll Off (DVB-S2 Only)
      RollOffMax
    }

    /// <summary>
    /// From Pilot
    /// </summary>
    public enum Pilot
    {
      NotSet = -1,
      NotDefined = 0,
      PilotOff = 1, // Pilot Off (DVB-S2 Only)
      PilotOn, // Pilot On  (DVB-S2 Only)
      PilotMax
    }

    /// <summary>
    /// From ComponentStatus
    /// </summary>
    public enum ComponentStatus
    {
        Active,
        Inactive,
        Unavailable
    }

    /// <summary>
    /// From ComponentCategory
    /// </summary>
    public enum ComponentCategory
    {
        NotSet = -1,
        Other = 0,
        Video,
        Audio,
        Text,
        Data
    }

    /// <summary>
    /// From MPEG2StreamType
    /// </summary>
    public enum MPEG2StreamType
    {
        BdaUninitializedMpeg2StreamType = -1,
        Reserved1 = 0x0,
        IsoIec11172_2_Video = Reserved1 + 1,
        IsoIec13818_2_Video = IsoIec11172_2_Video + 1,
        IsoIec11172_3_Audio = IsoIec13818_2_Video + 1,
        IsoIec13818_3_Audio = IsoIec11172_3_Audio + 1,
        IsoIec13818_1_PrivateSection = IsoIec13818_3_Audio + 1,
        IsoIec13818_1_Pes = IsoIec13818_1_PrivateSection + 1,
        IsoIec13522_Mheg = IsoIec13818_1_Pes + 1,
        AnnexADsmCC = IsoIec13522_Mheg + 1,
        ItuTRecH222_1 = AnnexADsmCC + 1,
        IsoIec13818_6_TypeA = ItuTRecH222_1 + 1,
        IsoIec13818_6_TypeB = IsoIec13818_6_TypeA + 1,
        IsoIec13818_6_TypeC = IsoIec13818_6_TypeB + 1,
        IsoIec13818_6_TypeD = IsoIec13818_6_TypeC + 1,
        IsoIec13818_1_Auxiliary = IsoIec13818_6_TypeD + 1,
        IsoIec13818_1_Reserved = IsoIec13818_1_Auxiliary + 1,
        UserPrivate = IsoIec13818_1_Reserved + 1
    }

    /// <summary>
    /// From ATSCComponentTypeFlags
    /// </summary>
    [Flags]
    public enum ATSCComponentTypeFlags
    {
        None = 0x0,
        ATSCCT_AC3 = 0x00000001
    }

    /// <summary>
    /// From BDA_TEMPLATE_CONNECTION
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    public struct BDATemplateConnection
    {
      public int FromNodeType;
      public int FromNodePinType;
      public int ToNodeType;
      public int ToNodePinType;
    }
    #endregion
}
