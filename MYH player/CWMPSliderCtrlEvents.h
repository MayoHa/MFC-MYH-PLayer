// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPSliderCtrlEvents ��װ����

class CWMPSliderCtrlEvents : public COleDispatchDriver
{
public:
	CWMPSliderCtrlEvents() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPSliderCtrlEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPSliderCtrlEvents(const CWMPSliderCtrlEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPSliderCtrlEvents ����
public:
	STDMETHOD(ondragbegin)()
	{
		HRESULT result;
		InvokeHelper(0x1536, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(ondragend)()
	{
		HRESULT result;
		InvokeHelper(0x1537, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onpositionchange)()
	{
		HRESULT result;
		InvokeHelper(0x1538, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// IWMPSliderCtrlEvents ����
public:

};
