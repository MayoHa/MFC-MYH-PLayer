// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPStringCollection ��װ����

class CWMPStringCollection : public COleDispatchDriver
{
public:
	CWMPStringCollection() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPStringCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPStringCollection(const CWMPStringCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPStringCollection ����
public:
	long get_count()
	{
		long result;
		InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString Item(long lIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x192, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, lIndex);
		return result;
	}

	// IWMPStringCollection ����
public:

};
