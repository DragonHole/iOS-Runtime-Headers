/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NSXPCStoreNotificationObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	id _store;

}
-(id)initForObservationWithName:(id)arg1 store:(id)arg2 ;
-(id)_store;
-(void)setStore:(id)arg1 ;
-(void)dealloc;
@end

