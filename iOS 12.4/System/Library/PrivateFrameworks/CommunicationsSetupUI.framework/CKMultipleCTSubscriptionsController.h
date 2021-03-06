/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString, NSArray;

@interface CKMultipleCTSubscriptionsController : PSListController {

	NSString* _defaultsKey;
	NSString* _headerKey;
	NSString* _controllerTitle;
	NSArray* _ctSubscriptions;

}

@property (nonatomic,copy) NSString * defaultsKey;                   //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,copy) NSString * headerKey;                     //@synthesize headerKey=_headerKey - In the implementation block
@property (nonatomic,copy) NSString * controllerTitle;               //@synthesize controllerTitle=_controllerTitle - In the implementation block
@property (nonatomic,retain) NSArray * ctSubscriptions;              //@synthesize ctSubscriptions=_ctSubscriptions - In the implementation block
-(void)systemApplicationWillEnterForeground;
-(void)setCtSubscriptions:(NSArray *)arg1 ;
-(void)setDefaultsKey:(NSString *)arg1 ;
-(void)setControllerTitle:(NSString *)arg1 ;
-(NSArray *)ctSubscriptions;
-(void)setEnabledForSubscription:(id)arg1 specifier:(id)arg2 ;
-(id)isEnabledForSubscription:(id)arg1 ;
-(NSString *)defaultsKey;
-(NSString *)controllerTitle;
-(id)specifiers;
-(void)setHeaderKey:(NSString *)arg1 ;
-(NSString *)headerKey;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

