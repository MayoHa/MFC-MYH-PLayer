// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPEffectsCtrl 包装器类

class CWMPEffectsCtrl : public COleDispatchDriver
{
public:
	CWMPEffectsCtrl() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPEffectsCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPEffectsCtrl(const CWMPEffectsCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPEffectsCtrl 方法
public:
	BOOL get_windowed()
	{
		BOOL result;
		InvokeHelper(0x157c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_windowed(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x157c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_allowAll()
	{
		BOOL result;
		InvokeHelper(0x157d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_allowAll(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x157d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void put_currentEffectType(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1583, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_currentEffectType()
	{
		CString result;
		InvokeHelper(0x1583, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_currentEffectTitle()
	{
		CString result;
		InvokeHelper(0x1582, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void next()
	{
		InvokeHelper(0x157e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void previous()
	{
		InvokeHelper(0x157f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void settings()
	{
		InvokeHelper(0x1580, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_currentEffect()
	{
		LPDISPATCH result;
		InvokeHelper(0x1581, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void put_currentEffect(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x1581, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void nextEffect()
	{
		InvokeHelper(0x1585, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void previousEffect()
	{
		InvokeHelper(0x1586, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void nextPreset()
	{
		InvokeHelper(0x1587, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void previousPreset()
	{
		InvokeHelper(0x1588, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long get_currentPreset()
	{
		long result;
		InvokeHelper(0x1589, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_currentPreset(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1589, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_currentPresetTitle()
	{
		CString result;
		InvokeHelper(0x158a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_currentEffectPresetCount()
	{
		long result;
		InvokeHelper(0x158b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_fullScreen()
	{
		BOOL result;
		InvokeHelper(0x158c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_fullScreen(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x158c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_effectCanGoFullScreen()
	{
		BOOL result;
		InvokeHelper(0x158d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_effectHasPropertyPage()
	{
		BOOL result;
		InvokeHelper(0x158e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_effectCount()
	{
		long result;
		InvokeHelper(0x1590, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_effectTitle(long index)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1591, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, index);
		return result;
	}
	CString get_effectType(long index)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1592, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, index);
		return result;
	}

	// IWMPEffectsCtrl 属性
public:

};
