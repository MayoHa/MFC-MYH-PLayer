// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPDownloadCollection 包装器类

class CWMPDownloadCollection : public COleDispatchDriver
{
public:
	CWMPDownloadCollection() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPDownloadCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPDownloadCollection(const CWMPDownloadCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPDownloadCollection 方法
public:
	long get_ID()
	{
		long result;
		InvokeHelper(0x4b1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_count()
	{
		long result;
		InvokeHelper(0x4b2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Item(long lItem)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x4b3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, lItem);
		return result;
	}
	LPDISPATCH startDownload(LPCTSTR bstrSourceURL, LPCTSTR bstrType)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x4b4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, bstrSourceURL, bstrType);
		return result;
	}
	void removeItem(long lItem)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x4b5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lItem);
	}
	void clear()
	{
		InvokeHelper(0x4b6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPDownloadCollection 属性
public:

};
