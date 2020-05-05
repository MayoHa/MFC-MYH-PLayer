// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPBrandDispatch 包装器类

class CWMPBrandDispatch : public COleDispatchDriver
{
public:
	CWMPBrandDispatch() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPBrandDispatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPBrandDispatch(const CWMPBrandDispatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPBrandDispatch 方法
public:
	CString get_fullServiceName()
	{
		CString result;
		InvokeHelper(0xbe0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_friendlyName()
	{
		CString result;
		InvokeHelper(0xbb8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_guideButtonText()
	{
		CString result;
		InvokeHelper(0xbb9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_guideButtonTip()
	{
		CString result;
		InvokeHelper(0xbba, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_guideMenuText()
	{
		CString result;
		InvokeHelper(0xbbb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_guideAccText()
	{
		CString result;
		InvokeHelper(0xbbc, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_task1ButtonText()
	{
		CString result;
		InvokeHelper(0xbbd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_task1ButtonTip()
	{
		CString result;
		InvokeHelper(0xbbe, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_task1MenuText()
	{
		CString result;
		InvokeHelper(0xbbf, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_task1AccText()
	{
		CString result;
		InvokeHelper(0xbc0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_guideUrl()
	{
		CString result;
		InvokeHelper(0xbc9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_task1Url()
	{
		CString result;
		InvokeHelper(0xbca, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_imageLargeUrl()
	{
		CString result;
		InvokeHelper(0xbcd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_imageSmallUrl()
	{
		CString result;
		InvokeHelper(0xbce, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_imageMenuUrl()
	{
		CString result;
		InvokeHelper(0xbcf, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_infoCenterUrl()
	{
		CString result;
		InvokeHelper(0xbd0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_albumInfoUrl()
	{
		CString result;
		InvokeHelper(0xbd1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_buyCDUrl()
	{
		CString result;
		InvokeHelper(0xbd2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_htmlViewUrl()
	{
		CString result;
		InvokeHelper(0xbd3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_navigateUrl()
	{
		CString result;
		InvokeHelper(0xbd4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_cookieUrl()
	{
		CString result;
		InvokeHelper(0xbd5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_downloadStatusUrl()
	{
		CString result;
		InvokeHelper(0xbd6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_colorPlayer()
	{
		CString result;
		InvokeHelper(0xbd7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_colorPlayerText()
	{
		CString result;
		InvokeHelper(0xbd8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_navigateDispid()
	{
		long result;
		InvokeHelper(0xbdb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_navigateParams()
	{
		CString result;
		InvokeHelper(0xbdc, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_navigatePane()
	{
		CString result;
		InvokeHelper(0xbdd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_selectedPane()
	{
		CString result;
		InvokeHelper(0xbde, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_selectedPane(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xbde, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void setNavigateProps(LPCTSTR bstrPane, long lDispid, LPCTSTR bstrParams)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_BSTR;
		InvokeHelper(0xbe1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrPane, lDispid, bstrParams);
	}
	CString getMediaParams(LPUNKNOWN pObject, LPCTSTR bstrURL)
	{
		CString result;
		static BYTE parms[] = VTS_UNKNOWN VTS_BSTR;
		InvokeHelper(0xbe2, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, pObject, bstrURL);
		return result;
	}
	void put_selectedTask(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xbdf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_contentPartnerSelected()
	{
		BOOL result;
		InvokeHelper(0xbe3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}

	// IWMPBrandDispatch 属性
public:

};
