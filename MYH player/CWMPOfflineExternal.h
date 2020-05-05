// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPOfflineExternal 包装器类

class CWMPOfflineExternal : public COleDispatchDriver
{
public:
	CWMPOfflineExternal() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPOfflineExternal(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPOfflineExternal(const CWMPOfflineExternal& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPOfflineExternal 方法
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
	void forceOnline()
	{
		InvokeHelper(0x2729, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPOfflineExternal 属性
public:

};
