// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPListBoxItem 包装器类

class CWMPListBoxItem : public COleDispatchDriver
{
public:
	CWMPListBoxItem() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPListBoxItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPListBoxItem(const CWMPListBoxItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPListBoxItem 方法
public:
	void put_value(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x17e7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IWMPListBoxItem 属性
public:

};
