// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPSubscriptionServicePlayMedia ��װ����

class CWMPSubscriptionServicePlayMedia : public COleDispatchDriver
{
public:
	CWMPSubscriptionServicePlayMedia() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPSubscriptionServicePlayMedia(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPSubscriptionServicePlayMedia(const CWMPSubscriptionServicePlayMedia& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPSubscriptionServicePlayMedia ����
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
	CString get_appColorMedium()
	{
		CString result;
		InvokeHelper(0x271d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorDark()
	{
		CString result;
		InvokeHelper(0x271e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorButtonHighlight()
	{
		CString result;
		InvokeHelper(0x271f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorButtonShadow()
	{
		CString result;
		InvokeHelper(0x2720, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_appColorButtonHoverFace()
	{
		CString result;
		InvokeHelper(0x2721, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void NavigateTaskPaneURL(LPCTSTR bstrKeyName, LPCTSTR bstrTaskPane, LPCTSTR bstrParams)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x272a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrKeyName, bstrTaskPane, bstrParams);
	}
	void put_SelectedTaskPane(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x272b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SelectedTaskPane()
	{
		CString result;
		InvokeHelper(0x272b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void playMedia(LPCTSTR bstrURL)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x2714, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrURL);
	}

	// IWMPSubscriptionServicePlayMedia ����
public:

};
