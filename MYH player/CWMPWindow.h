// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPWindow 包装器类

class CWMPWindow : public COleDispatchDriver
{
public:
	CWMPWindow() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPWindow(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPWindow(const CWMPWindow& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPWindow 方法
public:
	void setWindowPos(long x, long y, long height, long width)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xce4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, x, y, height, width);
	}
	long get_frameRate()
	{
		long result;
		InvokeHelper(0xce5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_frameRate(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xce5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_mouseX()
	{
		long result;
		InvokeHelper(0xce6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_mouseY()
	{
		long result;
		InvokeHelper(0xce7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_onsizing(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0xce8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void openViewAlwaysOnTop(LPCTSTR bstrViewID)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xce9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrViewID);
	}

	// IWMPWindow 属性
public:

};
