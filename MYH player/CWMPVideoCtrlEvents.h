// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPVideoCtrlEvents ��װ����

class CWMPVideoCtrlEvents : public COleDispatchDriver
{
public:
	CWMPVideoCtrlEvents() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPVideoCtrlEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPVideoCtrlEvents(const CWMPVideoCtrlEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPVideoCtrlEvents ����
public:
	STDMETHOD(onvideostart)()
	{
		HRESULT result;
		InvokeHelper(0x1658, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onvideoend)()
	{
		HRESULT result;
		InvokeHelper(0x1659, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// IWMPVideoCtrlEvents ����
public:

};
