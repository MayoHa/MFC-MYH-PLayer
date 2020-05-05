// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPDVD 包装器类

class CWMPDVD : public COleDispatchDriver
{
public:
	CWMPDVD() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPDVD(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPDVD(const CWMPDVD& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPDVD 方法
public:
	BOOL get_isAvailable(LPCTSTR bstrItem)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms, bstrItem);
		return result;
	}
	CString get_domain()
	{
		CString result;
		InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void topMenu()
	{
		InvokeHelper(0x3eb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void titleMenu()
	{
		InvokeHelper(0x3ec, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void back()
	{
		InvokeHelper(0x3ed, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void resume()
	{
		InvokeHelper(0x3ee, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPDVD 属性
public:

};
