/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BackBoardServices/BackBoardServices-Structs.h>
@class NSObject, NSMapTable, NSSet, BSServiceConnection;

@interface BKSHIDEventObserver : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	os_unfair_lock_s _lock;
	NSMapTable* _lock_deferringAssertionsToObservers;
	NSSet* _lock_deferringResolutions;
	BSServiceConnection* _connection;

}

@property (nonatomic,readonly) NSSet * deferringResolutions; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)addDeferringObserver:(id)arg1 ;
-(NSSet *)deferringResolutions;
-(void)_lock_enableObservation;
-(void)_lock_disableObservation;
-(void)didUpdateDeferringResolutions:(id)arg1 ;
@end

