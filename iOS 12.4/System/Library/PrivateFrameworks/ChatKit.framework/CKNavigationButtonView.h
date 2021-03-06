/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIButton, UILabel, NSString, CNContactInlineActionsViewController;

@interface CKNavigationButtonView : UIView {

	BOOL _wantsLongPress;
	BOOL _buttonEnabled;
	/*^block*/id _buttonTappedCallback;
	/*^block*/id _buttonLongPressCallback;
	long long _joinButtonStyle;
	UIImage* _image;
	UIImage* _defaultImage;
	UIImage* _disabledImage;
	UIButton* _imageButton;
	UILabel* _textLabel;
	NSString* _text;
	CNContactInlineActionsViewController* _contactVC;

}

@property (assign,nonatomic) BOOL wantsLongPress;                                           //@synthesize wantsLongPress=_wantsLongPress - In the implementation block
@property (nonatomic,retain) UIImage * image;                                               //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * defaultImage;                                        //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,retain) UIImage * disabledImage;                                       //@synthesize disabledImage=_disabledImage - In the implementation block
@property (nonatomic,retain) UIButton * imageButton;                                        //@synthesize imageButton=_imageButton - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                           //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,copy) NSString * text;                                                 //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) CNContactInlineActionsViewController * contactVC;              //@synthesize contactVC=_contactVC - In the implementation block
@property (nonatomic,copy) id buttonTappedCallback;                                         //@synthesize buttonTappedCallback=_buttonTappedCallback - In the implementation block
@property (nonatomic,copy) id buttonLongPressCallback;                                      //@synthesize buttonLongPressCallback=_buttonLongPressCallback - In the implementation block
@property (assign,nonatomic) long long joinButtonStyle;                                     //@synthesize joinButtonStyle=_joinButtonStyle - In the implementation block
@property (assign,getter=isButtonEnabled,nonatomic) BOOL buttonEnabled;                     //@synthesize buttonEnabled=_buttonEnabled - In the implementation block
-(void)setButtonEnabled:(BOOL)arg1 ;
-(void)setButtonTappedCallback:(id)arg1 ;
-(void)setButtonLongPressCallback:(id)arg1 ;
-(void)setJoinButtonStyle:(long long)arg1 ;
-(id)initWithImage:(id)arg1 disabledImage:(id)arg2 text:(id)arg3 wantsLongPress:(BOOL)arg4 ;
-(id)initWithImage:(id)arg1 text:(id)arg2 wantsLongPress:(BOOL)arg3 ;
-(long long)joinButtonStyle;
-(void)setWantsLongPress:(BOOL)arg1 ;
-(void)setDefaultImage:(UIImage *)arg1 ;
-(void)_setupImageButton;
-(void)setImageButton:(UIButton *)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(BOOL)wantsLongPress;
-(void)_buttonLongPressed:(id)arg1 ;
-(BOOL)isButtonEnabled;
-(UIImage *)disabledImage;
-(id)buttonTappedCallback;
-(id)buttonLongPressCallback;
-(CNContactInlineActionsViewController *)contactVC;
-(UIImage *)defaultImage;
-(void)setDisabledImage:(UIImage *)arg1 ;
-(void)setContactVC:(CNContactInlineActionsViewController *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(CGSize)intrinsicContentSize;
-(UIButton *)imageButton;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

