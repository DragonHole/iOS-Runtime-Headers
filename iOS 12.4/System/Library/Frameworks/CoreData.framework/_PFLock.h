/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface _PFLock : NSObject <NSLocking> {

	opaque_pthread_mutex_t _lock;
	opaque_pthread_t* _owner;
	unsigned long long _count;

}
+(void)initialize;
-(BOOL)tryLock;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
@end

