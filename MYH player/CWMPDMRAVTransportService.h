// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPDMRAVTransportService 包装器类

class CWMPDMRAVTransportService : public COleDispatchDriver
{
public:
	CWMPDMRAVTransportService() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPDMRAVTransportService(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPDMRAVTransportService(const CWMPDMRAVTransportService& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPDMRAVTransportService 方法
public:
	CString get_TransportState()
	{
		CString result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_TransportStatus()
	{
		CString result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_PlaybackStorageMedium()
	{
		CString result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_RecordStorageMedium()
	{
		CString result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_PossiblePlaybackStorageMedia()
	{
		CString result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_PossibleRecordStorageMedia()
	{
		CString result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_CurrentPlayMode()
	{
		CString result;
		InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_TransportPlaySpeed()
	{
		CString result;
		InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_RecordMediumWriteStatus()
	{
		CString result;
		InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_CurrentRecordQualityMode()
	{
		CString result;
		InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_PossibleRecordQualityModes()
	{
		CString result;
		InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	unsigned long get_NumberOfTracks()
	{
		unsigned long result;
		InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	unsigned long get_CurrentTrack()
	{
		unsigned long result;
		InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	CString get_CurrentTrackDuration()
	{
		CString result;
		InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_CurrentMediaDuration()
	{
		CString result;
		InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_CurrentTrackMetaData()
	{
		CString result;
		InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_CurrentTrackURI()
	{
		CString result;
		InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_AVTransportURI()
	{
		CString result;
		InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_AVTransportURIMetaData()
	{
		CString result;
		InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_NextAVTransportURI()
	{
		CString result;
		InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_NextAVTransportURIMetaData()
	{
		CString result;
		InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_RelativeTimePosition()
	{
		CString result;
		InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_AbsoluteTimePosition()
	{
		CString result;
		InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_RelativeCounterPosition()
	{
		long result;
		InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_AbsoluteCounterPosition()
	{
		long result;
		InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_CurrentTransportActions()
	{
		CString result;
		InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_LastChange()
	{
		CString result;
		InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_A_ARG_TYPE_SeekMode()
	{
		CString result;
		InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_A_ARG_TYPE_SeekTarget()
	{
		CString result;
		InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	unsigned long get_A_ARG_TYPE_InstanceID()
	{
		unsigned long result;
		InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	CString get_CurrentProtocolInfo()
	{
		CString result;
		InvokeHelper(0x2d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void SetAVTransportURI(LPUNKNOWN punkRemoteEndpointInfo, unsigned long ulInstanceID, LPCTSTR bstrCurrentURI, LPCTSTR bstrCurrentURIMetaData)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_UI4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x1f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkRemoteEndpointInfo, ulInstanceID, bstrCurrentURI, bstrCurrentURIMetaData);
	}
	void GetMediaInfo(unsigned long ulInstanceID, unsigned long * pulNumTracks, BSTR * pbstrMediaDuration, BSTR * pbstrCurrentURI, BSTR * pbstrCurrentURIMetaData, BSTR * pbstrNextURI, BSTR * pNextURIMetaData, BSTR * pbstrPlayMedium, BSTR * pbstrRecordMedium, BSTR * pbstrWriteStatus)
	{
		static BYTE parms[] = VTS_UI4 VTS_PUI4 VTS_PBSTR VTS_PBSTR VTS_PBSTR VTS_PBSTR VTS_PBSTR VTS_PBSTR VTS_PBSTR VTS_PBSTR;
		InvokeHelper(0x21, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, pulNumTracks, pbstrMediaDuration, pbstrCurrentURI, pbstrCurrentURIMetaData, pbstrNextURI, pNextURIMetaData, pbstrPlayMedium, pbstrRecordMedium, pbstrWriteStatus);
	}
	void GetTransportInfo(unsigned long ulInstanceID, BSTR * pbstrCurrentTransportState, BSTR * pbstrCurrentTransportStatus, BSTR * pbstrCurrentSpeed)
	{
		static BYTE parms[] = VTS_UI4 VTS_PBSTR VTS_PBSTR VTS_PBSTR;
		InvokeHelper(0x22, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, pbstrCurrentTransportState, pbstrCurrentTransportStatus, pbstrCurrentSpeed);
	}
	void GetPositionInfo(unsigned long ulInstanceID, unsigned long * pTrack, BSTR * pbstrTrackDuration, BSTR * pbstrTrackMetaData, BSTR * pbstrTrackURI, BSTR * pbstrRelTime, BSTR * pbstrAbsTime, long * plRelCount, long * plAbsCount)
	{
		static BYTE parms[] = VTS_UI4 VTS_PUI4 VTS_PBSTR VTS_PBSTR VTS_PBSTR VTS_PBSTR VTS_PBSTR VTS_PI4 VTS_PI4;
		InvokeHelper(0x23, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, pTrack, pbstrTrackDuration, pbstrTrackMetaData, pbstrTrackURI, pbstrRelTime, pbstrAbsTime, plRelCount, plAbsCount);
	}
	void GetDeviceCapabilities(unsigned long ulInstanceID, BSTR * pbstrPlayMedia, BSTR * pbstrRecMedia, BSTR * pbstrRecQualityModes)
	{
		static BYTE parms[] = VTS_UI4 VTS_PBSTR VTS_PBSTR VTS_PBSTR;
		InvokeHelper(0x24, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, pbstrPlayMedia, pbstrRecMedia, pbstrRecQualityModes);
	}
	void GetTransportSettings(unsigned long ulInstanceID, BSTR * pbstrPlayMode, BSTR * pbstrRecQualityMode)
	{
		static BYTE parms[] = VTS_UI4 VTS_PBSTR VTS_PBSTR;
		InvokeHelper(0x25, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, pbstrPlayMode, pbstrRecQualityMode);
	}
	void stop(unsigned long ulInstanceID)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x26, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID);
	}
	void play(unsigned long ulInstanceID, LPCTSTR bstrSpeed)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR;
		InvokeHelper(0x27, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, bstrSpeed);
	}
	void pause(unsigned long ulInstanceID)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x28, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID);
	}
	void Seek(unsigned long ulInstanceID, LPCTSTR bstrUnit, LPCTSTR bstrTarget)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x29, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, bstrUnit, bstrTarget);
	}
	void next(unsigned long ulInstanceID)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x2a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID);
	}
	void previous(unsigned long ulInstanceID)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x2b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID);
	}
	void GetCurrentTransportActions(unsigned long ulInstanceID, BSTR * pbstrActions)
	{
		static BYTE parms[] = VTS_UI4 VTS_PBSTR;
		InvokeHelper(0x2c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulInstanceID, pbstrActions);
	}
	void SetNextAVTransportURI(LPUNKNOWN punkRemoteEndpointInfo, unsigned long ulInstanceID, LPCTSTR bstrNextURI, LPCTSTR bstrNextURIMetaData)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_UI4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x20, DISPATCH_METHOD, VT_EMPTY, NULL, parms, punkRemoteEndpointInfo, ulInstanceID, bstrNextURI, bstrNextURIMetaData);
	}

	// IWMPDMRAVTransportService 属性
public:

};
