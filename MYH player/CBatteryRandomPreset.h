// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CBatteryRandomPreset ��װ����

class CBatteryRandomPreset : public COleDispatchDriver
{
public:
	CBatteryRandomPreset() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CBatteryRandomPreset(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBatteryRandomPreset(const CBatteryRandomPreset& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IBatteryRandomPreset ����
public:
	CString get_title()
	{
		CString result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_title(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IBatteryRandomPreset ����
public:

};
