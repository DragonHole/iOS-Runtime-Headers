/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

@interface PDAnimateColorBehavior : PDAnimateBehavior {

	BOOL mHasBy;
	double mBy[3];
	BOOL mHasFrom;
	OADColor* mFrom;
	BOOL mHasTo;
	OADColor* mTo;
	BOOL mHasColorSpace;
	int mColorSpace;
	BOOL mHasColorDirection;
	int mDirection;

}
-(void)setFrom:(id)arg1 ;
-(void)setTo:(id)arg1 ;
-(BOOL)hasFrom;
-(BOOL)hasTo;
-(id)from;
-(id)to;
-(void)setColorSpace:(int)arg1 ;
-(double*)by;
-(void)setBy:(double)arg1 ;
-(BOOL)hasBy;
-(BOOL)hasColorSpace;
-(BOOL)hasColorDirection;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(int)colorSpace;
@end

