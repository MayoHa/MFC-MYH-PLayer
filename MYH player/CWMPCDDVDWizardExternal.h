// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPCDDVDWizardExternal 包装器类

class CWMPCDDVDWizardExternal : public COleDispatchDriver
{
public:
	CWMPCDDVDWizardExternal() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPCDDVDWizardExternal(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCDDVDWizardExternal(const CWMPCDDVDWizardExternal& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPCDDVDWizardExternal 方法
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

	// IWMPCDDVDWizardExternal 属性
public:

};
