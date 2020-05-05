// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPStringCollection 包装器类

class CWMPStringCollection : public COleDispatchDriver
{
public:
	CWMPStringCollection() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPStringCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPStringCollection(const CWMPStringCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPStringCollection 方法
public:
	long get_count()
	{
		long result;
		InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString Item(long lIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x192, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, lIndex);
		return result;
	}

	// IWMPStringCollection 属性
public:

};
