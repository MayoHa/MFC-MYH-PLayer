// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPAutoMenuCtrl ��װ����

class CWMPAutoMenuCtrl : public COleDispatchDriver
{
public:
	CWMPAutoMenuCtrl() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPAutoMenuCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPAutoMenuCtrl(const CWMPAutoMenuCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPAutoMenuCtrl ����
public:
	void show(LPCTSTR newVal)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1965, DISPATCH_METHOD, VT_EMPTY, NULL, parms, newVal);
	}

	// IWMPAutoMenuCtrl ����
public:

};
