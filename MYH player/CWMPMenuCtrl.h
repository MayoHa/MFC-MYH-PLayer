// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPMenuCtrl ��װ����

class CWMPMenuCtrl : public COleDispatchDriver
{
public:
	CWMPMenuCtrl() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPMenuCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPMenuCtrl(const CWMPMenuCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPMenuCtrl ����
public:
	void deleteAllItems()
	{
		InvokeHelper(0x189d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void appendItem(long nID, LPCTSTR bstrItem)
	{
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x189e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nID, bstrItem);
	}
	void appendSeparator()
	{
		InvokeHelper(0x189f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void enableItem(long nID, BOOL newVal)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL;
		InvokeHelper(0x18a0, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nID, newVal);
	}
	void checkItem(long nID, BOOL newVal)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL;
		InvokeHelper(0x18a1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nID, newVal);
	}
	void checkRadioItem(long nID, BOOL newVal)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL;
		InvokeHelper(0x18a2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nID, newVal);
	}
	long get_showFlags()
	{
		long result;
		InvokeHelper(0x18a3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_showFlags(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x18a3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long show()
	{
		long result;
		InvokeHelper(0x18a4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void showEx(long nID)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x18a5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nID);
	}

	// IWMPMenuCtrl ����
public:

};
