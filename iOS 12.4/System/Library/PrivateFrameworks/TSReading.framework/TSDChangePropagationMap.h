/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDChangePropagationMap.h>

@protocol TSDChangePropagationMap <NSObject>
@required
-(id)prototypeChangeForPrototype:(id)arg1;

@end


@class TSUNoCopyDictionary, NSMutableSet, NSString;

@interface TSDChangePropagationMap : NSObject <TSDChangePropagationMap> {

	TSUNoCopyDictionary* mDictionary;
	NSMutableSet* mClassesOfChangedPrototypes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)p_addClassesForPrototype:(id)arg1 ;
-(void)recordOldValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3 ;
-(void)recordNewValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 newBoxedValue:(id)arg3 ;
-(id)prototypeChangeForPrototype:(id)arg1 ;
-(void)recordReplacementChangeForPrototype:(id)arg1 replacement:(id)arg2 ;
-(void)recordModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3 newBoxedValue:(id)arg4 ;
-(void)recordDeleteChangeForPrototype:(id)arg1 replacement:(id)arg2 ;
-(BOOL)hasAnyChangesForPrototypesOfClasses:(id)arg1 ;
-(id)prototypePassingTest:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

