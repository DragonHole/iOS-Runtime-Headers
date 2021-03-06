/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUBarCompressionAnimating
@property (nonatomic,readonly) BOOL shouldCompressAtTop; 
@property (assign,nonatomic) double topOffset; 
@required
-(void)setTopOffset:(double)arg1;
-(double)topOffset;
-(void)updateWithPercentage:(double)arg1;
-(void)scrollViewIsAtTop:(BOOL)arg1;
-(BOOL)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(BOOL)arg2;
-(double)maximumBarHeightForTraitCollection:(id)arg1;
-(double)minimumBarHeightForTraitCollection:(id)arg1;
-(void)reloadWithTraitCollection:(id)arg1;
-(BOOL)shouldCompressAtTop;

@end

