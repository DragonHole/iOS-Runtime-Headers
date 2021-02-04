/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REEngineLocationManagerObserver.h>

@class RTRoutineManager, NSMapTable, NSMutableDictionary, NSLock, NSString;

@interface RELocationPredictor : REPredictor <REEngineLocationManagerObserver> {

	RTRoutineManager* _manager;
	NSMapTable* _routineData;
	NSMutableDictionary* _overrideRoutineType;
	NSLock* _routineDataLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedFeatures;
+(double)updateInterval;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(void)locationManagerDidUpdateLocation:(id)arg1 ;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(id)locationForEngine:(id)arg1 userLocation:(long long)arg2 ;
-(void)addRelevanceEngine:(id)arg1 ;
-(void)removeRelevanceEngine:(id)arg1 ;
-(void)_setOverrideLocation:(long long)arg1 forEngine:(id)arg2 ;
-(id)init;
-(void)update;
@end
