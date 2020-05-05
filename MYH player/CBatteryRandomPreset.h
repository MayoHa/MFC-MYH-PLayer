// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CBatteryRandomPreset 包装器类

class CBatteryRandomPreset : public COleDispatchDriver
{
public:
	CBatteryRandomPreset() {} // 调用 COleDispatchDriver 默认构造函数
	CBatteryRandomPreset(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBatteryRandomPreset(const CBatteryRandomPreset& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IBatteryRandomPreset 方法
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

	// IBatteryRandomPreset 属性
public:

};
