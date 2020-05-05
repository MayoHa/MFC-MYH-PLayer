// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPLayoutSettingsDispatch 包装器类

class CWMPLayoutSettingsDispatch : public COleDispatchDriver
{
public:
	CWMPLayoutSettingsDispatch() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPLayoutSettingsDispatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPLayoutSettingsDispatch(const CWMPLayoutSettingsDispatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPLayoutSettingsDispatch 方法
public:
	CString get_effectType()
	{
		CString result;
		InvokeHelper(0xaf0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_effectType(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xaf0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_effectPreset()
	{
		long result;
		InvokeHelper(0xaf1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_effectPreset(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xaf1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_settingsView()
	{
		CString result;
		InvokeHelper(0xaf2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_settingsView(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xaf2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_videoZoom()
	{
		long result;
		InvokeHelper(0xaf3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_videoZoom(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xaf3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_videoShrinkToFit()
	{
		BOOL result;
		InvokeHelper(0xaf4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_videoShrinkToFit(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xaf4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_videoStretchToFit()
	{
		BOOL result;
		InvokeHelper(0xaf5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_videoStretchToFit(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xaf5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_userVideoStretchToFit()
	{
		BOOL result;
		InvokeHelper(0xb34, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_userVideoStretchToFit(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb34, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_showCaptions()
	{
		BOOL result;
		InvokeHelper(0xaf7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_showCaptions(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xaf7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_showTitles()
	{
		BOOL result;
		InvokeHelper(0xaf8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_showTitles(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xaf8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_showEffects()
	{
		BOOL result;
		InvokeHelper(0xaf9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_showEffects(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xaf9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_showFullScreenPlaylist()
	{
		BOOL result;
		InvokeHelper(0xafb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_showFullScreenPlaylist(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xafb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_contrastMode()
	{
		CString result;
		InvokeHelper(0xafd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString getNamedString(LPCTSTR bstrName)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xafa, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, bstrName);
		return result;
	}
	CString getDurationStringFromSeconds(long lDurationVal)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xaff, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, lDurationVal);
		return result;
	}
	CString get_displayView()
	{
		CString result;
		InvokeHelper(0xb00, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_displayView(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb00, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_metadataView()
	{
		CString result;
		InvokeHelper(0xb01, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_metadataView(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb01, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_showSettings()
	{
		BOOL result;
		InvokeHelper(0xb02, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_showSettings(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb02, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_showResizeBars()
	{
		BOOL result;
		InvokeHelper(0xb03, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_showResizeBars(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb03, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_showPlaylist()
	{
		BOOL result;
		InvokeHelper(0xb04, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_showPlaylist(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb04, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_showMetadata()
	{
		BOOL result;
		InvokeHelper(0xb05, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_showMetadata(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb05, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_settingsWidth()
	{
		long result;
		InvokeHelper(0xb06, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_settingsWidth(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb06, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_settingsHeight()
	{
		long result;
		InvokeHelper(0xb07, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_settingsHeight(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb07, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_playlistWidth()
	{
		long result;
		InvokeHelper(0xb08, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_playlistWidth(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb08, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_playlistHeight()
	{
		long result;
		InvokeHelper(0xb09, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_playlistHeight(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb09, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_metadataWidth()
	{
		long result;
		InvokeHelper(0xb0a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_metadataWidth(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb0a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_metadataHeight()
	{
		long result;
		InvokeHelper(0xb0b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_metadataHeight(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb0b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_fullScreenAvailable()
	{
		BOOL result;
		InvokeHelper(0xb0c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_fullScreenAvailable(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb0c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_fullScreenRequest()
	{
		BOOL result;
		InvokeHelper(0xb0d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_fullScreenRequest(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb0d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_quickHide()
	{
		BOOL result;
		InvokeHelper(0xb0e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_quickHide(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb0e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_displayPreset()
	{
		long result;
		InvokeHelper(0xb0f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_displayPreset(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb0f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_settingsPreset()
	{
		long result;
		InvokeHelper(0xb10, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_settingsPreset(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_metadataPreset()
	{
		long result;
		InvokeHelper(0xb11, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_metadataPreset(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_userDisplayView()
	{
		CString result;
		InvokeHelper(0xb12, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_userWMPDisplayView()
	{
		CString result;
		InvokeHelper(0xb13, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_userDisplayPreset()
	{
		long result;
		InvokeHelper(0xb14, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_userWMPDisplayPreset()
	{
		long result;
		InvokeHelper(0xb15, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_dynamicRangeControl()
	{
		long result;
		InvokeHelper(0xb16, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_dynamicRangeControl(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_slowRate()
	{
		float result;
		InvokeHelper(0xb17, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_slowRate(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0xb17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_fastRate()
	{
		float result;
		InvokeHelper(0xb18, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_fastRate(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0xb18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_buttonHueShift()
	{
		float result;
		InvokeHelper(0xb19, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_buttonHueShift(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0xb19, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_buttonSaturation()
	{
		float result;
		InvokeHelper(0xb1a, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_buttonSaturation(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0xb1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_backHueShift()
	{
		float result;
		InvokeHelper(0xb1b, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_backHueShift(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0xb1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_backSaturation()
	{
		float result;
		InvokeHelper(0xb1c, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_backSaturation(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0xb1c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_vizRequest()
	{
		long result;
		InvokeHelper(0xb1d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_vizRequest(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb1d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_appColorLight()
	{
		CString result;
		InvokeHelper(0xb1f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorMedium()
	{
		CString result;
		InvokeHelper(0xb20, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorDark()
	{
		CString result;
		InvokeHelper(0xb21, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_toolbarButtonHighlight()
	{
		CString result;
		InvokeHelper(0xb28, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_toolbarButtonShadow()
	{
		CString result;
		InvokeHelper(0xb29, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_toolbarButtonFace()
	{
		CString result;
		InvokeHelper(0xb2a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_itemPlayingColor()
	{
		CString result;
		InvokeHelper(0xb22, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_itemPlayingBackgroundColor()
	{
		CString result;
		InvokeHelper(0xb23, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_itemErrorColor()
	{
		CString result;
		InvokeHelper(0xb24, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_appColorLimited()
	{
		BOOL result;
		InvokeHelper(0xb25, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_appColorBlackBackground()
	{
		BOOL result;
		InvokeHelper(0xb26, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_appColorBlackBackground(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb26, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_appColorVideoBorder()
	{
		CString result;
		InvokeHelper(0xb27, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_appColorVideoBorder(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb27, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_appColorAux1()
	{
		CString result;
		InvokeHelper(0xb35, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux2()
	{
		CString result;
		InvokeHelper(0xb36, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux3()
	{
		CString result;
		InvokeHelper(0xb37, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux4()
	{
		CString result;
		InvokeHelper(0xb38, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux5()
	{
		CString result;
		InvokeHelper(0xb39, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux6()
	{
		CString result;
		InvokeHelper(0xb3a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux7()
	{
		CString result;
		InvokeHelper(0xb3b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux8()
	{
		CString result;
		InvokeHelper(0xb3c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux9()
	{
		CString result;
		InvokeHelper(0xb3d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux10()
	{
		CString result;
		InvokeHelper(0xb3e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux11()
	{
		CString result;
		InvokeHelper(0xb3f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux12()
	{
		CString result;
		InvokeHelper(0xb40, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux13()
	{
		CString result;
		InvokeHelper(0xb41, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux14()
	{
		CString result;
		InvokeHelper(0xb42, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorAux15()
	{
		CString result;
		InvokeHelper(0xb43, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_status()
	{
		CString result;
		InvokeHelper(0xb44, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_status(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb44, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_userWMPSettingsView()
	{
		CString result;
		InvokeHelper(0xb2b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_userWMPSettingsPreset()
	{
		long result;
		InvokeHelper(0xb2c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_userWMPShowSettings()
	{
		BOOL result;
		InvokeHelper(0xb2d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_userWMPMetadataView()
	{
		CString result;
		InvokeHelper(0xb2e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_userWMPMetadataPreset()
	{
		long result;
		InvokeHelper(0xb2f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_userWMPShowMetadata()
	{
		BOOL result;
		InvokeHelper(0xb30, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_captionsHeight()
	{
		long result;
		InvokeHelper(0xb31, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_captionsHeight(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb31, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_snapToVideo()
	{
		BOOL result;
		InvokeHelper(0xb32, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_snapToVideo(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb32, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_pinFullScreenControls()
	{
		BOOL result;
		InvokeHelper(0xb33, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_pinFullScreenControls(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb33, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_isMultiMon()
	{
		BOOL result;
		InvokeHelper(0xb47, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	float get_exclusiveHueShift()
	{
		float result;
		InvokeHelper(0xb48, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_exclusiveHueShift(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0xb48, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_exclusiveSaturation()
	{
		float result;
		InvokeHelper(0xb49, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_exclusiveSaturation(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0xb49, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_themeBkgColorIsActive()
	{
		BOOL result;
		InvokeHelper(0xb4c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_themeBkgColorIsActive(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb4c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_themeBkgColorActive()
	{
		CString result;
		InvokeHelper(0xb4a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_themeBkgColorInactive()
	{
		CString result;
		InvokeHelper(0xb4b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}

	// IWMPLayoutSettingsDispatch 属性
public:

};
