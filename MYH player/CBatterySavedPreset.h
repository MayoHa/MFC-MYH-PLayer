// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CBatterySavedPreset ��װ����

class CBatterySavedPreset : public COleDispatchDriver
{
public:
	CBatterySavedPreset() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CBatterySavedPreset(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBatterySavedPreset(const CBatterySavedPreset& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IBatterySavedPreset ����
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

	// IBatterySavedPreset ����
public:

};
