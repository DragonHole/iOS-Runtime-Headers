/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface BRButtonResolverController : NSObject {

	NSSet* _interfaces;

}

@property (nonatomic,readonly) BOOL isReady; 
@property (nonatomic,readonly) id propertyList; 
@property (nonatomic,readonly) unsigned long long maxAssetSlots; 
@property (nonatomic,readonly) unsigned long long unusedAssetSlots; 
+(id)sharedInstance;
-(id)propertyList;
-(BOOL)isReady;
-(unsigned long long)maxAssetSlots;
-(unsigned long long)unusedAssetSlots;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)scheduleReadyNotificationOnDispatchQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

