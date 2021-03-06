/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libAudioIssueDetector.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADAMServerProtocol <NSObject>
@optional
-(void)startMeasuringAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 withConfiguration:(id)arg3 andReply:(/*^block*/id)arg4;
-(void)stopMeasuringAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 andReply:(/*^block*/id)arg3;
-(void)configureAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 configuration:(id)arg3 withReply:(/*^block*/id)arg4;

@required
-(void)startListeningToAudioSampleWithIdentifier:(id)arg1 type:(unsigned)arg2 withReply:(/*^block*/id)arg3;
-(void)stopListeningToAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 withReply:(/*^block*/id)arg3;

@end

