/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivity.h>

@protocol SUActivityDelegate;
@class UIImage, NSString, UIViewController;

@interface SUActivity : UIActivity {

	id<SUActivityDelegate> _delegate;
	UIImage* _suActivityImage;
	NSString* _suActivityTitle;
	NSString* _suActivityType;
	UIViewController* _suActivityViewController;

}

@property (assign,nonatomic,__weak) id<SUActivityDelegate> ITunesStoreDelegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setITunesStoreDelegate:(id<SUActivityDelegate>)arg1 ;
-(id<SUActivityDelegate>)ITunesStoreDelegate;
-(void)dealloc;
-(id)activityTitle;
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityViewController;
-(void)setActivityViewController:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setActivityType:(id)arg1 ;
-(void)setActivityTitle:(id)arg1 ;
-(void)setActivityImage:(id)arg1 ;
@end

