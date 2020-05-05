// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPListBoxCtrl 包装器类

class CWMPListBoxCtrl : public COleDispatchDriver
{
public:
	CWMPListBoxCtrl() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPListBoxCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPListBoxCtrl(const CWMPListBoxCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPListBoxCtrl 方法
public:
	long get_selectedItem()
	{
		long result;
		InvokeHelper(0x17dc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_selectedItem(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x17dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_sorted()
	{
		BOOL result;
		InvokeHelper(0x17d4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_sorted(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x17d4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_multiselect()
	{
		BOOL result;
		InvokeHelper(0x17d5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_multiselect(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x17d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_readOnly()
	{
		BOOL result;
		InvokeHelper(0x17d6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_readOnly(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x17d6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_foregroundColor()
	{
		CString result;
		InvokeHelper(0x17d7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_foregroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x17d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_backgroundColor()
	{
		CString result;
		InvokeHelper(0x17d8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_backgroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x17d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_fontSize()
	{
		long result;
		InvokeHelper(0x17d9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_fontSize(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x17d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_fontStyle()
	{
		CString result;
		InvokeHelper(0x17da, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_fontStyle(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x17da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_fontFace()
	{
		CString result;
		InvokeHelper(0x17db, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_fontFace(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x17db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_itemCount()
	{
		long result;
		InvokeHelper(0x17dd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_firstVisibleItem()
	{
		long result;
		InvokeHelper(0x17de, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_firstVisibleItem(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x17de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void put_popUp(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x17e8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_focusItem()
	{
		long result;
		InvokeHelper(0x17e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_focusItem(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x17e9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_border()
	{
		BOOL result;
		InvokeHelper(0x17ed, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_border(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x17ed, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString getItem(long nPos)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x17df, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, nPos);
		return result;
	}
	void insertItem(long nPos, LPCTSTR newVal)
	{
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x17e0, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nPos, newVal);
	}
	void appendItem(LPCTSTR newVal)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x17e1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, newVal);
	}
	void replaceItem(long nPos, LPCTSTR newVal)
	{
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x17e2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nPos, newVal);
	}
	void deleteItem(long nPos)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x17e3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nPos);
	}
	void deleteAll()
	{
		InvokeHelper(0x17e4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long findItem(long nStartIndex, LPCTSTR newVal)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x17e5, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nStartIndex, newVal);
		return result;
	}
	long getNextSelectedItem(long nStartIndex)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x17e6, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nStartIndex);
		return result;
	}
	void setSelectedState(long nPos, BOOL vbSelected)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL;
		InvokeHelper(0x17ea, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nPos, vbSelected);
	}
	void show()
	{
		InvokeHelper(0x17eb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void dismiss()
	{
		InvokeHelper(0x17ec, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPListBoxCtrl 属性
public:

};
