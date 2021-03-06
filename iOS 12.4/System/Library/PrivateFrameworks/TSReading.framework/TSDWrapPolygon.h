/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSDWrapPolygon : NSObject <NSCopying> {

	void* mPolygon;
	BOOL mIntersectsSelf;
	BOOL mComputedSelfIntersection;
	CGRect mBounds;
	BOOL mComputedBounds;

}
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(void)setIntersectsSelf:(BOOL)arg1 ;
-(void)p_setPolygon:(SCD_Struct_TS75*)arg1 ;
-(void)p_freePolygon;
-(void)p_computeIntersectionState;
-(BOOL)intersectsSelf;
-(void*)polygon;
-(CGPoint)intersectionPointBetween:(CGPoint)arg1 and:(CGPoint)arg2 ;
-(int)p_countSegments;
-(void)dealloc;
-(CGRect)bounds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(id)arg1 ;
-(id)bezierPath;
-(id)initWithPath:(id)arg1 ;
@end

