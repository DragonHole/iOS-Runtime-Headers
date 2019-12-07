/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMMeCardSharingStateController : NSObject

@property (assign,nonatomic) BOOL sharingEnabled; 
@property (assign,nonatomic) unsigned long long sharingAudience; 
@property (assign,nonatomic) unsigned long long nameFormat; 
@property (assign,nonatomic) BOOL nameForkedFromMeCard; 
@property (assign,nonatomic) BOOL imageForkedFromMeCard; 
+(id)sharedInstance;
-(id)init;
-(void)_migrateMeCardDomains;
-(void)_syncPreferenceDidChange;
-(void)setSharingAudience:(unsigned long long)arg1 ;
-(void)_incrementSharingVersion;
-(BOOL)sharingEnabled;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(unsigned long long)sharingAudience;
-(unsigned long long)nameFormat;
-(void)setNameFormat:(unsigned long long)arg1 ;
-(void)postNameFormatChangedNotification;
-(BOOL)nameForkedFromMeCard;
-(void)setNameForkedFromMeCard:(BOOL)arg1 ;
-(BOOL)imageForkedFromMeCard;
-(void)setImageForkedFromMeCard:(BOOL)arg1 ;
-(BOOL)wasSharingEverEnabled;
@end
