/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStyledLayout.h>

@class TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout {

	CGRect mCachedAlignmentFrame;
	struct {
		unsigned alignmentFrame : 1;
	}  mMediaInvalidFlags;
	TSDMutableStroke* mDynamicStroke;
	BOOL mShouldRenderFrameStroke;
	CGRect mBoundsForStandardKnobs;

}

@property (assign,nonatomic) CGRect boundsForStandardKnobs; 
@property (assign,nonatomic) BOOL shouldRenderFrameStroke; 
-(CGRect)boundsForStandardKnobs;
-(id)initWithInfo:(id)arg1 ;
-(BOOL)supportsRotation;
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)alignmentFrame;
-(BOOL)isStrokeBeingManipulated;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthUpdateToValue:(double)arg1 ;
-(void)dynamicStrokeWidthChangeDidEnd;
-(CGRect)alignmentFrameInRoot;
-(void)invalidateAlignmentFrame;
-(BOOL)shouldRenderFrameStroke;
-(void)setShouldRenderFrameStroke:(BOOL)arg1 ;
-(void)setBoundsForStandardKnobs:(CGRect)arg1 ;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(id)mediaInfo;
-(void)setGeometry:(id)arg1 ;
-(id)stroke;
@end

