// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CTaskCntrCtrl ��װ����

class CTaskCntrCtrl : public COleDispatchDriver
{
public:
	CTaskCntrCtrl() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CTaskCntrCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTaskCntrCtrl(const CTaskCntrCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// ITaskCntrCtrl ����
public:
	LPUNKNOWN get_CurrentContainer()
	{
		LPUNKNOWN result;
		InvokeHelper(0x60020000, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	void put_CurrentContainer(LPUNKNOWN newValue)
	{
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x60020000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Activate()
	{
		InvokeHelper(0x60020002, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// ITaskCntrCtrl ����
public:

};
