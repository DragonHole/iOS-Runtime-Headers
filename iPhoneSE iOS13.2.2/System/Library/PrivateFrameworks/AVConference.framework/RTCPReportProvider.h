/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTCPReportProvider <NSObject>
@optional
-(unsigned)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
-(unsigned)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;

@required
-(BOOL)generateReceptionReportList:(RTCP_RECEPTION_REPORT*)arg1 reportCount:(char*)arg2;

@end

