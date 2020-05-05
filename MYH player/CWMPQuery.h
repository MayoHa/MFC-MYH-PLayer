// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPQuery 包装器类

class CWMPQuery : public COleDispatchDriver
{
public:
	CWMPQuery() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPQuery(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPQuery(const CWMPQuery& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPQuery 方法
public:
	void addCondition(LPCTSTR bstrAttribute, LPCTSTR bstrOperator, LPCTSTR bstrValue)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x547, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrAttribute, bstrOperator, bstrValue);
	}
	void beginNextGroup()
	{
		InvokeHelper(0x548, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPQuery 属性
public:

};
