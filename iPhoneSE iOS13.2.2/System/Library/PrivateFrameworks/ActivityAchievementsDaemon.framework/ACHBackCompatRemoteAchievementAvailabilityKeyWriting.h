/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile;

@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriting : NSObject {

	HDProfile* _profile;

}

@property (nonatomic,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(id)companionAvailabilityStateKeyFromUniqueName:(id)arg1 ;
-(BOOL)markTemplateAvailable:(id)arg1 error:(id*)arg2 ;
@end

