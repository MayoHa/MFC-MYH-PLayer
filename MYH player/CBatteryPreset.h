// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CBatteryPreset ��װ����

class CBatteryPreset : public COleDispatchDriver
{
public:
	CBatteryPreset() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CBatteryPreset(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBatteryPreset(const CBatteryPreset& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IBatteryPreset ����
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

	// IBatteryPreset ����
public:

};
