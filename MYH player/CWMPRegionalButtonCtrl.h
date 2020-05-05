// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPRegionalButtonCtrl 包装器类

class CWMPRegionalButtonCtrl : public COleDispatchDriver
{
public:
	CWMPRegionalButtonCtrl() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPRegionalButtonCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPRegionalButtonCtrl(const CWMPRegionalButtonCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPRegionalButtonCtrl 方法
public:
	CString get_image()
	{
		CString result;
		InvokeHelper(0x14b4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_image(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x14b4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_hoverImage()
	{
		CString result;
		InvokeHelper(0x14b5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_hoverImage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x14b5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_downImage()
	{
		CString result;
		InvokeHelper(0x14b6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_downImage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x14b6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_hoverDownImage()
	{
		CString result;
		InvokeHelper(0x14b7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_hoverDownImage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x14b7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_hoverHoverImage()
	{
		CString result;
		InvokeHelper(0x14c5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_hoverHoverImage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x14c5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_disabledImage()
	{
		CString result;
		InvokeHelper(0x14b8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_disabledImage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x14b8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_mappingImage()
	{
		CString result;
		InvokeHelper(0x14b9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_mappingImage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x14b9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_transparencyColor()
	{
		CString result;
		InvokeHelper(0x14ba, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_transparencyColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x14ba, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_cursor()
	{
		CString result;
		InvokeHelper(0x14bc, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_cursor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x14bc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_showBackground()
	{
		BOOL result;
		InvokeHelper(0x14bd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_showBackground(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x14bd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_radio()
	{
		BOOL result;
		InvokeHelper(0x14be, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_radio(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x14be, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_buttonCount()
	{
		long result;
		InvokeHelper(0x14bf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH createButton()
	{
		LPDISPATCH result;
		InvokeHelper(0x14c0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH getButton(long nButton)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x14c1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, nButton);
		return result;
	}
	void Click(long nButton)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x14c2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nButton);
	}
	float get_hueShift()
	{
		float result;
		InvokeHelper(0x14c3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_hueShift(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x14c3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_saturation()
	{
		float result;
		InvokeHelper(0x14c4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_saturation(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x14c4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IWMPRegionalButtonCtrl 属性
public:

};
