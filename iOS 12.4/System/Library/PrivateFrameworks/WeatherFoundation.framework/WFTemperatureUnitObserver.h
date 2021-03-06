/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSHashTable;

@interface WFTemperatureUnitObserver : NSObject {

	int _userTemperatureUnit;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _blockObserversForUUID;
	NSHashTable* _observerObjects;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> observerQueue;                        //@synthesize observerQueue=_observerQueue - In the implementation block
@property (retain) NSMutableDictionary * blockObserversForUUID;                       //@synthesize blockObserversForUUID=_blockObserversForUUID - In the implementation block
@property (retain) NSHashTable * observerObjects;                                     //@synthesize observerObjects=_observerObjects - In the implementation block
@property (assign) int userTemperatureUnit;                                           //@synthesize userTemperatureUnit=_userTemperatureUnit - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) int temperatureUnit; 
+(id)sharedObserver;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(int)temperatureUnit;
-(void)_updateTemperatureUnit;
-(void)setBlockObserversForUUID:(NSMutableDictionary *)arg1 ;
-(void)setObserverObjects:(NSHashTable *)arg1 ;
-(void)setUserTemperatureUnit:(int)arg1 ;
-(NSHashTable *)observerObjects;
-(NSMutableDictionary *)blockObserversForUUID;
-(id)addBlockObserver:(/*^block*/id)arg1 ;
-(BOOL)removeBlockObserverWithHandle:(id)arg1 ;
-(int)userTemperatureUnit;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeAllObservers;
-(id)init;
-(void)dealloc;
-(BOOL)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)_init;
@end

