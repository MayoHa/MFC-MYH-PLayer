// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPPlaylistCtrlColumn 包装器类

class CWMPPlaylistCtrlColumn : public COleDispatchDriver
{
public:
	CWMPPlaylistCtrlColumn() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPPlaylistCtrlColumn(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlaylistCtrlColumn(const CWMPPlaylistCtrlColumn& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPPlaylistCtrlColumn 方法
public:
	CString get_columnName()
	{
		CString result;
		InvokeHelper(0x1626, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_columnName(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1626, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_columnID()
	{
		CString result;
		InvokeHelper(0x1627, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_columnID(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1627, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_columnResizeMode()
	{
		CString result;
		InvokeHelper(0x1628, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_columnResizeMode(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1628, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_columnWidth()
	{
		long result;
		InvokeHelper(0x1629, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_columnWidth(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1629, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IWMPPlaylistCtrlColumn 属性
public:

};
