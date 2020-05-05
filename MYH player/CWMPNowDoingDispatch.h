// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPNowDoingDispatch 包装器类

class CWMPNowDoingDispatch : public COleDispatchDriver
{
public:
	CWMPNowDoingDispatch() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPNowDoingDispatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPNowDoingDispatch(const CWMPNowDoingDispatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPNowDoingDispatch 方法
public:
	void hideBasket()
	{
		InvokeHelper(0xc96, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void burnNavigateToStatus()
	{
		InvokeHelper(0xc8b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void syncNavigateToStatus()
	{
		InvokeHelper(0xc94, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long get_DPI()
	{
		long result;
		InvokeHelper(0xc97, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_mode()
	{
		CString result;
		InvokeHelper(0xc80, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_burn_selectedDrive(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xc86, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_burn_selectedDrive()
	{
		long result;
		InvokeHelper(0xc86, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_sync_selectedDevice()
	{
		long result;
		InvokeHelper(0xc90, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_sync_selectedDevice(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xc90, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_burn_numDiscsSpanned()
	{
		long result;
		InvokeHelper(0xc88, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_editPlaylist()
	{
		LPDISPATCH result;
		InvokeHelper(0xc99, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_basketPlaylistName()
	{
		CString result;
		InvokeHelper(0xc9b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_isHighContrastMode()
	{
		BOOL result;
		InvokeHelper(0xc9c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_allowRating()
	{
		BOOL result;
		InvokeHelper(0xc9d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_burn_mediaType()
	{
		CString result;
		InvokeHelper(0xc81, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_burn_contentType()
	{
		CString result;
		InvokeHelper(0xc82, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_burn_freeSpace()
	{
		long result;
		InvokeHelper(0xc83, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_burn_totalSpace()
	{
		long result;
		InvokeHelper(0xc84, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_burn_driveName()
	{
		CString result;
		InvokeHelper(0xc85, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_burn_numDevices()
	{
		long result;
		InvokeHelper(0xc87, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_burn_spaceToUse()
	{
		long result;
		InvokeHelper(0xc89, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_burn_percentComplete()
	{
		long result;
		InvokeHelper(0xc8a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_sync_spaceToUse()
	{
		long result;
		InvokeHelper(0xc8c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_sync_spaceUsed()
	{
		long result;
		InvokeHelper(0xc8d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_sync_totalSpace()
	{
		long result;
		InvokeHelper(0xc8e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_sync_deviceName()
	{
		CString result;
		InvokeHelper(0xc8f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_sync_numDevices()
	{
		long result;
		InvokeHelper(0xc91, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_sync_oemName()
	{
		CString result;
		InvokeHelper(0xc92, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_sync_percentComplete()
	{
		long result;
		InvokeHelper(0xc93, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void logData(LPCTSTR ID, LPCTSTR data)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0xc98, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ID, data);
	}
	CString formatTime(long value)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xc9a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, value);
		return result;
	}

	// IWMPNowDoingDispatch 属性
public:

};
