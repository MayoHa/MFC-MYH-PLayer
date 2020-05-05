// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CBatterySavedPreset 包装器类

class CBatterySavedPreset : public COleDispatchDriver
{
public:
	CBatterySavedPreset() {} // 调用 COleDispatchDriver 默认构造函数
	CBatterySavedPreset(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBatterySavedPreset(const CBatterySavedPreset& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IBatterySavedPreset 方法
public:
	CString get_title()
	{
		CString result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_title(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IBatterySavedPreset 属性
public:

};
