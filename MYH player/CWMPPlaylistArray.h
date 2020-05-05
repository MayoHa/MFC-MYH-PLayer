// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPPlaylistArray 包装器类

class CWMPPlaylistArray : public COleDispatchDriver
{
public:
	CWMPPlaylistArray() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPPlaylistArray(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlaylistArray(const CWMPPlaylistArray& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPPlaylistArray 方法
public:
	long get_count()
	{
		long result;
		InvokeHelper(0x1f5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Item(long lIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1f6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, lIndex);
		return result;
	}

	// IWMPPlaylistArray 属性
public:

};
