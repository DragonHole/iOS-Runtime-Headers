/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVRCDevice;

@interface TVRCVoiceRecorder : NSObject {

	TVRCDevice* _device;
	BOOL _recordsAutomatically;

}

@property (assign,nonatomic) BOOL recordsAutomatically; 
-(BOOL)recordsAutomatically;
-(void)setRecordsAutomatically:(BOOL)arg1 ;
-(id)_initWithDevice:(id)arg1 ;
-(void)stop;
-(void)start;
@end

