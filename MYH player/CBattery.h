// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CBattery ��װ����

class CBattery : public COleDispatchDriver
{
public:
	CBattery() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CBattery(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBattery(const CBattery& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IBattery ����
public:
	long get_presetCount()
	{
		long result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_preset(long nIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, nIndex);
		return result;
	}

	// IBattery ����
public:

};
