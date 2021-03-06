/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSHashTable;

@interface SKUIToggleStateCenter : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _itemStates;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;

}
+(id)defaultCenter;
-(id)itemForIdentifier:(id)arg1 ;
-(void)_notifyObserversOfStateChanges:(id)arg1 ;
-(void)clearAll;
-(BOOL)updateItem:(id)arg1 ;
-(void)_accountStoreChangeNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

