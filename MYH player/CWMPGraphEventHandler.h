// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPGraphEventHandler 包装器类

class CWMPGraphEventHandler : public COleDispatchDriver
{
public:
	CWMPGraphEventHandler() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPGraphEventHandler(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPGraphEventHandler(const CWMPGraphEventHandler& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPGraphEventHandler 方法
public:
	void NotifyGraphStateChange(unsigned long punkGraph, long lGraphState)
	{
		static BYTE parms[] = VTS_UI4 VTS_I4;
		InvokeHelper(0x1fd7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, lGraphState);
	}
	void AsyncNotifyGraphStateChange(unsigned long punkGraph, long lGraphState)
	{
		static BYTE parms[] = VTS_UI4 VTS_I4;
		InvokeHelper(0x1fed, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, lGraphState);
	}
	void NotifyRateChange(unsigned long punkGraph, double dRate)
	{
		static BYTE parms[] = VTS_UI4 VTS_R8;
		InvokeHelper(0x1fd9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, dRate);
	}
	void NotifyPlaybackEnd(unsigned long punkGraph, LPCTSTR bstrQueuedUrl, unsigned long dwCurrentContext)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR VTS_UI4;
		InvokeHelper(0x1fdd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, bstrQueuedUrl, dwCurrentContext);
	}
	void NotifyStreamEnd(unsigned long punkGraph)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x1fdc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph);
	}
	void NotifyScriptCommand(unsigned long punkGraph, LPCTSTR bstrCommand, LPCTSTR bstrParam)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x1fde, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, bstrCommand, bstrParam);
	}
	void NotifyEarlyScriptCommand(unsigned long punkGraph, LPCTSTR bstrCommand, LPCTSTR bstrParam, double dTime)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR VTS_BSTR VTS_R8;
		InvokeHelper(0x1fec, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, bstrCommand, bstrParam, dTime);
	}
	void NotifyMarkerHit(unsigned long punkGraph, long lMarker)
	{
		static BYTE parms[] = VTS_UI4 VTS_I4;
		InvokeHelper(0x1fdf, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, lMarker);
	}
	void NotifyGraphError(unsigned long punkGraph, long lErrMajor, long lErrMinor, long lCondition, LPCTSTR bstrInfo, LPUNKNOWN punkGraphData)
	{
		static BYTE parms[] = VTS_UI4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_UNKNOWN;
		InvokeHelper(0x1fe0, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, lErrMajor, lErrMinor, lCondition, bstrInfo, punkGraphData);
	}
	void NotifyAcquireCredentials(unsigned long punkGraph, LPCTSTR bstrRealm, LPCTSTR bstrSite, LPCTSTR bstrUser, LPCTSTR bstrPassword, unsigned long * pdwFlags, BOOL * pfCancel)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_PUI4 VTS_PBOOL;
		InvokeHelper(0x1fe1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, bstrRealm, bstrSite, bstrUser, bstrPassword, pdwFlags, pfCancel);
	}
	void NotifyUntrustedLicense(unsigned long punkGraph, LPCTSTR bstrURL, BOOL * pfCancel)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR VTS_PBOOL;
		InvokeHelper(0x1ff2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, bstrURL, pfCancel);
	}
	void NotifyLicenseDialog(unsigned long punkGraph, LPCTSTR bstrURL, LPCTSTR bstrContent, unsigned char * pPostData, unsigned long dwPostDataSize, long lResult)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR VTS_BSTR VTS_PUI1 VTS_UI4 VTS_I4;
		InvokeHelper(0x1fe2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, bstrURL, bstrContent, pPostData, dwPostDataSize, lResult);
	}
	void NotifyNeedsIndividualization(unsigned long punkGraph, BOOL * pfResult)
	{
		static BYTE parms[] = VTS_UI4 VTS_PBOOL;
		InvokeHelper(0x1fe3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, pfResult);
	}
	void NotifyNewMetadata(unsigned long punkGraph)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x1fe5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph);
	}
	void NotifyNewMediaCaps(unsigned long punkGraph)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x1fe6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph);
	}
	void NotifyDisconnect(unsigned long punkGraph, long lResult)
	{
		static BYTE parms[] = VTS_UI4 VTS_I4;
		InvokeHelper(0x1fe7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, lResult);
	}
	void NotifySave(unsigned long punkGraph, long fStarted, long lResult)
	{
		static BYTE parms[] = VTS_UI4 VTS_I4 VTS_I4;
		InvokeHelper(0x1fe8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, fStarted, lResult);
	}
	void NotifyDelayClose(unsigned long punkGraph, BOOL fDelay)
	{
		static BYTE parms[] = VTS_UI4 VTS_BOOL;
		InvokeHelper(0x1fe9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, fDelay);
	}
	void NotifyDVD(unsigned long punkGraph, long lEventCode, long lParam1, long lParam2)
	{
		static BYTE parms[] = VTS_UI4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x1fea, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, lEventCode, lParam1, lParam2);
	}
	void NotifyRequestAppThreadAction(unsigned long punkGraph, unsigned long dwAction)
	{
		static BYTE parms[] = VTS_UI4 VTS_UI4;
		InvokeHelper(0x1feb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, dwAction);
	}
	void NotifyPrerollReady(unsigned long punkGraph)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x1fee, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph);
	}
	void NotifyNewIcons(unsigned long punkGraph)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x1ff1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph);
	}
	void NotifyStepComplete(unsigned long punkGraph)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x1ff3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph);
	}
	void NotifyNewBitrate(unsigned long punkGraph, unsigned long dwBitrate)
	{
		static BYTE parms[] = VTS_UI4 VTS_UI4;
		InvokeHelper(0x1ff4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, dwBitrate);
	}
	void NotifyGraphCreationPreRender(unsigned long punkGraph, unsigned long punkFilterGraph, unsigned long punkCardeaEncConfig, unsigned long phrContinue, unsigned long hEventToSet)
	{
		static BYTE parms[] = VTS_UI4 VTS_UI4 VTS_UI4 VTS_UI4 VTS_UI4;
		InvokeHelper(0x1ff5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, punkFilterGraph, punkCardeaEncConfig, phrContinue, hEventToSet);
	}
	void NotifyGraphCreationPostRender(unsigned long punkGraph, unsigned long punkFilterGraph, unsigned long phrContinue, unsigned long hEventToSet)
	{
		static BYTE parms[] = VTS_UI4 VTS_UI4 VTS_UI4 VTS_UI4;
		InvokeHelper(0x1ff6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, punkFilterGraph, phrContinue, hEventToSet);
	}
	void NotifyGraphUserEvent(unsigned long punkGraph, long EventCode)
	{
		static BYTE parms[] = VTS_UI4 VTS_I4;
		InvokeHelper(0x1ffa, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, EventCode);
	}
	void NotifyRevocation(unsigned long punkGraph, BOOL * pfResult)
	{
		static BYTE parms[] = VTS_UI4 VTS_PBOOL;
		InvokeHelper(0x1ff7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, pfResult);
	}
	void NotifyNeedsWMGraphIndividualization(unsigned long punkGraph, unsigned long phWnd, unsigned long hIndivEvent, BOOL * pfCancel, BOOL * pfResult)
	{
		static BYTE parms[] = VTS_UI4 VTS_UI4 VTS_UI4 VTS_PBOOL VTS_PBOOL;
		InvokeHelper(0x1ff8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph, phWnd, hIndivEvent, pfCancel, pfResult);
	}
	void NotifyNeedsFullscreen(unsigned long punkGraph)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x1ff9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkGraph);
	}

	// IWMPGraphEventHandler 属性
public:

};
