/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol VUISeasonPickerButtonDelegate;
@class NSArray, VUILabel, _TVImageView, VUITextLayout;

@interface VUISeasonPickerButton : UIControl {

	NSArray* _seasonTitles;
	id<VUISeasonPickerButtonDelegate> _delegate;
	unsigned long long _currentIndex;
	VUILabel* _currentLabel;
	VUILabel* _altLabel;
	_TVImageView* _chevronDownImageView;
	VUITextLayout* _buttonTextLayout;

}

@property (assign,nonatomic) unsigned long long currentIndex;                                //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) VUILabel * currentLabel;                                        //@synthesize currentLabel=_currentLabel - In the implementation block
@property (nonatomic,retain) VUILabel * altLabel;                                            //@synthesize altLabel=_altLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * chevronDownImageView;                            //@synthesize chevronDownImageView=_chevronDownImageView - In the implementation block
@property (nonatomic,retain) VUITextLayout * buttonTextLayout;                               //@synthesize buttonTextLayout=_buttonTextLayout - In the implementation block
@property (nonatomic,retain) NSArray * seasonTitles;                                         //@synthesize seasonTitles=_seasonTitles - In the implementation block
@property (assign,nonatomic,__weak) id<VUISeasonPickerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)configureWithExistingView:(id)arg1 ;
-(VUILabel *)currentLabel;
-(void)setCurrentLabel:(VUILabel *)arg1 ;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<VUISeasonPickerButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<VUISeasonPickerButtonDelegate>)delegate;
-(unsigned long long)currentIndex;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(NSArray *)seasonTitles;
-(void)_updateLabelsWithSeasonTitles:(id)arg1 ;
-(void)setChevronDownImageView:(_TVImageView *)arg1 ;
-(void)setAltLabel:(VUILabel *)arg1 ;
-(VUILabel *)altLabel;
-(void)setSeasonTitles:(NSArray *)arg1 ;
-(void)switchToIndex:(unsigned long long)arg1 ;
-(_TVImageView *)chevronDownImageView;
-(VUITextLayout *)buttonTextLayout;
-(void)setButtonTextLayout:(VUITextLayout *)arg1 ;
@end

