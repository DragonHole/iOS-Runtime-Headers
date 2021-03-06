/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUControlPanelCell.h>

@class HUSimpleSliderControlView, NSArray;

@interface HUSliderControlCell : HUControlPanelCell {

	HUSimpleSliderControlView* _sliderView;
	NSArray* _sliderConstraints;

}

@property (nonatomic,copy) NSArray * sliderConstraints;                           //@synthesize sliderConstraints=_sliderConstraints - In the implementation block
@property (nonatomic,retain) HUSimpleSliderControlView * sliderView;              //@synthesize sliderView=_sliderView - In the implementation block
-(void)_updateSliderConstraints;
-(id)allControlViews;
-(void)setSliderView:(HUSimpleSliderControlView *)arg1 ;
-(HUSimpleSliderControlView *)sliderView;
-(NSArray *)sliderConstraints;
-(void)setSliderConstraints:(NSArray *)arg1 ;
-(void)prepareForReuse;
@end

