/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString, UIFont, NSParagraphStyle;

@interface MiroTwoLabelButton : UIButton {

	BOOL _titleIsDirty;
	NSString* _primaryLabelText;
	NSString* _secondaryLabelText;
	UIFont* _secondaryLabelFont;
	NSParagraphStyle* _defaultParagraphStyle;

}

@property (assign,nonatomic) BOOL titleIsDirty;                                     //@synthesize titleIsDirty=_titleIsDirty - In the implementation block
@property (nonatomic,retain) NSParagraphStyle * defaultParagraphStyle;              //@synthesize defaultParagraphStyle=_defaultParagraphStyle - In the implementation block
@property (nonatomic,retain) NSString * primaryLabelText;                           //@synthesize primaryLabelText=_primaryLabelText - In the implementation block
@property (nonatomic,retain) NSString * secondaryLabelText;                         //@synthesize secondaryLabelText=_secondaryLabelText - In the implementation block
@property (nonatomic,retain) UIFont * primaryLabelFont; 
@property (nonatomic,retain) UIFont * secondaryLabelFont;                           //@synthesize secondaryLabelFont=_secondaryLabelFont - In the implementation block
-(void)setDefaultParagraphStyle:(NSParagraphStyle *)arg1 ;
-(void)setTitleIsDirty:(BOOL)arg1 ;
-(void)_syncButtonState;
-(UIFont *)primaryLabelFont;
-(NSString *)primaryLabelText;
-(NSString *)secondaryLabelText;
-(BOOL)titleIsDirty;
-(void)_updateAttributedTitle;
-(void)setPrimaryLabelFont:(UIFont *)arg1 ;
-(void)setPrimaryLabelText:(NSString *)arg1 ;
-(void)setSecondaryLabelText:(NSString *)arg1 ;
-(void)setSecondaryLabelFont:(UIFont *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_commonInit;
-(void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)awakeFromNib;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIFont *)secondaryLabelFont;
-(NSParagraphStyle *)defaultParagraphStyle;
@end

