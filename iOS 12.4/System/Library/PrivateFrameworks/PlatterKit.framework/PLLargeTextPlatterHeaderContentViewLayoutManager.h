/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLPlatterHeaderContentViewLayoutManager.h>

@class NSMutableDictionary, NSStringDrawingContext;

@interface PLLargeTextPlatterHeaderContentViewLayoutManager : PLPlatterHeaderContentViewLayoutManager {

	NSMutableDictionary* _widthToStringToMeasuredNumLines;
	NSStringDrawingContext* _drawingContext;

}
-(id)_dateLabelFont;
-(void)_invalidateNumberOfLinesCache;
-(CGRect)_titleLabelBoundsForSize:(CGSize)arg1 withNumberOfLines:(double)arg2 ;
-(double)_titleLabelBaselineOffset;
-(id)initWithPlatterHeaderContentView:(id)arg1 ;
-(double)headerHeightForWidth:(double)arg1 ;
-(double)contentBaseline;
-(void)layoutIconButtonsWithScale:(double)arg1 ;
-(void)layoutTitleLabelWithTrailingXLimit:(double)arg1 scale:(double)arg2 ;
-(void)layoutUtilityButtonWithScale:(double)arg1 ;
-(void)layoutDateLabelWithScale:(double)arg1 ;
-(long long)_measuredNumberOfLinesForLabel:(id)arg1 withWidth:(double)arg2 ;
-(CGRect)_dateLabelBoundsForSize:(CGSize)arg1 ;
-(double)_largeTextLabelBaselineOffsetFromBottom;
-(CGRect)_utilityButtonTitleLabelBoundsForSize:(CGSize)arg1 withNumberOfLines:(double)arg2 ;
-(double)_largeTextUtilityLabelBaselineOffset;
-(double)_dateLabelBaselineOffset;
-(long long)_numberOfLinesForLabel:(id)arg1 withSize:(CGSize)arg2 ;
@end

