// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPNowPlayingHelperDispatch 包装器类

class CWMPNowPlayingHelperDispatch : public COleDispatchDriver
{
public:
	CWMPNowPlayingHelperDispatch() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPNowPlayingHelperDispatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPNowPlayingHelperDispatch(const CWMPNowPlayingHelperDispatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPNowPlayingHelperDispatch 方法
public:
	CString get_viewFriendlyName(LPCTSTR bstrView)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb55, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, bstrView);
		return result;
	}
	long get_viewPresetCount(LPCTSTR bstrView)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb56, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, bstrView);
		return result;
	}
	CString get_viewPresetName(LPCTSTR bstrView, long nPresetIndex)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0xb57, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, bstrView, nPresetIndex);
		return result;
	}
	CString get_effectFriendlyName(LPCTSTR bstrEffect)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb58, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, bstrEffect);
		return result;
	}
	CString get_effectPresetName(LPCTSTR bstrEffect, long nPresetIndex)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0xb59, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, bstrEffect, nPresetIndex);
		return result;
	}
	CString resolveDisplayView(BOOL fSafe)
	{
		CString result;
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb5d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, fSafe);
		return result;
	}
	BOOL isValidDisplayView(LPCTSTR bstrView)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb5e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bstrView);
		return result;
	}
	CString getSkinFile()
	{
		CString result;
		InvokeHelper(0xb5f, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_captionsAvailable()
	{
		BOOL result;
		InvokeHelper(0xb60, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_linkAvailable()
	{
		long result;
		InvokeHelper(0xb61, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_linkRequest()
	{
		long result;
		InvokeHelper(0xb62, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_linkRequest(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb62, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_linkRequestParams()
	{
		CString result;
		InvokeHelper(0xb63, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_linkRequestParams(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb63, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long getCurrentArtID(BOOL fLargeArt)
	{
		long result;
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb65, DISPATCH_METHOD, VT_I4, (void*)&result, parms, fLargeArt);
		return result;
	}
	CString getTimeString(double dTime)
	{
		CString result;
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0xb66, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, dTime);
		return result;
	}
	CString getCurrentScriptCommand(LPCTSTR bstrType)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb67, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, bstrType);
		return result;
	}
	void calcLayout(long lWidth, long lHeight, BOOL vbCaptions, BOOL vbBanner)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BOOL VTS_BOOL;
		InvokeHelper(0xb68, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lWidth, lHeight, vbCaptions, vbBanner);
	}
	long getLayoutSize(long nProp)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb69, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nProp);
		return result;
	}
	LPDISPATCH getRootPlaylist(LPDISPATCH pPlaylist)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0xb6a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, pPlaylist);
		return result;
	}
	CString getHTMLViewURL()
	{
		CString result;
		InvokeHelper(0xb6b, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	LPUNKNOWN get_editObj()
	{
		LPUNKNOWN result;
		InvokeHelper(0xb6e, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	void put_editObj(LPUNKNOWN newValue)
	{
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0xb6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString getStatusString(LPCTSTR bstrStatusId)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb6f, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, bstrStatusId);
		return result;
	}
	long getStatusPct(LPCTSTR bstrStatusId)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb7b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, bstrStatusId);
		return result;
	}
	long getStatusResult(LPCTSTR bstrStatusId)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb7c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, bstrStatusId);
		return result;
	}
	long getStatusIcon(LPCTSTR bstrStatusId)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb7d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, bstrStatusId);
		return result;
	}
	CString getStatusIdList()
	{
		CString result;
		InvokeHelper(0xb7e, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_notificationString()
	{
		CString result;
		InvokeHelper(0xb70, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_htmlViewBaseURL()
	{
		CString result;
		InvokeHelper(0xb72, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_htmlViewBaseURL(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_htmlViewFullURL()
	{
		CString result;
		InvokeHelper(0xb75, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_htmlViewFullURL(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_htmlViewSecureLock()
	{
		long result;
		InvokeHelper(0xb71, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_htmlViewSecureLock(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_htmlViewBusy()
	{
		BOOL result;
		InvokeHelper(0xb73, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_htmlViewBusy(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_htmlViewShowCert()
	{
		BOOL result;
		InvokeHelper(0xb74, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_htmlViewShowCert(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_previousEnabled()
	{
		BOOL result;
		InvokeHelper(0xb76, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_previousEnabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_doPreviousNow()
	{
		BOOL result;
		InvokeHelper(0xb77, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_doPreviousNow(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb77, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_DPI()
	{
		long result;
		InvokeHelper(0xb78, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void clearColors()
	{
		InvokeHelper(0xb79, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get_lastMessage()
	{
		CString result;
		InvokeHelper(0xb7a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_lastMessage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb7a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_inVistaPlus()
	{
		BOOL result;
		InvokeHelper(0xb7f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_isBidi()
	{
		BOOL result;
		InvokeHelper(0xb80, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_isOCX()
	{
		BOOL result;
		InvokeHelper(0xb81, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_hoverTransportsEnabled()
	{
		BOOL result;
		InvokeHelper(0xb82, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void initRipHelper()
	{
		InvokeHelper(0xb83, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_isAudioCD()
	{
		BOOL result;
		InvokeHelper(0xb84, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_isAudioCD(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb84, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_canRip()
	{
		BOOL result;
		InvokeHelper(0xb85, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_canRip(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb85, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_isRipping()
	{
		BOOL result;
		InvokeHelper(0xb86, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_isRipping(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb86, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_currentDrive()
	{
		CString result;
		InvokeHelper(0xb87, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_currentDrive(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb87, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void startRip()
	{
		InvokeHelper(0xb88, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void stopRip()
	{
		InvokeHelper(0xb89, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_showMMO()
	{
		BOOL result;
		InvokeHelper(0xb8a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_showMMO(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb8a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_MMOVisible()
	{
		BOOL result;
		InvokeHelper(0xb9b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_suggestionsVisible()
	{
		BOOL result;
		InvokeHelper(0xb8b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_suggestionsTextColor()
	{
		CString result;
		InvokeHelper(0xb8c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_fontFace()
	{
		CString result;
		InvokeHelper(0xb94, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_fontSize()
	{
		long result;
		InvokeHelper(0xb95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_backgroundColor()
	{
		CString result;
		InvokeHelper(0xb96, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_doubleClickTime()
	{
		long result;
		InvokeHelper(0xb8d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_playAgain()
	{
		BOOL result;
		InvokeHelper(0xb8e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_previousPlaylistAvailable()
	{
		BOOL result;
		InvokeHelper(0xb8f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_nextPlaylistAvailable()
	{
		BOOL result;
		InvokeHelper(0xb90, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void nextPlaylist()
	{
		InvokeHelper(0xb91, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void previousPlaylist()
	{
		InvokeHelper(0xb92, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void playOffsetMedia(long iOffset)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb9c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, iOffset);
	}
	BOOL get_basketVisible()
	{
		BOOL result;
		InvokeHelper(0xb93, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_basketVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb93, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_mmoTextColor()
	{
		CString result;
		InvokeHelper(0xb97, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_backgroundVisible()
	{
		BOOL result;
		InvokeHelper(0xb98, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_backgroundEnabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xb99, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_backgroundEnabled()
	{
		BOOL result;
		InvokeHelper(0xb99, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_backgroundIndex(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb9a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_backgroundIndex()
	{
		long result;
		InvokeHelper(0xb9a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_upNext()
	{
		CString result;
		InvokeHelper(0xb9d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_playbackOverlayVisible()
	{
		BOOL result;
		InvokeHelper(0xb9e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_remoted()
	{
		BOOL result;
		InvokeHelper(0xb9f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_glassEnabled()
	{
		BOOL result;
		InvokeHelper(0xba0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_highContrast()
	{
		BOOL result;
		InvokeHelper(0xba1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_testHighContrast(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xba2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void get_sessionPlaylistCount(long * pVal)
	{
		static BYTE parms[] = VTS_PI4;
		InvokeHelper(0xba3, DISPATCH_PROPERTYGET, VT_EMPTY, NULL, parms, pVal);
	}
	void setGestureStatus(LPDISPATCH pObject, long newVal)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_I4;
		InvokeHelper(0xba4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pObject, newVal);
	}
	CString get_metadataString()
	{
		CString result;
		InvokeHelper(0xba5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_metadataString(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xba5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_albumArtAlpha()
	{
		long result;
		InvokeHelper(0xba6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_playerModeAlbumArtSelected()
	{
		BOOL result;
		InvokeHelper(0xba7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_inFullScreen()
	{
		BOOL result;
		InvokeHelper(0xba8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void syncToAlbumArt(LPDISPATCH pObject, long iOffsetFromCurrentMedia, LPCTSTR bstrFallbackImage)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_I4 VTS_BSTR;
		InvokeHelper(0xba9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pObject, iOffsetFromCurrentMedia, bstrFallbackImage);
	}
	long get_resourceIdForDpi(long iResourceId)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xbaa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, iResourceId);
		return result;
	}

	// IWMPNowPlayingHelperDispatch 属性
public:

};
