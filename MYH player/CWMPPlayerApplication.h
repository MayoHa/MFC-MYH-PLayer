// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPPlayerApplication ��װ����

class CWMPPlayerApplication : public COleDispatchDriver
{
public:
	CWMPPlayerApplication() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPPlayerApplication(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlayerApplication(const CWMPPlayerApplication& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPPlayerApplication ����
public:
	void switchToPlayerApplication()
	{
		InvokeHelper(0x44d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void switchToControl()
	{
		InvokeHelper(0x44e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_playerDocked()
	{
		BOOL result;
		InvokeHelper(0x44f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_hasDisplay()
	{
		BOOL result;
		InvokeHelper(0x450, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}

	// IWMPPlayerApplication ����
public:

};
