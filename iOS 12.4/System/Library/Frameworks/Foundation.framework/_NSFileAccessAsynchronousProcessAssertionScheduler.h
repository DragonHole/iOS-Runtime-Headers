/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSMutableDictionary;

@interface _NSFileAccessAsynchronousProcessAssertionScheduler : NSObject {

	NSMutableDictionary* _assertionsPerPID;
	os_unfair_lock_s _lock;

}
+(id)sharedInstance;
-(void)removeAssertionWithToken:(id)arg1 ;
-(id)addAssertionWithName:(id)arg1 forPID:(int)arg2 ;
-(id)init;
@end

