/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSObject;

@interface VCVideoRelay : NSObject {

	NSMutableArray* _videoCaptureClients;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedInstance;
-(BOOL)enqueueFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_AV56)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(BOOL)registerForVideoFrames:(id)arg1 ;
-(BOOL)deregisterForVideoFrames:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

