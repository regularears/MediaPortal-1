using System;
using MediaPortal.GUI.Library;
using MediaPortal.TV.Recording;
namespace WindowPlugins.GUITV
{
	/// <summary>
	/// Summary description for GUITVNoSignal.
	/// </summary>
	public class GUITVNoSignal : GUIWindow
	{
		[SkinControlAttribute(102)]			  protected GUILabelControl lblNotify=null;
		[SkinControlAttribute(1)]			  protected GUIProgressControl progressControl=null;
		string notify=String.Empty;
		public GUITVNoSignal()
		{
			GetID=(int)GUIWindow.Window.WINDOW_TV_NO_SIGNAL;
		}
		public override bool Init()
		{
			bool bResult=Load (GUIGraphicsContext.Skin+@"\mytvNoSignal.xml");
			return bResult;
		}
		public override void Process()
		{
			if (VideoRendererStatistics.IsVideoFound)
				GUIWindowManager.ActiveWindow((int)GUIWindow.Window.WINDOW_TVFULLSCREEN);
			progressControl.Percentage=Recorder.SignalStrength;
			progressControl.IsVisible=true;
		}
		public string Notify
		{
			set
			{
				notify=value;
			}
		}
		protected override void OnPageLoad()
		{
			base.OnPageLoad ();
			switch (VideoRendererStatistics.VideoState)
			{
				case VideoRendererStatistics.State.NoSignal:
					notify=GUILocalizeStrings.Get(1034);
					break;
				case VideoRendererStatistics.State.Scrambled:
					notify=GUILocalizeStrings.Get(1035);
					break;
				case VideoRendererStatistics.State.Signal:
					notify=GUILocalizeStrings.Get(1036);
					break;
			}
			lblNotify.Label=notify;
		}
	}
}
