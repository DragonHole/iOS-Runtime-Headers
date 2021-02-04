/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FLFollowUpController, NSString;

@interface SUSFollowUpController : NSObject {

	FLFollowUpController* _followUpController;
	NSString* _identifier;

}

@property (nonatomic,retain) FLFollowUpController * followUpController;              //@synthesize followUpController=_followUpController - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
+(id)sharedController;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
-(BOOL)isBadgeOnlyFollowUpCurrentlyBeingPresented;
-(id)getCurrentSUSFollowUpItem;
-(BOOL)isAutoUpdateFollowUpCurrentlyBeingPresented;
-(void)dismissFollowUp;
-(void)postFollowUp:(id)arg1 ;
-(void)dismissBadgeOnlyFollowUp;
-(void)dismissAutoUpdateFollowUp;
-(BOOL)isFollowUpCurrentlyBeingPresented;
-(void)SUSFollowUpControllerBadgeSettings;
-(void)SUSFollowUpControllerUnbadgeSettings;
-(FLFollowUpController *)followUpController;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
@end
