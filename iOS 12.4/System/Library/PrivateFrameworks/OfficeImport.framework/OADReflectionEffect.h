/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADEffect.h>

@interface OADReflectionEffect : OADEffect {

	float mBlurRadius;
	float mStartOpacity;
	float mStartPosition;
	float mEndOpacity;
	float mEndPosition;
	float mDistance;
	float mDirection;
	float mFadeDirection;
	float mXScale;
	float mYScale;
	float mXSkew;
	float mYSkew;
	int mAlignment;
	BOOL mRotateWithShape;

}
-(void)setRotateWithShape:(BOOL)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)rotateWithShape;
-(void)setYSkew:(float)arg1 ;
-(void)setYScale:(float)arg1 ;
-(void)setXSkew:(float)arg1 ;
-(void)setXScale:(float)arg1 ;
-(float)endOpacity;
-(float)fadeDirection;
-(float)xScale;
-(float)yScale;
-(float)xSkew;
-(float)ySkew;
-(void)setEndOpacity:(float)arg1 ;
-(void)setEndPosition:(float)arg1 ;
-(void)setFadeDirection:(float)arg1 ;
-(float)startOpacity;
-(void)setStartOpacity:(float)arg1 ;
-(int)alignment;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(void)setBlurRadius:(float)arg1 ;
-(float)blurRadius;
-(float)direction;
-(void)setDistance:(float)arg1 ;
-(float)distance;
-(void)setDirection:(float)arg1 ;
-(float)startPosition;
-(void)setStartPosition:(float)arg1 ;
-(float)endPosition;
@end

