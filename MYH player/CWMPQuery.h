// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPQuery ��װ����

class CWMPQuery : public COleDispatchDriver
{
public:
	CWMPQuery() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPQuery(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPQuery(const CWMPQuery& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPQuery ����
public:
	void addCondition(LPCTSTR bstrAttribute, LPCTSTR bstrOperator, LPCTSTR bstrValue)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x547, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrAttribute, bstrOperator, bstrValue);
	}
	void beginNextGroup()
	{
		InvokeHelper(0x548, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPQuery ����
public:

};
