// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CBatteryPreset 包装器类

class CBatteryPreset : public COleDispatchDriver
{
public:
	CBatteryPreset() {} // 调用 COleDispatchDriver 默认构造函数
	CBatteryPreset(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBatteryPreset(const CBatteryPreset& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IBatteryPreset 方法
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

	// IBatteryPreset 属性
public:

};
