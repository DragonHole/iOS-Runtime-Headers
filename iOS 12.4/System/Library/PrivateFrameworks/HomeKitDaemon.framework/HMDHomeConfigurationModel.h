/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber;

@interface HMDHomeConfigurationModel : HMDBackingStoreModelObject {

	BOOL _homeHasLocalChanges;

}

@property (nonatomic,retain) NSNumber * configurationVersion; 
@property (assign,nonatomic) BOOL homeHasLocalChanges;                     //@synthesize homeHasLocalChanges=_homeHasLocalChanges - In the implementation block
+(id)properties;
-(BOOL)homeHasLocalChanges;
-(void)setHomeHasLocalChanges:(BOOL)arg1 ;
@end

