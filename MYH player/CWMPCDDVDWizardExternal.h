// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPCDDVDWizardExternal ��װ����

class CWMPCDDVDWizardExternal : public COleDispatchDriver
{
public:
	CWMPCDDVDWizardExternal() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPCDDVDWizardExternal(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCDDVDWizardExternal(const CWMPCDDVDWizardExternal& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPCDDVDWizardExternal ����
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
	void WriteNames(LPCTSTR bstrTOC, LPCTSTR bstrMetadata)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x2711, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrTOC, bstrMetadata);
	}
	void ReturnToMainTask()
	{
		InvokeHelper(0x2712, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void WriteNamesEx(long type, LPCTSTR bstrTypeId, LPCTSTR bstrMetadata, BOOL fRenameRegroupFiles)
	{
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR VTS_BOOL;
		InvokeHelper(0x2717, DISPATCH_METHOD, VT_EMPTY, NULL, parms, type, bstrTypeId, bstrMetadata, fRenameRegroupFiles);
	}
	CString GetMDQByRequestID(LPCTSTR bstrRequestID)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x2718, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, bstrRequestID);
		return result;
	}
	void EditMetadata()
	{
		InvokeHelper(0x271b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL IsMetadataAvailableForEdit()
	{
		BOOL result;
		InvokeHelper(0x271a, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void BuyCD(LPCTSTR bstrTitle, LPCTSTR bstrArtist, LPCTSTR bstrAlbum, LPCTSTR bstrUFID, LPCTSTR bstrWMID)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x2727, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrTitle, bstrArtist, bstrAlbum, bstrUFID, bstrWMID);
	}

	// IWMPCDDVDWizardExternal ����
public:

};
