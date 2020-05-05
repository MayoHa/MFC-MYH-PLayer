// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPRegionalButtonEvents 包装器类

class CWMPRegionalButtonEvents : public COleDispatchDriver
{
public:
	CWMPRegionalButtonEvents() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPRegionalButtonEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPRegionalButtonEvents(const CWMPRegionalButtonEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPRegionalButtonEvents 方法
public:
	STDMETHOD(onblur)()
	{
		HRESULT result;
		InvokeHelper(0x14f0, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onfocus)()
	{
		HRESULT result;
		InvokeHelper(0x14f1, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onclick)()
	{
		HRESULT result;
		InvokeHelper(0x14f2, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(ondblclick)()
	{
		HRESULT result;
		InvokeHelper(0x14f3, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onmousedown)()
	{
		HRESULT result;
		InvokeHelper(0x14f4, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onmouseup)()
	{
		HRESULT result;
		InvokeHelper(0x14f5, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onmousemove)()
	{
		HRESULT result;
		InvokeHelper(0x14f6, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onmouseover)()
	{
		HRESULT result;
		InvokeHelper(0x14f7, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onmouseout)()
	{
		HRESULT result;
		InvokeHelper(0x14f8, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onkeypress)()
	{
		HRESULT result;
		InvokeHelper(0x14f9, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onkeydown)()
	{
		HRESULT result;
		InvokeHelper(0x14fa, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onkeyup)()
	{
		HRESULT result;
		InvokeHelper(0x14fb, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// IWMPRegionalButtonEvents 属性
public:

};
