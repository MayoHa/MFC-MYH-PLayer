// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPButtonCtrlEvents ��װ����

class CWMPButtonCtrlEvents : public COleDispatchDriver
{
public:
	CWMPButtonCtrlEvents() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPButtonCtrlEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPButtonCtrlEvents(const CWMPButtonCtrlEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPButtonCtrlEvents ����
public:
	STDMETHOD(onclick)()
	{
		HRESULT result;
		InvokeHelper(0x1400, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// IWMPButtonCtrlEvents ����
public:

};
