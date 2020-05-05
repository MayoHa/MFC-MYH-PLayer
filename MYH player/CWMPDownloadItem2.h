// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPDownloadItem2 包装器类

class CWMPDownloadItem2 : public COleDispatchDriver
{
public:
	CWMPDownloadItem2() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPDownloadItem2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPDownloadItem2(const CWMPDownloadItem2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPDownloadItem2 方法
public:
	CString get_sourceURL()
	{
		CString result;
		InvokeHelper(0x4e3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_size()
	{
		long result;
		InvokeHelper(0x4e4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_type()
	{
		CString result;
		InvokeHelper(0x4e5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_progress()
	{
		long result;
		InvokeHelper(0x4e6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_downloadState()
	{
		long result;
		InvokeHelper(0x4e7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void pause()
	{
		InvokeHelper(0x4e8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void resume()
	{
		InvokeHelper(0x4e9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void cancel()
	{
		InvokeHelper(0x4ea, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString getItemInfo(LPCTSTR bstrItemName)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x515, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, bstrItemName);
		return result;
	}

	// IWMPDownloadItem2 属性
public:

};
