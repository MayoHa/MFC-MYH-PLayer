// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPBaseExternal ��װ����

class CWMPBaseExternal : public COleDispatchDriver
{
public:
	CWMPBaseExternal() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPBaseExternal(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPBaseExternal(const CWMPBaseExternal& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPBaseExternal ����
public:
	CString get_version()
	{
		CString result;
		InvokeHelper(0x2715, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorLight()
	{
		CString result;
		InvokeHelper(0x271c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnColorChange(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x2722, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IWMPBaseExternal ����
public:

};
