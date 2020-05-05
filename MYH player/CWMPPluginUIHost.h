// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPPluginUIHost 包装器类

class CWMPPluginUIHost : public COleDispatchDriver
{
public:
	CWMPPluginUIHost() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPPluginUIHost(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPluginUIHost(const CWMPPluginUIHost& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPPluginUIHost 方法
public:
	CString get_backgroundColor()
	{
		CString result;
		InvokeHelper(0x1839, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_backgroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1839, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_objectID()
	{
		CString result;
		InvokeHelper(0x183a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_objectID(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x183a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT getProperty(LPCTSTR bstrName)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x183b, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, bstrName);
		return result;
	}
	void setProperty(LPCTSTR bstrName, VARIANT& newVal)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT;
		InvokeHelper(0x183c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrName, &newVal);
	}

	// IWMPPluginUIHost 属性
public:

};
