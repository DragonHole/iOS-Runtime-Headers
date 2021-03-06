/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>

@class HMAction;

@interface HFActionBuilder : HFItemBuilder

@property (nonatomic,readonly) HMAction * action; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
@property (getter=isAffectedByEndEvents,nonatomic,readonly) BOOL affectedByEndEvents; 
+(id)actionBuilderForAction:(id)arg1 inHome:(id)arg2 ;
+(Class)homeKitRepresentationClass;
-(BOOL)updateWithActionBuilder:(id)arg1 ;
-(BOOL)requiresDeviceUnlock;
-(BOOL)isAffectedByEndEvents;
-(id)createNewAction;
-(id)copyForCreatingNewAction;
-(HMAction *)action;
-(void)setAction:(HMAction *)arg1 ;
@end

