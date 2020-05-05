// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPDMRRenderingControlService 包装器类

class CWMPDMRRenderingControlService : public COleDispatchDriver
{
public:
	CWMPDMRRenderingControlService() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPDMRRenderingControlService(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPDMRRenderingControlService(const CWMPDMRRenderingControlService& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPDMRRenderingControlService 方法
public:
	CString get_LastChange()
	{
		CString result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_PresetNameList()
	{
		CString result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_mute()
	{
		BOOL result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	unsigned short get_volume()
	{
		unsigned short result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_UI2, (void*)&result, NULL);
		return result;
	}
	CString get_A_ARG_TYPE_Channel()
	{
		CString result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	unsigned long get_A_ARG_TYPE_InstanceID()
	{
		unsigned long result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	CString get_A_ARG_TYPE_PresetName()
	{
		CString result;
		InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void ListPresets(unsigned long ulInstanceID, BSTR * pbstrCurrentPresetList)
	{
		static BYTE parms[] = VTS_UI4 VTS_PBSTR;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, pbstrCurrentPresetList);
	}
	void SelectPreset(unsigned long ulInstanceID, LPCTSTR bstrPresetName)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, bstrPresetName);
	}
	void GetMute(unsigned long ulInstanceID, LPCTSTR bstrChannel, BOOL * pbCurrentMute)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR VTS_PBOOL;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, bstrChannel, pbCurrentMute);
	}
	void SetMute(unsigned long ulInstanceID, LPCTSTR bstrChannel, BOOL bDesiredMute)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR VTS_BOOL;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, bstrChannel, bDesiredMute);
	}
	void GetVolume(unsigned long ulInstanceID, LPCTSTR bstrChannel, unsigned short * puiCurrentVolume)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR VTS_PUI2;
		InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, bstrChannel, puiCurrentVolume);
	}
	void SetVolume(unsigned long ulInstanceID, LPCTSTR bstrChannel, unsigned short uiDesiredVolume)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR VTS_UI2;
		InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, bstrChannel, uiDesiredVolume);
	}

	// IWMPDMRRenderingControlService 属性
public:

};
