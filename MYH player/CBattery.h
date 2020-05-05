// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CBattery 包装器类

class CBattery : public COleDispatchDriver
{
public:
	CBattery() {} // 调用 COleDispatchDriver 默认构造函数
	CBattery(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBattery(const CBattery& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IBattery 方法
public:
	long get_presetCount()
	{
		long result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_preset(long nIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, nIndex);
		return result;
	}

	// IBattery 属性
public:

};
