// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPPlaylistCtrlColumn ��װ����

class CWMPPlaylistCtrlColumn : public COleDispatchDriver
{
public:
	CWMPPlaylistCtrlColumn() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPPlaylistCtrlColumn(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlaylistCtrlColumn(const CWMPPlaylistCtrlColumn& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPPlaylistCtrlColumn ����
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

	// IWMPPlaylistCtrlColumn ����
public:

};
