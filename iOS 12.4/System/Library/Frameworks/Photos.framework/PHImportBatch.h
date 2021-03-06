/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSDate, NSMutableArray, PHImportTimerCollection, NSObject;

@interface PHImportBatch : NSObject {

	NSDate* _start;
	NSMutableArray* _records;
	PHImportTimerCollection* _timers;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,readonly) NSMutableArray * records;                                //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) PHImportTimerCollection * timers;                        //@synthesize timers=_timers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
-(PHImportTimerCollection *)timers;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(id)init;
-(double)duration;
-(NSMutableArray *)records;
@end

