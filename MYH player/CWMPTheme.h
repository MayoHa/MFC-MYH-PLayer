// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPTheme 包装器类

class CWMPTheme : public COleDispatchDriver
{
public:
	CWMPTheme() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPTheme(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPTheme(const CWMPTheme& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPTheme 方法
public:
	CString get_title()
	{
		CString result;
		InvokeHelper(0x9c4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	float get_version()
	{
		float result;
		InvokeHelper(0x9c5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	CString get_authorVersion()
	{
		CString result;
		InvokeHelper(0x9c6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_author()
	{
		CString result;
		InvokeHelper(0x9c7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_copyright()
	{
		CString result;
		InvokeHelper(0x9c8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_currentViewID()
	{
		CString result;
		InvokeHelper(0x9c9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_currentViewID(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x9c9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void showErrorDialog()
	{
		InvokeHelper(0x9ca, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void logString(LPCTSTR stringVal)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x9cb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, stringVal);
	}
	void openView(LPCTSTR viewID)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x9cc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, viewID);
	}
	LPDISPATCH openViewRelative(LPCTSTR viewID, long x, long y)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0x9d3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, viewID, x, y);
		return result;
	}
	void closeView(LPCTSTR viewID)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x9cd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, viewID);
	}
	CString openDialog(LPCTSTR dialogType, LPCTSTR parameters)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x9ce, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, dialogType, parameters);
		return result;
	}
	CString loadString(LPCTSTR bstrString)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x9cf, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, bstrString);
		return result;
	}
	CString loadPreference(LPCTSTR bstrName)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x9d0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, bstrName);
		return result;
	}
	void savePreference(LPCTSTR bstrName, LPCTSTR bstrValue)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x9d1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrName, bstrValue);
	}
	void playSound(LPCTSTR bstrFilename)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x9d2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrFilename);
	}
	LPDISPATCH openViewRelativeInternal(LPCTSTR viewID, long nIndex, long x, long y, long nWidth, long nHeight, LPCTSTR bstrHorizontalAlignment, LPCTSTR bstrVerticalAlignment)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x9d4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, viewID, nIndex, x, y, nWidth, nHeight, bstrHorizontalAlignment, bstrVerticalAlignment);
		return result;
	}
	void setViewPosition(LPCTSTR viewID, long nIndex, long x, long y, long nWidth, long nHeight, LPCTSTR bstrHorizontalAlignment, LPCTSTR bstrVerticalAlignment)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x9d6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, viewID, nIndex, x, y, nWidth, nHeight, bstrHorizontalAlignment, bstrVerticalAlignment);
	}

	// IWMPTheme 属性
public:

};
