/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngineUI/REUpNextBaseCell.h>

@class UILayoutGuide, REUpNextImageView, UILabel, UIVisualEffectView;

@interface REUpNextLargeWithDetailTextCell : REUpNextBaseCell {

	UILayoutGuide* _contentLayoutGuide;
	REUpNextImageView* _bodyImage;
	UILabel* _headerLabel;
	UILabel* _bodyLabel;
	UILabel* _detail1Label;
	UILabel* _detail2Label;
	UIVisualEffectView* _headerEffectView;
	UIVisualEffectView* _bodyEffectView;
	UIVisualEffectView* _detail1EffectView;
	UIVisualEffectView* _detail2EffectView;

}
+(void)initialize;
-(void)configureWithContent:(id)arg1 ;
-(void)defaultTextColorDidChange;
-(void)_updateHeaderColor;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
-(id)initWithFrame:(CGRect)arg1 ;
@end
