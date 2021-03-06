/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _SYCountedSemaphore : NSObject {

	AI _sem_port;
	Ai _count;
	Ai _signals;
	AB _invalidated;

}
-(BOOL)waitWithTimeout:(double)arg1 ;
-(BOOL)_waitSemaphoreWithTimeout:(double)arg1 ;
-(void)_signalSemaphore;
-(void)_ensureSemaphore;
-(id)initWithCount:(long long)arg1 ;
-(id)init;
-(void)invalidate;
-(void)signal;
@end

