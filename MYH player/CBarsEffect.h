// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CBarsEffect 包装器类

class CBarsEffect : public COleDispatchDriver
{
public:
	CBarsEffect() {} // 调用 COleDispatchDriver 默认构造函数
	CBarsEffect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBarsEffect(const CBarsEffect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IBarsEffect 方法
public:
	long get_displayMode()
	{
		long result;
		InvokeHelper(0x1f40, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_displayMode(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1f40, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_showPeaks()
	{
		BOOL result;
		InvokeHelper(0x1f41, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_showPeaks(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x1f41, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_peakHangTime()
	{
		long result;
		InvokeHelper(0x1f42, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_peakHangTime(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1f42, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_peakFallbackAcceleration()
	{
		float result;
		InvokeHelper(0x1f43, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_peakFallbackAcceleration(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x1f43, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_peakFallbackSpeed()
	{
		float result;
		InvokeHelper(0x1f44, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_peakFallbackSpeed(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x1f44, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_levelFallbackAcceleration()
	{
		float result;
		InvokeHelper(0x1f45, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_levelFallbackAcceleration(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x1f45, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_levelFallbackSpeed()
	{
		float result;
		InvokeHelper(0x1f46, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_levelFallbackSpeed(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x1f46, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_backgroundColor()
	{
		CString result;
		InvokeHelper(0x1f47, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_backgroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1f47, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_levelColor()
	{
		CString result;
		InvokeHelper(0x1f48, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_levelColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1f48, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_peakColor()
	{
		CString result;
		InvokeHelper(0x1f49, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_peakColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1f49, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_horizontalSpacing()
	{
		long result;
		InvokeHelper(0x1f4a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_horizontalSpacing(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1f4a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_levelWidth()
	{
		long result;
		InvokeHelper(0x1f4c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_levelWidth(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1f4c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_levelScale()
	{
		float result;
		InvokeHelper(0x1f4d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_levelScale(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x1f4d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_fadeRate()
	{
		long result;
		InvokeHelper(0x1f4e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_fadeRate(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1f4e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_fadeMode()
	{
		long result;
		InvokeHelper(0x1f4f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_fadeMode(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1f4f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_transparent()
	{
		BOOL result;
		InvokeHelper(0x1f50, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_transparent(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x1f50, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IBarsEffect 属性
public:

};
