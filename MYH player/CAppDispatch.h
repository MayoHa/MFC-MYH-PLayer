// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CAppDispatch 包装器类

class CAppDispatch : public COleDispatchDriver
{
public:
	CAppDispatch() {} // 调用 COleDispatchDriver 默认构造函数
	CAppDispatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAppDispatch(const CAppDispatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IAppDispatch 方法
public:
	BOOL get_titlebarVisible()
	{
		BOOL result;
		InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_titlebarVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_titlebarAutoHide()
	{
		BOOL result;
		InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_titlebarAutoHide(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_currentTask()
	{
		CString result;
		InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_currentTask(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_libraryBasketMode()
	{
		long result;
		InvokeHelper(0x91, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_libraryBasketMode(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x91, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_libraryBasketWidth()
	{
		long result;
		InvokeHelper(0x92, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_breadcrumbItemCount()
	{
		long result;
		InvokeHelper(0x93, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_breadcrumbItemName(long lIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, lIndex);
		return result;
	}
	BOOL get_breadcrumbItemHasMenu(long lIndex)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms, lIndex);
		return result;
	}
	void breadcrumbItemClick(long lIndex)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x96, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lIndex);
	}
	BOOL get_settingsVisible()
	{
		BOOL result;
		InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_settingsVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_playlistVisible()
	{
		BOOL result;
		InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_playlistVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void gotoSkinMode()
	{
		InvokeHelper(0x69, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void gotoPlayerMode()
	{
		InvokeHelper(0x8f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void gotoLibraryMode(long lButton)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x90, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lButton);
	}
	void navigatePrevious()
	{
		InvokeHelper(0x7d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void navigateNext()
	{
		InvokeHelper(0x7e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void goFullScreen()
	{
		InvokeHelper(0x8e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_fullScreenEnabled()
	{
		BOOL result;
		InvokeHelper(0x8d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_serviceLoginVisible()
	{
		BOOL result;
		InvokeHelper(0x84, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_serviceLoginSignedIn()
	{
		BOOL result;
		InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void serviceLogin()
	{
		InvokeHelper(0x86, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void serviceLogout()
	{
		InvokeHelper(0x87, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	VARIANT get_serviceGetInfo(LPCTSTR bstrItem)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x8c, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, bstrItem);
		return result;
	}
	BOOL get_navigatePreviousEnabled()
	{
		BOOL result;
		InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_navigateNextEnabled()
	{
		BOOL result;
		InvokeHelper(0x7c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void navigateToAddress(LPCTSTR address)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x82, DISPATCH_METHOD, VT_EMPTY, NULL, parms, address);
	}
	BOOL get_glassEnabled()
	{
		BOOL result;
		InvokeHelper(0x83, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_inVistaPlus()
	{
		BOOL result;
		InvokeHelper(0x88, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void adjustLeft(long nDistance)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x6a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nDistance);
	}
	BOOL get_taskbarVisible()
	{
		BOOL result;
		InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_taskbarVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_DPI()
	{
		long result;
		InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_previousEnabled()
	{
		BOOL result;
		InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_playLibraryItemEnabled()
	{
		BOOL result;
		InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void previous()
	{
		InvokeHelper(0x73, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_titlebarCurrentlyVisible()
	{
		BOOL result;
		InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_menubarCurrentlyVisible()
	{
		BOOL result;
		InvokeHelper(0x89, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_bgPluginRunning()
	{
		BOOL result;
		InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void configurePlugins(long nType)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x6e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nType);
	}
	CString getTimeString(double dTime)
	{
		CString result;
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x6f, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, dTime);
		return result;
	}
	BOOL get_maximized()
	{
		BOOL result;
		InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_top()
	{
		long result;
		InvokeHelper(0x75, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_top(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_left()
	{
		long result;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_left(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_width()
	{
		long result;
		InvokeHelper(0x77, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_width(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x77, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_height()
	{
		long result;
		InvokeHelper(0x78, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_height(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x78, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void setWindowPos(long lTop, long lLeft, long lWidth, long lHeight)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x79, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lTop, lLeft, lWidth, lHeight);
	}
	void logData(LPCTSTR ID, LPCTSTR data)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x7a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ID, data);
	}
	CString get_powerPersonality()
	{
		CString result;
		InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void navigateNamespace(LPCTSTR address)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x80, DISPATCH_METHOD, VT_EMPTY, NULL, parms, address);
	}
	CString get_exclusiveService()
	{
		CString result;
		InvokeHelper(0x81, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_windowText(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x8a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_resourceIdForDpi(long iResourceId)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x97, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, iResourceId);
		return result;
	}

	// IAppDispatch 属性
public:

};
