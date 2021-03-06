/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFPBrush, MFPCustomLineCap;

@interface MFPPen : NSObject {

	MFPBrush* mBrush;
	float mWidth;
	CGAffineTransform mTransform;
	int mStartCap;
	int mEndCap;
	int mLineJoin;
	float mMiterLimit;
	int mDashStyle;
	int mDashCap;
	float mDashOffset;
	int mDashPatternCount;
	float* mDashPattern;
	int mAlignment;
	int mCompoundArrayCount;
	float* mCompoundArray;
	MFPCustomLineCap* mCustomStartCap;
	MFPCustomLineCap* mCustomEndCap;

}
-(int)lineJoin;
-(void)setStartCap:(int)arg1 ;
-(void)setEndCap:(int)arg1 ;
-(void)setDashStyle:(int)arg1 ;
-(void)setDashCap:(int)arg1 ;
-(void)setDashOffset:(float)arg1 ;
-(void)setDashPattern:(const float*)arg1 count:(int)arg2 ;
-(void)setCompoundArray:(const float*)arg1 count:(int)arg2 ;
-(void)setBrush:(id)arg1 ;
-(void)setDashPattern:(const float*)arg1 count:(int)arg2 toPath:(id)arg3 ;
-(void)applyLineCapToPath:(id)arg1 ;
-(void)applyDashCapToPath:(id)arg1 ;
-(void)applyLineJoinToPath:(id)arg1 ;
-(void)applyDashPatternToPath:(id)arg1 ;
-(id)brush;
-(int)startCap;
-(int)endCap;
-(int)dashStyle;
-(int)dashCap;
-(float)dashOffset;
-(int)dashPatternCount;
-(const float*)dashPattern;
-(int)compoundArrayCount;
-(const float*)compoundArray;
-(id)customStartCap;
-(void)setCustomStartCap:(id)arg1 ;
-(id)customEndCap;
-(void)setCustomEndCap:(id)arg1 ;
-(void)strokePath:(id)arg1 ;
-(int)alignment;
-(id)init;
-(void)dealloc;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(CGAffineTransform)transform;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(void)setLineJoin:(int)arg1 ;
@end

