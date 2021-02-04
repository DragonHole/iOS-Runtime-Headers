/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class IMOneTimeCodeAccelerator, NSObject, NSArray, NSHashTable;

@interface WBSOneTimeCodeMonitor : NSObject {

	IMOneTimeCodeAccelerator* _oneTimeCodeAccelerator;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSArray* _codes;
	NSHashTable* _observers;

}

@property (nonatomic,copy,readonly) NSArray * codes; 
-(NSArray *)codes;
-(void)consumeCode:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end
