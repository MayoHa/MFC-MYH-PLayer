// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPPluginUIHost ��װ����

class CWMPPluginUIHost : public COleDispatchDriver
{
public:
	CWMPPluginUIHost() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPPluginUIHost(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPluginUIHost(const CWMPPluginUIHost& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPPluginUIHost ����
public:
	CString get_backgroundColor()
	{
		CString result;
		InvokeHelper(0x1839, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_backgroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1839, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_objectID()
	{
		CString result;
		InvokeHelper(0x183a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_objectID(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x183a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT getProperty(LPCTSTR bstrName)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x183b, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, bstrName);
		return result;
	}
	void setProperty(LPCTSTR bstrName, VARIANT& newVal)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT;
		InvokeHelper(0x183c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrName, &newVal);
	}

	// IWMPPluginUIHost ����
public:

};
