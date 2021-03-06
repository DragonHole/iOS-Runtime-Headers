/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FLEnvironment : NSObject

@property (nonatomic,readonly) BOOL followUpExtensionSupportEnabled; 
@property (nonatomic,readonly) BOOL followUpZeroActionsForTheWorld; 
+(id)currentEnvironment;
-(BOOL)followUpExtensionSupportEnabled;
-(BOOL)stressMode;
-(id)stressBundleIdentifiers;
-(BOOL)shouldHideAllFollowUps;
-(BOOL)followUpZeroActionsForTheWorld;
-(void)setFollowUpExtensionSupportEnabled:(BOOL)arg1 ;
-(id)supportedBundleIdentifiers;
-(BOOL)isUnlocked;
-(BOOL)isInternal;
@end

