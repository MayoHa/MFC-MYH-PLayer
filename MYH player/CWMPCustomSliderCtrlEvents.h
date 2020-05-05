// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPCustomSliderCtrlEvents 包装器类

class CWMPCustomSliderCtrlEvents : public COleDispatchDriver
{
public:
	CWMPCustomSliderCtrlEvents() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPCustomSliderCtrlEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCustomSliderCtrlEvents(const CWMPCustomSliderCtrlEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPCustomSliderCtrlEvents 方法
public:
	STDMETHOD(ondragbegin)()
	{
		HRESULT result;
		InvokeHelper(0x139c, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(ondragend)()
	{
		HRESULT result;
		InvokeHelper(0x139d, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onpositionchange)()
	{
		HRESULT result;
		InvokeHelper(0x139e, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// IWMPCustomSliderCtrlEvents 属性
public:

};
