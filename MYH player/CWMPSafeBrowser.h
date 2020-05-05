// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPSafeBrowser ��װ����

class CWMPSafeBrowser : public COleDispatchDriver
{
public:
	CWMPSafeBrowser() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPSafeBrowser(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPSafeBrowser(const CWMPSafeBrowser& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPSafeBrowser ����
public:
	CString get_URL()
	{
		CString result;
		InvokeHelper(0x20d0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_URL(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x20d0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_status()
	{
		long result;
		InvokeHelper(0x20d1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_pendingDownloads()
	{
		long result;
		InvokeHelper(0x20d2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void showSAMIText(LPCTSTR samiText)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x20d3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, samiText);
	}
	void showLyrics(LPCTSTR lyrics)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x20d4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lyrics);
	}
	void loadSpecialPage(LPCTSTR pageName)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x20d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pageName);
	}
	void goBack()
	{
		InvokeHelper(0x20d6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void goForward()
	{
		InvokeHelper(0x20d7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void stop()
	{
		InvokeHelper(0x20d8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void refresh()
	{
		InvokeHelper(0x20d9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get_baseURL()
	{
		CString result;
		InvokeHelper(0x20da, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_fullURL()
	{
		CString result;
		InvokeHelper(0x20de, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_secureLock()
	{
		long result;
		InvokeHelper(0x20db, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_busy()
	{
		BOOL result;
		InvokeHelper(0x20dc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void showCert()
	{
		InvokeHelper(0x20dd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPSafeBrowser ����
public:

};
