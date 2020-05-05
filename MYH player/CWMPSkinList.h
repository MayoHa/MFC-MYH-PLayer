// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPSkinList 包装器类

class CWMPSkinList : public COleDispatchDriver
{
public:
	CWMPSkinList() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPSkinList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPSkinList(const CWMPSkinList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPSkinList 方法
public:
	void updateBasketColumns()
	{
		InvokeHelper(0x17a2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void highContrastChange()
	{
		InvokeHelper(0x17a3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPSkinList 属性
public:

};
