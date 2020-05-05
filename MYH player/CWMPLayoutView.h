// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPLayoutView 包装器类

class CWMPLayoutView : public COleDispatchDriver
{
public:
	CWMPLayoutView() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPLayoutView(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPLayoutView(const CWMPLayoutView& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPLayoutView 方法
public:
	CString get_ID()
	{
		CString result;
		InvokeHelper(0x7d0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_elementType()
	{
		CString result;
		InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_left()
	{
		long result;
		InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_left(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7d2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_top()
	{
		long result;
		InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_top(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7d3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_right()
	{
		long result;
		InvokeHelper(0x7e6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_right(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7e6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_bottom()
	{
		long result;
		InvokeHelper(0x7e7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_bottom(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7e7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_width()
	{
		long result;
		InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_width(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_height()
	{
		long result;
		InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_height(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_zIndex()
	{
		long result;
		InvokeHelper(0x7d6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_zIndex(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_clippingImage()
	{
		CString result;
		InvokeHelper(0x7d7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_clippingImage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x7d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_clippingColor()
	{
		CString result;
		InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_clippingColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x7d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_visible()
	{
		BOOL result;
		InvokeHelper(0x7d9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_visible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x7d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_enabled()
	{
		BOOL result;
		InvokeHelper(0x7da, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_enabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x7da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_tabStop()
	{
		BOOL result;
		InvokeHelper(0x7db, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_tabStop(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x7db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_passThrough()
	{
		BOOL result;
		InvokeHelper(0x7dc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_passThrough(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x7dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_horizontalAlignment()
	{
		CString result;
		InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_horizontalAlignment(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x7dd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_verticalAlignment()
	{
		CString result;
		InvokeHelper(0x7de, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_verticalAlignment(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x7de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void moveTo(long newX, long newY, long moveTime)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x7df, DISPATCH_METHOD, VT_EMPTY, NULL, parms, newX, newY, moveTime);
	}
	void slideTo(long newX, long newY, long moveTime)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x7e5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, newX, newY, moveTime);
	}
	void moveSizeTo(long newX, long newY, long newWidth, long newHeight, long moveTime, BOOL fSlide)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BOOL;
		InvokeHelper(0x7ea, DISPATCH_METHOD, VT_EMPTY, NULL, parms, newX, newY, newWidth, newHeight, moveTime, fSlide);
	}
	long get_alphaBlend()
	{
		long result;
		InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_alphaBlend(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void alphaBlendTo(long newVal, long alphaTime)
	{
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x7e1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, newVal, alphaTime);
	}
	CString get_accName()
	{
		CString result;
		InvokeHelper(0x7e2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_accName(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x7e2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_accDescription()
	{
		CString result;
		InvokeHelper(0x7e3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_accDescription(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x7e3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_accKeyboardShortcut()
	{
		CString result;
		InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_accKeyboardShortcut(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x7e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_resizeImages()
	{
		BOOL result;
		InvokeHelper(0x7e8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_resizeImages(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x7e8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_nineGridMargins()
	{
		CString result;
		InvokeHelper(0x7e9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_nineGridMargins(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x7e9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_resizeOptimize()
	{
		CString result;
		InvokeHelper(0x7eb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_resizeOptimize(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x7eb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_rotation()
	{
		float result;
		InvokeHelper(0x7ec, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_rotation(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x7ec, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_transparencyColor()
	{
		CString result;
		InvokeHelper(0x8fc, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_transparencyColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x8fc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_backgroundColor()
	{
		CString result;
		InvokeHelper(0x8fd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_backgroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x8fd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_backgroundImage()
	{
		CString result;
		InvokeHelper(0x8fe, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_backgroundImage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x8fe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_backgroundTiled()
	{
		BOOL result;
		InvokeHelper(0x8ff, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_backgroundTiled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x8ff, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_backgroundImageHueShift()
	{
		float result;
		InvokeHelper(0x900, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_backgroundImageHueShift(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x900, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_backgroundImageSaturation()
	{
		float result;
		InvokeHelper(0x901, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_backgroundImageSaturation(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x901, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_resizeBackgroundImage()
	{
		BOOL result;
		InvokeHelper(0x902, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_resizeBackgroundImage(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x902, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_title()
	{
		CString result;
		InvokeHelper(0x903, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_title(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x903, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_category()
	{
		CString result;
		InvokeHelper(0x904, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_category(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x904, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_focusObjectID()
	{
		CString result;
		InvokeHelper(0x905, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_focusObjectID(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x905, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_titleBar()
	{
		BOOL result;
		InvokeHelper(0x907, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_resizable()
	{
		BOOL result;
		InvokeHelper(0x908, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_timerInterval()
	{
		long result;
		InvokeHelper(0x909, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_timerInterval(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x909, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_minWidth()
	{
		long result;
		InvokeHelper(0x90a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_minWidth(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x90a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_maxWidth()
	{
		long result;
		InvokeHelper(0x90b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_maxWidth(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x90b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_minHeight()
	{
		long result;
		InvokeHelper(0x90c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_minHeight(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x90c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_maxHeight()
	{
		long result;
		InvokeHelper(0x90d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_maxHeight(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x90d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void close()
	{
		InvokeHelper(0x90e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void minimize()
	{
		InvokeHelper(0x90f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void maximize()
	{
		InvokeHelper(0x910, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void restore()
	{
		InvokeHelper(0x911, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void size(LPCTSTR bstrDirection)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x912, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrDirection);
	}
	void returnToMediaCenter()
	{
		InvokeHelper(0x913, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void updateWindow()
	{
		InvokeHelper(0x914, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_maximized()
	{
		BOOL result;
		InvokeHelper(0x916, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_minimized()
	{
		BOOL result;
		InvokeHelper(0x917, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}

	// IWMPLayoutView 属性
public:

};
