/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface MCDPlaybackProgressView : UIView {

	BOOL _highlighted;
	BOOL _shouldResizeCurrentProgress;
	double _playbackProgress;
	UIView* _overallProgressView;
	UIView* _currentProgressView;

}

@property (nonatomic,retain) UIView * overallProgressView;                  //@synthesize overallProgressView=_overallProgressView - In the implementation block
@property (nonatomic,retain) UIView * currentProgressView;                  //@synthesize currentProgressView=_currentProgressView - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeCurrentProgress;              //@synthesize shouldResizeCurrentProgress=_shouldResizeCurrentProgress - In the implementation block
@property (assign,nonatomic) double playbackProgress;                       //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                              //@synthesize highlighted=_highlighted - In the implementation block
-(double)playbackProgress;
-(void)setPlaybackProgress:(double)arg1 ;
-(void)_setProgressViewColor:(BOOL)arg1 ;
-(void)setShouldResizeCurrentProgress:(BOOL)arg1 ;
-(UIView *)currentProgressView;
-(UIView *)overallProgressView;
-(BOOL)shouldResizeCurrentProgress;
-(void)setOverallProgressView:(UIView *)arg1 ;
-(void)setCurrentProgressView:(UIView *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
@end
