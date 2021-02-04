/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKAlertItem.h>
#import <libobjc.A.dylib/SBBannerPresentingAlertItem.h>

@protocol SBBannerPresentingAlertItemDelegate;
@class CKIMDBMessage, BBBulletin, NSString;

@interface CKMessageAlertItem : CKAlertItem <SBBannerPresentingAlertItem> {

	CKIMDBMessage* _message;
	BOOL _playedSound;
	BBBulletin* _bulletin;
	BOOL _showingImage;
	id<SBBannerPresentingAlertItemDelegate> bannerPresenterDelegate;

}

@property (nonatomic,retain) BBBulletin * bulletin;                                                        //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) BOOL showingImage;                                                            //@synthesize showingImage=_showingImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBBannerPresentingAlertItemDelegate> bannerPresenterDelegate; 
+(void)stopPlayingCurrentAlertTone;
+(int)lastMessageSenderID;
+(void)setLastMessageSenderID:(int)arg1 ;
+(void)playMessageReceived;
-(id)_groupID;
-(void)reply;
-(id)address;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)performUnlockAction;
-(BOOL)allowMenuButtonDismissal;
-(void)willRelockForButtonPress:(BOOL)arg1 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(BBBulletin *)bulletin;
-(void)setBulletin:(BBBulletin *)arg1 ;
-(id)alertImage;
-(void)willActivate;
-(BOOL)showingImage;
-(void)setShowingImage:(BOOL)arg1 ;
-(BOOL)isAudioPlaybackAlert;
-(id<SBBannerPresentingAlertItemDelegate>)bannerPresenterDelegate;
-(void)setBannerPresenterDelegate:(id<SBBannerPresentingAlertItemDelegate>)arg1 ;
-(BOOL)dismissOnLock;
-(id)name;
-(void)setMessage:(id)arg1 ;
-(id)accessoryView;
-(id)messageText;
@end
