/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompanionSync/CompanionSync-Structs.h>
@class NSMutableArray;

@interface SYAtomicFIFO : NSObject {

	os_unfair_lock_s _lock;
	NSMutableArray* _store;

}

@property (readonly) id head; 
@property (readonly) id tail; 
-(id)dequeue;
-(id)dequeueUntil:(/*^block*/id)arg1 ;
-(void)enqueue:(id)arg1 ;
-(id)head;
-(id)tail;
-(id)init;
-(void)removeAllObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end
