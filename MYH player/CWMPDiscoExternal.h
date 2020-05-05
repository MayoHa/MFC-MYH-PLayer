// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPDiscoExternal 包装器类

class CWMPDiscoExternal : public COleDispatchDriver
{
public:
	CWMPDiscoExternal() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPDiscoExternal(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPDiscoExternal(const CWMPDiscoExternal& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPDiscoExternal 方法
public:
	CString get_version()
	{
		CString result;
		InvokeHelper(0x2715, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorLight()
	{
		CString result;
		InvokeHelper(0x271c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnColorChange(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x2722, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_appColorMedium()
	{
		CString result;
		InvokeHelper(0x271d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorDark()
	{
		CString result;
		InvokeHelper(0x271e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorButtonHighlight()
	{
		CString result;
		InvokeHelper(0x271f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorButtonShadow()
	{
		CString result;
		InvokeHelper(0x2720, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorButtonHoverFace()
	{
		CString result;
		InvokeHelper(0x2721, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void NavigateTaskPaneURL(LPCTSTR bstrKeyName, LPCTSTR bstrTaskPane, LPCTSTR bstrParams)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x272a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrKeyName, bstrTaskPane, bstrParams);
	}
	void put_SelectedTaskPane(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x272b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SelectedTaskPane()
	{
		CString result;
		InvokeHelper(0x272b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_DownloadManager()
	{
		LPDISPATCH result;
		InvokeHelper(0x2719, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void put_OnLoginChange(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x272c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_userLoggedIn()
	{
		BOOL result;
		InvokeHelper(0x272d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void attemptLogin()
	{
		InvokeHelper(0x272e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get_accountType()
	{
		CString result;
		InvokeHelper(0x272f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnViewChange(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x2730, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void changeView(LPCTSTR bstrLibraryLocationType, LPCTSTR bstrLibraryLocationID, LPCTSTR bstrFilter, LPCTSTR bstrViewParams)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x2731, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrLibraryLocationType, bstrLibraryLocationID, bstrFilter, bstrViewParams);
	}
	void changeViewOnlineList(LPCTSTR bstrLibraryLocationType, LPCTSTR bstrLibraryLocationID, LPCTSTR bstrParams, LPCTSTR bstrFriendlyName, LPCTSTR bstrListType, LPCTSTR bstrViewMode)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x2732, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrLibraryLocationType, bstrLibraryLocationID, bstrParams, bstrFriendlyName, bstrListType, bstrViewMode);
	}
	CString get_libraryLocationType()
	{
		CString result;
		InvokeHelper(0x2733, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_libraryLocationID()
	{
		CString result;
		InvokeHelper(0x2734, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_selectedItemType()
	{
		CString result;
		InvokeHelper(0x2735, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_selectedItemID()
	{
		CString result;
		InvokeHelper(0x2736, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_filter()
	{
		CString result;
		InvokeHelper(0x2737, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_task()
	{
		CString result;
		InvokeHelper(0x2738, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_viewParameters()
	{
		CString result;
		InvokeHelper(0x2739, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void cancelNavigate()
	{
		InvokeHelper(0x273a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void showPopup(long lPopupIndex, LPCTSTR bstrParameters)
	{
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x273b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lPopupIndex, bstrParameters);
	}
	void addToBasket(LPCTSTR bstrViewType, LPCTSTR bstrViewIDs)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x273c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrViewType, bstrViewIDs);
	}
	CString get_basketTitle()
	{
		CString result;
		InvokeHelper(0x273d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void play(LPCTSTR bstrLibraryLocationType, LPCTSTR bstrLibraryLocationIDs)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x273e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrLibraryLocationType, bstrLibraryLocationIDs);
	}
	void download(LPCTSTR bstrViewType, LPCTSTR bstrViewIDs)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x273f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrViewType, bstrViewIDs);
	}
	void buy(LPCTSTR bstrViewType, LPCTSTR bstrViewIDs)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x2740, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrViewType, bstrViewIDs);
	}
	void saveCurrentViewToLibrary(LPCTSTR bstrFriendlyListType, BOOL fDynamic)
	{
		static BYTE parms[] = VTS_BSTR VTS_BOOL;
		InvokeHelper(0x2741, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrFriendlyListType, fDynamic);
	}
	void authenticate(long lAuthenticationIndex)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x2742, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lAuthenticationIndex);
	}
	void sendMessage(LPCTSTR bstrMsg, LPCTSTR bstrParam)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x2743, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrMsg, bstrParam);
	}
	void put_OnSendMessageComplete(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x2744, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void put_ignoreIEHistory(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x2745, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_pluginRunning()
	{
		BOOL result;
		InvokeHelper(0x2746, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_templateBeingDisplayedInLocalLibrary()
	{
		BOOL result;
		InvokeHelper(0x2747, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_OnChangeViewError(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x2748, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void put_OnChangeViewOnlineListError(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x2749, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IWMPDiscoExternal 属性
public:

};
