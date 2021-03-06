/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPListLabelGeometry : NSObject {

	double mScale;
	double mBaselineOffset;
	BOOL mScaleWithText;

}

@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double baselineOffset; 
@property (assign,nonatomic) BOOL scaleWithText; 
+(id)listLabelGeometry;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(id)initWithScale:(double)arg1 scaleWithText:(BOOL)arg2 baselineOffset:(double)arg3 ;
-(BOOL)scaleWithText;
-(void)setScaleWithText:(BOOL)arg1 ;
@end

