// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\msdxm.tlb" no_namespace
// CMediaPlayer2 包装器类

class CMediaPlayer2 : public COleDispatchDriver
{
public:
	CMediaPlayer2() {} // 调用 COleDispatchDriver 默认构造函数
	CMediaPlayer2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMediaPlayer2(const CMediaPlayer2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IMediaPlayer2 方法
public:
	double get_CurrentPosition()
	{
		double result;
		InvokeHelper(0x403, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_CurrentPosition(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x403, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_Duration()
	{
		double result;
		InvokeHelper(0x3eb, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	long get_ImageSourceWidth()
	{
		long result;
		InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_ImageSourceHeight()
	{
		long result;
		InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_MarkerCount()
	{
		long result;
		InvokeHelper(0x3f2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanScan()
	{
		BOOL result;
		InvokeHelper(0x3f3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSeek()
	{
		BOOL result;
		InvokeHelper(0x3f4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSeekToMarkers()
	{
		BOOL result;
		InvokeHelper(0x417, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_CurrentMarker()
	{
		long result;
		InvokeHelper(0x405, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_CurrentMarker(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x405, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_FileName()
	{
		CString result;
		InvokeHelper(0x402, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_FileName(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x402, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SourceLink()
	{
		CString result;
		InvokeHelper(0x3f1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	DATE get_CreationDate()
	{
		DATE result;
		InvokeHelper(0x40c, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
		return result;
	}
	CString get_ErrorCorrection()
	{
		CString result;
		InvokeHelper(0x40e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_Bandwidth()
	{
		long result;
		InvokeHelper(0x40d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_SourceProtocol()
	{
		long result;
		InvokeHelper(0x424, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_ReceivedPackets()
	{
		long result;
		InvokeHelper(0x40f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_RecoveredPackets()
	{
		long result;
		InvokeHelper(0x410, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_LostPackets()
	{
		long result;
		InvokeHelper(0x411, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_ReceptionQuality()
	{
		long result;
		InvokeHelper(0x412, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_BufferingCount()
	{
		long result;
		InvokeHelper(0x413, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_IsBroadcast()
	{
		BOOL result;
		InvokeHelper(0x422, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_BufferingProgress()
	{
		long result;
		InvokeHelper(0x438, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_ChannelName()
	{
		CString result;
		InvokeHelper(0x41a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_ChannelDescription()
	{
		CString result;
		InvokeHelper(0x41b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_ChannelURL()
	{
		CString result;
		InvokeHelper(0x41c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_ContactAddress()
	{
		CString result;
		InvokeHelper(0x41d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_ContactPhone()
	{
		CString result;
		InvokeHelper(0x41e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_ContactEmail()
	{
		CString result;
		InvokeHelper(0x41f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	double get_BufferingTime()
	{
		double result;
		InvokeHelper(0x42e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_BufferingTime(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x42e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AutoStart()
	{
		BOOL result;
		InvokeHelper(0x3f9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AutoStart(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3f9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AutoRewind()
	{
		BOOL result;
		InvokeHelper(0x3fa, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AutoRewind(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3fa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_Rate()
	{
		double result;
		InvokeHelper(0x404, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_Rate(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x404, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_SendKeyboardEvents()
	{
		BOOL result;
		InvokeHelper(0x3f5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SendKeyboardEvents(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3f5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_SendMouseClickEvents()
	{
		BOOL result;
		InvokeHelper(0x3f6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SendMouseClickEvents(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3f6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_SendMouseMoveEvents()
	{
		BOOL result;
		InvokeHelper(0x3f7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SendMouseMoveEvents(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3f7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PlayCount()
	{
		long result;
		InvokeHelper(0x406, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PlayCount(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x406, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ClickToPlay()
	{
		BOOL result;
		InvokeHelper(0x401, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ClickToPlay(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x401, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AllowScan()
	{
		BOOL result;
		InvokeHelper(0x40b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AllowScan(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x40b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_EnableContextMenu()
	{
		BOOL result;
		InvokeHelper(0x3fd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableContextMenu(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3fd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_CursorType()
	{
		long result;
		InvokeHelper(0x414, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_CursorType(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x414, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_CodecCount()
	{
		long result;
		InvokeHelper(0x421, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowChangeDisplaySize()
	{
		BOOL result;
		InvokeHelper(0x420, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AllowChangeDisplaySize(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x420, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_IsDurationValid()
	{
		BOOL result;
		InvokeHelper(0x423, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_OpenState()
	{
		long result;
		InvokeHelper(0x425, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_SendOpenStateChangeEvents()
	{
		BOOL result;
		InvokeHelper(0x426, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SendOpenStateChangeEvents(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x426, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_SendWarningEvents()
	{
		BOOL result;
		InvokeHelper(0x427, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SendWarningEvents(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x427, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_SendErrorEvents()
	{
		BOOL result;
		InvokeHelper(0x428, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SendErrorEvents(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x428, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PlayState()
	{
		long result;
		InvokeHelper(0x42c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_SendPlayStateChangeEvents()
	{
		BOOL result;
		InvokeHelper(0x42d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SendPlayStateChangeEvents(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x42d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_DisplaySize()
	{
		long result;
		InvokeHelper(0x408, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DisplaySize(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x408, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_InvokeURLs()
	{
		BOOL result;
		InvokeHelper(0x3fc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_InvokeURLs(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3fc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_BaseURL()
	{
		CString result;
		InvokeHelper(0x43a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_BaseURL(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x43a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_DefaultFrame()
	{
		CString result;
		InvokeHelper(0x43b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_DefaultFrame(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x43b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_HasError()
	{
		BOOL result;
		InvokeHelper(0x429, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_ErrorDescription()
	{
		CString result;
		InvokeHelper(0x42a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_ErrorCode()
	{
		long result;
		InvokeHelper(0x42b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_AnimationAtStart()
	{
		BOOL result;
		InvokeHelper(0x415, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AnimationAtStart(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x415, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_TransparentAtStart()
	{
		BOOL result;
		InvokeHelper(0x3fe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_TransparentAtStart(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3fe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Volume()
	{
		long result;
		InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Volume(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Balance()
	{
		long result;
		InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Balance(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ReadyState()
	{
		long result;
		InvokeHelper(DISPID_READYSTATE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	double get_SelectionStart()
	{
		double result;
		InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_SelectionStart(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_SelectionEnd()
	{
		double result;
		InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_SelectionEnd(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowDisplay()
	{
		BOOL result;
		InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowDisplay(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowControls()
	{
		BOOL result;
		InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowControls(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowPositionControls()
	{
		BOOL result;
		InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowPositionControls(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowTracker()
	{
		BOOL result;
		InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowTracker(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_EnablePositionControls()
	{
		BOOL result;
		InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnablePositionControls(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_EnableTracker()
	{
		BOOL result;
		InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableTracker(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x1d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Enabled()
	{
		BOOL result;
		InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Enabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_DisplayForeColor()
	{
		unsigned long result;
		InvokeHelper(0x24, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_DisplayForeColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x24, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_DisplayBackColor()
	{
		unsigned long result;
		InvokeHelper(0x25, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_DisplayBackColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x25, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_DisplayMode()
	{
		long result;
		InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DisplayMode(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x20, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_VideoBorder3D()
	{
		BOOL result;
		InvokeHelper(0x44f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_VideoBorder3D(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x44f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_VideoBorderWidth()
	{
		long result;
		InvokeHelper(0x44d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_VideoBorderWidth(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x44d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_VideoBorderColor()
	{
		unsigned long result;
		InvokeHelper(0x44e, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_VideoBorderColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x44e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowGotoBar()
	{
		BOOL result;
		InvokeHelper(0x440, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowGotoBar(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x440, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowStatusBar()
	{
		BOOL result;
		InvokeHelper(0x43e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowStatusBar(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x43e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowCaptioning()
	{
		BOOL result;
		InvokeHelper(0x43c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowCaptioning(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x43c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowAudioControls()
	{
		BOOL result;
		InvokeHelper(0x453, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowAudioControls(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x453, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_CaptioningID()
	{
		CString result;
		InvokeHelper(0x43d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_CaptioningID(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x43d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Mute()
	{
		BOOL result;
		InvokeHelper(0x441, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Mute(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x441, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_CanPreview()
	{
		BOOL result;
		InvokeHelper(0x445, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_PreviewMode()
	{
		BOOL result;
		InvokeHelper(0x443, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_PreviewMode(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x443, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_HasMultipleItems()
	{
		BOOL result;
		InvokeHelper(0x446, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_Language()
	{
		long result;
		InvokeHelper(0x447, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Language(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x447, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_AudioStream()
	{
		long result;
		InvokeHelper(0x448, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_AudioStream(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x448, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SAMIStyle()
	{
		CString result;
		InvokeHelper(0x449, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_SAMIStyle(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x449, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SAMILang()
	{
		CString result;
		InvokeHelper(0x44a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_SAMILang(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x44a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SAMIFileName()
	{
		CString result;
		InvokeHelper(0x44b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_SAMIFileName(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x44b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_StreamCount()
	{
		long result;
		InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_ClientId()
	{
		CString result;
		InvokeHelper(0x452, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_ConnectionSpeed()
	{
		long result;
		InvokeHelper(0x459, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_AutoSize()
	{
		BOOL result;
		InvokeHelper(DISPID_AUTOSIZE, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AutoSize(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(DISPID_AUTOSIZE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_EnableFullScreenControls()
	{
		BOOL result;
		InvokeHelper(0x454, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableFullScreenControls(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x454, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_ActiveMovie()
	{
		LPDISPATCH result;
		InvokeHelper(0x455, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_NSPlay()
	{
		LPDISPATCH result;
		InvokeHelper(0x456, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_WindowlessVideo()
	{
		BOOL result;
		InvokeHelper(0x458, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_WindowlessVideo(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x458, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Play()
	{
		InvokeHelper(0x7d1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Stop()
	{
		InvokeHelper(0x7d3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Pause()
	{
		InvokeHelper(0x7d2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	double GetMarkerTime(long MarkerNum)
	{
		double result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7d4, DISPATCH_METHOD, VT_R8, (void*)&result, parms, MarkerNum);
		return result;
	}
	CString GetMarkerName(long MarkerNum)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7d5, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, MarkerNum);
		return result;
	}
	void AboutBox()
	{
		InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL GetCodecInstalled(long CodecNum)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7d7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, CodecNum);
		return result;
	}
	CString GetCodecDescription(long CodecNum)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7d8, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, CodecNum);
		return result;
	}
	CString GetCodecURL(long CodecNum)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7d9, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, CodecNum);
		return result;
	}
	CString GetMoreInfoURL(long MoreInfoType)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7db, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, MoreInfoType);
		return result;
	}
	CString GetMediaInfoString(long MediaInfoType)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7e0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, MediaInfoType);
		return result;
	}
	void Cancel()
	{
		InvokeHelper(0x7d6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Open(LPCTSTR bstrFileName)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x7da, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrFileName);
	}
	BOOL IsSoundCardEnabled()
	{
		BOOL result;
		InvokeHelper(0x35, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void Next()
	{
		InvokeHelper(0x7e7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Previous()
	{
		InvokeHelper(0x7e6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void StreamSelect(long StreamNum)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7df, DISPATCH_METHOD, VT_EMPTY, NULL, parms, StreamNum);
	}
	void FastForward()
	{
		InvokeHelper(0x7e8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void FastReverse()
	{
		InvokeHelper(0x7e9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString GetStreamName(long StreamNum)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7e3, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, StreamNum);
		return result;
	}
	long GetStreamGroup(long StreamNum)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7e4, DISPATCH_METHOD, VT_I4, (void*)&result, parms, StreamNum);
		return result;
	}
	BOOL GetStreamSelected(long StreamNum)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7e5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, StreamNum);
		return result;
	}
	LPDISPATCH get_DVD()
	{
		LPDISPATCH result;
		InvokeHelper(0x5dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString GetMediaParameter(long EntryNum, LPCTSTR bstrParameterName)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x7ec, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, EntryNum, bstrParameterName);
		return result;
	}
	CString GetMediaParameterName(long EntryNum, long Index)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x7ed, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, EntryNum, Index);
		return result;
	}
	long get_EntryCount()
	{
		long result;
		InvokeHelper(0x7ee, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetCurrentEntry()
	{
		long result;
		InvokeHelper(0x7ef, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetCurrentEntry(long EntryNumber)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7f0, DISPATCH_METHOD, VT_EMPTY, NULL, parms, EntryNumber);
	}
	void ShowDialog(long mpDialogIndex)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7f1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, mpDialogIndex);
	}

	// IMediaPlayer2 属性
public:

};
