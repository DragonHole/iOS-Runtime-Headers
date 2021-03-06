/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSButton.h>

@protocol CPTemplateDelegate;
@class CPSAbridgableLabel, UIView, CPGridButton;

@interface CPSGridButton : CPSButton {

	CPSAbridgableLabel* _customTitleLabel;
	UIView* _focusView;
	CPGridButton* _gridButton;
	id<CPTemplateDelegate> _templateDelegate;

}

@property (nonatomic,retain) CPSAbridgableLabel * customTitleLabel;                       //@synthesize customTitleLabel=_customTitleLabel - In the implementation block
@property (nonatomic,retain) UIView * focusView;                                          //@synthesize focusView=_focusView - In the implementation block
@property (nonatomic,retain) CPGridButton * gridButton;                                   //@synthesize gridButton=_gridButton - In the implementation block
@property (assign,nonatomic,__weak) id<CPTemplateDelegate> templateDelegate;              //@synthesize templateDelegate=_templateDelegate - In the implementation block
+(id)buttonWithGridButton:(id)arg1 templateDelegate:(id)arg2 ;
-(UIView *)focusView;
-(void)setFocusView:(UIView *)arg1 ;
-(CPSAbridgableLabel *)customTitleLabel;
-(void)setCustomTitleLabel:(CPSAbridgableLabel *)arg1 ;
-(void)setGridButton:(CPGridButton *)arg1 ;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(CPGridButton *)gridButton;
-(double)preferredLabelWidth;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

