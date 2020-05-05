// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPSubscriptionServiceLimited 包装器类

class CWMPSubscriptionServiceLimited : public COleDispatchDriver
{
public:
	CWMPSubscriptionServiceLimited() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPSubscriptionServiceLimited(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPSubscriptionServiceLimited(const CWMPSubscriptionServiceLimited& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPSubscriptionServiceLimited 方法
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

	// IWMPSubscriptionServiceLimited 属性
public:

};
