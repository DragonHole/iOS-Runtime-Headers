/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SUTermsAndConditionsViewDelegate;
@class SUSubtitledButton, SUClientInterface, SULinkControl;

@interface SUTermsAndConditionsView : UIView {

	SUSubtitledButton* _button;
	SUClientInterface* _clientInterface;
	id<SUTermsAndConditionsViewDelegate> _delegate;
	BOOL _hideAccountButton;
	double _rightMargin;
	long long _style;
	SULinkControl* _termsAndConditionsControl;

}

@property (nonatomic,retain) SUClientInterface * clientInterface;                               //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign,nonatomic,__weak) id<SUTermsAndConditionsViewDelegate> delegate; 
@property (assign,nonatomic) BOOL hideAccountButton;                                            //@synthesize hideAccountButton=_hideAccountButton - In the implementation block
@property (assign,nonatomic) double rightMargin;                                                //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) long long style;                                                   //@synthesize style=_style - In the implementation block
-(void)_updateButton;
-(void)setHideAccountButton:(BOOL)arg1 ;
-(void)_accountsChangedNotification:(id)arg1 ;
-(void)_destroyButton;
-(long long)_linkStyleForStyle:(long long)arg1 ;
-(double)_buttonHeightForStyle:(long long)arg1 ;
-(id)_termsAndConditionsControl;
-(void)_clearButtonSelection:(id)arg1 ;
-(void)_termsAndConditionsAction:(id)arg1 ;
-(BOOL)hideAccountButton;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(SUClientInterface *)clientInterface;
-(void)dealloc;
-(void)setDelegate:(id<SUTermsAndConditionsViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(id<SUTermsAndConditionsViewDelegate>)delegate;
-(void)setRightMargin:(double)arg1 ;
-(id)_button;
-(double)rightMargin;
@end

