// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPSkinList ��װ����

class CWMPSkinList : public COleDispatchDriver
{
public:
	CWMPSkinList() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPSkinList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPSkinList(const CWMPSkinList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPSkinList ����
public:
	void updateBasketColumns()
	{
		InvokeHelper(0x17a2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void highContrastChange()
	{
		InvokeHelper(0x17a3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPSkinList ����
public:

};
