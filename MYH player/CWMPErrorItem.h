// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPErrorItem 包装器类

class CWMPErrorItem : public COleDispatchDriver
{
public:
	CWMPErrorItem() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPErrorItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPErrorItem(const CWMPErrorItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPErrorItem 方法
public:
	long get_errorCode()
	{
		long result;
		InvokeHelper(0x385, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_errorDescription()
	{
		CString result;
		InvokeHelper(0x386, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	VARIANT get_errorContext()
	{
		VARIANT result;
		InvokeHelper(0x387, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	long get_remedy()
	{
		long result;
		InvokeHelper(0x388, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_customUrl()
	{
		CString result;
		InvokeHelper(0x389, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}

	// IWMPErrorItem 属性
public:

};
