// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPVideoSettingsCtrl 包装器类

class CWMPVideoSettingsCtrl : public COleDispatchDriver
{
public:
	CWMPVideoSettingsCtrl() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPVideoSettingsCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPVideoSettingsCtrl(const CWMPVideoSettingsCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPVideoSettingsCtrl 方法
public:
	long get_brightness()
	{
		long result;
		InvokeHelper(0x170c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_brightness(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x170c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_contrast()
	{
		long result;
		InvokeHelper(0x170d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_contrast(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x170d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_hue()
	{
		long result;
		InvokeHelper(0x170e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_hue(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x170e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_saturation()
	{
		long result;
		InvokeHelper(0x170f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_saturation(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x170f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void reset()
	{
		InvokeHelper(0x1710, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPVideoSettingsCtrl 属性
public:

};
