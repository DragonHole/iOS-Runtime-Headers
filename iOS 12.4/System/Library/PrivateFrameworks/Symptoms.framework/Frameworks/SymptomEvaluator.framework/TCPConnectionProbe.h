/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/TestProbe.h>

@protocol OS_tcp_connection;
@class NSObject, NSDate;

@interface TCPConnectionProbe : TestProbe {

	NSObject*<OS_tcp_connection> _connection;
	BOOL _connected;
	BOOL _shouldSendReply;
	NSDate* _startTime;
	double _elapsedTime;

}
-(void)cancelTest:(/*^block*/id)arg1 ;
-(void)testConection:(id)arg1 port:(unsigned long long)arg2 timeout:(double)arg3 interfaceName:(id)arg4 reply:(/*^block*/id)arg5 ;
@end
