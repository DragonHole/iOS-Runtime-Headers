/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSObject;

@interface OITSUWidthLimitedQueue : NSObject {

	int mReaderCount;
	int mLimit;
	NSObject*<OS_dispatch_queue> mManagerQueue;
	NSObject*<OS_dispatch_queue> mTargetQueue;
	os_unfair_lock_s mUnfairLock;

}
-(id)initWithLimit:(unsigned long long)arg1 ;
-(void)performSync:(/*^block*/id)arg1 ;
-(id)targetDispatchQueue;
-(id)init;
-(void)dealloc;
-(void)performAsync:(/*^block*/id)arg1 ;
@end
