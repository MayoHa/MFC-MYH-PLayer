// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CTaskCntrCtrl 包装器类

class CTaskCntrCtrl : public COleDispatchDriver
{
public:
	CTaskCntrCtrl() {} // 调用 COleDispatchDriver 默认构造函数
	CTaskCntrCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTaskCntrCtrl(const CTaskCntrCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// ITaskCntrCtrl 方法
public:
	LPUNKNOWN get_CurrentContainer()
	{
		LPUNKNOWN result;
		InvokeHelper(0x60020000, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	void put_CurrentContainer(LPUNKNOWN newValue)
	{
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x60020000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Activate()
	{
		InvokeHelper(0x60020002, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// ITaskCntrCtrl 属性
public:

};
