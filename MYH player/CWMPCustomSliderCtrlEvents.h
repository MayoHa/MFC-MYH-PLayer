// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPCustomSliderCtrlEvents ��װ����

class CWMPCustomSliderCtrlEvents : public COleDispatchDriver
{
public:
	CWMPCustomSliderCtrlEvents() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPCustomSliderCtrlEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCustomSliderCtrlEvents(const CWMPCustomSliderCtrlEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPCustomSliderCtrlEvents ����
public:
	STDMETHOD(ondragbegin)()
	{
		HRESULT result;
		InvokeHelper(0x139c, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(ondragend)()
	{
		HRESULT result;
		InvokeHelper(0x139d, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onpositionchange)()
	{
		HRESULT result;
		InvokeHelper(0x139e, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// IWMPCustomSliderCtrlEvents ����
public:

};
