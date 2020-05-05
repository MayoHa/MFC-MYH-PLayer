// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPDownloadManager 包装器类

class CWMPDownloadManager : public COleDispatchDriver
{
public:
	CWMPDownloadManager() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPDownloadManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPDownloadManager(const CWMPDownloadManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPDownloadManager 方法
public:
	LPDISPATCH getDownloadCollection(long lCollectionId)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x47f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, lCollectionId);
		return result;
	}
	LPDISPATCH createDownloadCollection()
	{
		LPDISPATCH result;
		InvokeHelper(0x480, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// IWMPDownloadManager 属性
public:

};
