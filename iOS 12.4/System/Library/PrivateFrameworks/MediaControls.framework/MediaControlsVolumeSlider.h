/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <MediaPlayer/MPVolumeSlider.h>

@interface MediaControlsVolumeSlider : MPVolumeSlider
-(id)_thumbImageForStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_updateStyle;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
@end

